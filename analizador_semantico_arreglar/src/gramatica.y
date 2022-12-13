%{

    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "semantico.h"

    int yylex();
    void yyerror( const char * msg ) ;


    //int linea_actual = 1 ;

    #define YYERROR_VERBOSE

%}

%token OP_ASIGNACION
%token ID
%token CONST_INT CONST_FLOAT CONST_CHAR CONST_BOOL
%token DECLAR
%token PARDER
%token PARIZQ
%token METERDATOS
%token MIENTRAS
%token SI
%token SACARDATOS
%token FOR
%token INICIOBLOQUE
%token FINBLOQUE
%token PYC
%token TO 
%token CORIZQ
%token CORDER
%token COMA
%token MAIN
%token RETURN
%token INI_DECLAR_VAR
%token FIN_DECLAR_VAR
%token DO
%token SENT_LIST
%token DOLAR
%token CADENA
%token ARRARR
%token THEN
%token ELSE
%left OP_OR_LOG
%left OP_AND_LOG
%left OP_EQ_NEQ
%left OP_REL
%left MAS_MENOS MENOSMENOS MASMAS ARRARR
%left OP_MUL OP_LIST_MUL
%right NEGACION OP_LIST_UN OP_AND_LIST
%left ARROBA

%%

programa                    : { generaFich(); } MAIN bloque { closeInter(); }
                              ;

bloque                      : INICIOBLOQUE { TS_AddMark(); }
                              declar_de_variables_locales
                              declar_de_subprogs sentencias
                              FINBLOQUE { TS_ClearBlock(); }
                              ;

declar_de_variables_locales : INI_DECLAR_VAR {decVar = 1; }
                              variables_locales
                              FIN_DECLAR_VAR {decVar = 0; }
                            | ;

declar_de_subprogs          : declar_de_subprogs declar_subprog 
                            | ;                                          

declar_subprog              : cabecera_subprograma { esFunc = 1; }
                              bloque { esFunc = 0; }
                              ;

variables_locales           : variables_locales cuerpo_declar_variables 
                            | cuerpo_declar_variables ;

cuerpo_declar_variables     : DECLAR ID { $$.type = $1.type; setType($1);agregarNuevoID($2, &$$); declarID($2); } 
                              mas_variables PYC { pycYSalto(); }
                            | DECLAR ID error
                            | DECLAR error
                            | error ;

mas_variables               : mas_variables COMA ID 
                              {
                                declarListID($3);
                                agregarNuevoID($3, &$$);
                              }
                            | ;

cabecera_subprograma        : DECLAR ID { setType($1); decParam = 1; TS_AddFunction($2); }
                              PARIZQ declaraciones_id PARDER { decParam = 0; $4.nDim = 0; }
                              ;

declaraciones_id            : declaraciones_id COMA param 
                            | param 
                            | declaraciones_id COMA error
                            | ;

param                       : DECLAR ID { setType($1); TS_AddParam($2); }
                              ;

sentencias                  : sentencias sentencia 
                            | ;

sentencia                   : bloque 
                            | sentencia_asignacion 
                            | sentencia_if
                            | sentencia_for_pascal 
                            | sentencia_while 
                            | sentencia_entrada 
                            | sentencia_salida 
                            | sentencia_return 
                            | sentencia_adelante_atras 
                            | sentencia_principio_lista ;

sentencia_asignacion        : ID OP_ASIGNACION expresion PYC { comprobarAsignacion($1, $3); evaluar_sentencia_asig($1, $3);}
                            | error;

sentencia_if                : SI PARIZQ expresion_if PARDER THEN sentencia { comprobarBooleano_if($3); } 
                            | SI PARIZQ expresion_if PARDER THEN sentencia ELSE sentencia { comprobarBooleano_if($3);}
                              ;

expresion_if                : expresion { line_if = line; $$.type = $1.type; }
                              ;

asignacion_for_pascal       : ID OP_ASIGNACION expresion { comprobarAsignacion($1, $3); comprobarEntero($3);}
                            | error ;

sentencia_for_pascal        : FOR asignacion_for_pascal TO valor DO sentencia { comprobarEntero($4); }
                              ;

valor                       : CONST_INT { $$.type = INT; }
                            | ID { TS_GetById($1,&$$); }
                              ;

sentencia_while             : MIENTRAS PARIZQ expresion PARDER sentencia { comprobarBooleano($3); }
                              ;

sentencia_entrada           : METERDATOS lista_variables PYC ;

lista_variables             : lista_variables COMA ID { agregarNuevoID($3, &$$); }
                            | ID { agregarNuevoID($1, &$$); }
                            | error ;

sentencia_salida            : SACARDATOS lista_expresiones_o_cadena PYC ;

lista_expresiones_o_cadena  : lista_expresiones_o_cadena COMA expr_cad { TS_CheckParam($3); }
                            | expr_cad {checkParams = 0; TS_CheckParam($1); }
                              ; 

expr_cad                    : expresion 
                            | CADENA ;

sentencia_return            : RETURN expresion { TS_CheckReturn($2, &$$); }
                              PYC ;

expresion                   : PARIZQ expresion PARDER { $$.type = $2.type; $$.nDim = $2.nDim; $$.eval = $2.eval; $$.temp_asociado = $2.temp_asociado;}
                            | MASMAS expresion { comprobarIncrementoDecremento($1, $2, &$$); evaluar_expresion_unaria($1, $2, &$$);}
                            | MENOSMENOS expresion { comprobarIncrementoDecremento($1, $2, &$$); evaluar_expresion_unaria($1, $2, &$$);}
                            | expresion MASMAS { comprobarIncrementoDecremento($2, $1, &$$); evaluar_expresion_unaria($2, $1, &$$);}
                            | expresion MENOSMENOS { comprobarIncrementoDecremento($2, $1, &$$); evaluar_expresion_unaria($2, $1, &$$);}
                            | OP_LIST_UN expresion { comprobarNumeroElementosLista($1, $2, &$$); }
                            | MAS_MENOS expresion %prec NEGACION { comprobarMasMenos($1, $2, &$$); evaluar_expresion_unaria($1, $2, &$$);}
                            | NEGACION expresion {comprobarNegacionConBooleano($1, $2, &$$); evaluar_expresion_unaria($1, $2, &$$);}
                            | OP_AND_LIST expresion // Pa que cojones se usa????
                            | expresion ARRARR expresion {comprobarPosicionLista($1,$2,$3,&$$);}
                            | expresion MAS_MENOS expresion { comprobarMasMenosBinario($1, $2, $3, &$$); evaluar_expresion($1, $2, $3, &$$); } 
                            | expresion OP_LIST_MUL expresion {comprobaOperadorBinarioConcatenarListas($1, $2, $3, &$$);}
                            | expresion OP_OR_LOG expresion { comprobarOperadorBinarioAndOr($1, $2, $3, &$$); evaluar_expresion($1, $2, $3, &$$);}
                            | expresion OP_AND_LOG expresion { comprobarOperadorBinarioAndOr($1, $2, $3, &$$); evaluar_expresion($1, $2, $3, &$$);}
                            | expresion OP_EQ_NEQ expresion { comprobarOperadorBinarioRelacion($1, $2, $3, &$$); evaluar_expresion($1, $2, $3, &$$);}
                            | expresion OP_REL expresion { comprobarOperadorBinarioRelacion($1, $2, $3, &$$); evaluar_expresion($1, $2, $3, &$$);}
                            | expresion OP_MUL expresion {comprobaOperadorBinarioMultiplicacion($1, $2, $3, &$$); evaluar_expresion($1, $2, $3, &$$);}
                            | expresion MENOSMENOS expresion {comprobarMenosMenos($1,$2,$3,&$$);}
                            | expresion MASMAS expresion ARROBA expresion {comprobarOperadorTernarioLista($1, $2, $3, $4, $5, &$$); }
                            | ID { $$.type = TS_GetType($1); $$.nDim = TS_GetNDim($1); decVar = 0; $$.eval = "";$$.temp_asociado = $1.lex;}
                            | constante { $$.type = $1.type; $$.nDim = $1.nDim; $$.eval = "";$$.temp_asociado = $1.lex; }
                            | funcion { $$.type = $1.type; $$.nDim = $1.nDim; currentFunction = -1; $$.eval = "";$$.temp_asociado = $1.lex;}                   
                            | agregado { $$.type = $1.type; $$.nDim = $1.nDim; }
                              ;
                            

sentencia_adelante_atras    : ID SENT_LIST PYC ;

sentencia_principio_lista   : DOLAR ID PYC ;

constante                   : CONST_INT { $$.type = INT; }
                            | CONST_FLOAT { $$.type = FLOAT; }
                            | CONST_BOOL { $$.type = BOOL; }
                            | CONST_CHAR { $$.type = CHAR; }
                              ;

agregado                    : CORIZQ constante_lista CORDER { $$.type = $2.type; }
                              ;

constante_lista             : constante_lista_int { $$.type = LIST_INT; $$.nDim = $1.nDim; }
                            | constante_lista_float { $$.type = LIST_FLOAT; $$.nDim = $1.nDim; }
                            | constante_lista_bool { $$.type = LIST_BOOL; $$.nDim = $1.nDim; }
                            | constante_lista_char { $$.type = LIST_CHAR; $$.nDim = $1.nDim; }
                              ;

constante_lista_int         : constante_lista_int COMA CONST_INT
                            | CONST_INT ;
constante_lista_float       : constante_lista_float COMA CONST_FLOAT
                            | CONST_FLOAT ;
constante_lista_bool        : constante_lista_bool COMA CONST_BOOL
                            | CONST_BOOL ;
constante_lista_char        : constante_lista_char COMA CONST_CHAR
                            | CONST_CHAR ;

funcion                     : cabecera_funcion argumentos_funcion { $$.attr = $2.attr; $$.type = $2.type, $$.nDim = $2.nDim; }
                              ;

cabecera_funcion            : ID PARIZQ { comprobarLlamadaAFuncion($1); }

argumentos_funcion          : lista_expresiones_o_cadena PARDER {TS_FunctionCall(&$$);}

%%

#include "lex.yy.c"

void yyerror(const char *msg ) 
{
    fprintf(stderr,"[Linea %d]: %s\n", line, msg) ;
}
