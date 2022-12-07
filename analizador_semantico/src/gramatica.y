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
%token THEN 
%token CORIZQ
%token CORDER
%token COMA
%token MAIN
%token RETURN
%token INI_DECLAR_VAR
%token FIN_DECLAR_VAR
%token ELSE
%token DO
%token SENT_LIST
%token DOLAR
%token CADENA
%token ASTERISCO
%token ARRARR
%left OP_OR_LOG
%left OP_AND_LOG
%left OP_EQ_NEQ
%left OP_REL
%left MAS_MENOS MENOSMENOS MASMAS ARRARR
%left OP_MUL ASTERISCO OP_LIST_MUL
%right NEGACION OP_LIST_UN OP_AND_LIST
%left ARROBA

%%

programa                    : MAIN bloque ;

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

cuerpo_declar_variables     : DECLAR ID
                              {
                                $$.type = $1.type;
                                setType($1);
                                VarList_Id($2, &$$);
                              }
                              asig_valor mas_variables PYC 
                            | DECLAR ID error
                            | DECLAR error
                            | error ;

mas_variables               : mas_variables COMA ID asig_valor 
                              {
                                VarList_Id($3, &$$);
                              }
                            | ;

asig_valor                  : OP_ASIGNACION expresion 
                            | ;

cabecera_subprograma        : DECLAR ID { setType($1); decParam = 1; TS_AddFunction($2); }
                              PARIZQ declaraciones_id PARDER { decParam = 0; $4.nDim = 0; }
                            | error ;

declaraciones_id            : declaraciones_id COMA param
                            | param
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

sentencia_asignacion        : ID OP_ASIGNACION expresion PYC { Check_Assign($1, $3); }
                            | error;

sentencia_if                : SI PARIZQ expresion PARDER THEN sentencia { Check_Boolean($3); }
                            | SI PARIZQ expresion PARDER THEN sentencia ELSE sentencia { Check_Boolean($3); }
                              ;

asignacion_for_pascal       : ID OP_ASIGNACION expresion { Check_Assign($1, $3); }
                            | DECLAR ID OP_ASIGNACION expresion { Check_Assign($2, $4); }
                            | error ;

sentencia_for_pascal        : FOR asignacion_for_pascal TO valor DO sentencia { Check_Int($4); }
                              ;

valor                       : CONST_INT { $$.type = INT; }
                            | ID { $$.type = $1.type; }
                              ;

sentencia_while             : MIENTRAS PARIZQ expresion PARDER sentencia ;

sentencia_entrada           : METERDATOS lista_variables PYC ;

lista_variables             : lista_variables COMA ID { VarList_Id($3, &$$); }
                            | ID { VarList_Id($1, &$$); }
                            | error ;

sentencia_salida            : SACARDATOS lista_expresiones_o_cadena PYC ;

lista_expresiones_o_cadena  : lista_expresiones_o_cadena COMA expr_cad 
                            | expr_cad ;

expr_cad                    : expresion 
                            | CADENA ;

sentencia_return            : RETURN expresion { TS_CheckReturn($2, &$$); }
                              PYC ;

expresion                   : PARIZQ expresion PARDER { $$.type = $2.type; $$.nDim = $2.nDim; }
                            | MASMAS expresion { Check_IncrementDecrement($1, $2, &$$); }
                            | MENOSMENOS expresion
                            | expresion MASMAS { Check_IncrementDecrement($2, $1, &$$); }
                            | expresion MENOSMENOS
                            | ASTERISCO expresion %prec NEGACION
                            | OP_LIST_UN expresion
                            | MAS_MENOS expresion %prec NEGACION
                            | NEGACION expresion
                            | OP_AND_LIST expresion
                            | expresion ARRARR expresion
                            | expresion MAS_MENOS expresion
                            | expresion OP_LIST_MUL expresion
                            | expresion OP_OR_LOG expresion
                            | expresion OP_AND_LOG expresion
                            | expresion OP_EQ_NEQ expresion
                            | expresion OP_REL expresion { Check_OpBinaryRel($1, $2, $3, &$$); }
                            | expresion ASTERISCO expresion
                            | expresion OP_MUL expresion
                            | expresion MENOSMENOS expresion
                            | expresion MASMAS expresion ARROBA expresion
                            | ID { $$.type = TS_GetType($1); $$.nDim = TS_GetNDim($1); decVar = 0; }
                            | constante { $$.type = $1.type; $$.nDim = $1.nDim; }
                            | funcion { $$.type = $1.type; $$.nDim = $1.nDim; currentFunction = -1; }                   
                            | agregado { $$.type = $1.type; $$.nDim = $1.nDim; }
                            

sentencia_adelante_atras    : ID SENT_LIST PYC ;

sentencia_principio_lista   : DOLAR ID PYC ;

constante                   : constante_base
                            | constante_lista ;

constante_base              : CONST_INT { $$.type = INT; }
                            | CONST_FLOAT { $$.type = FLOAT; }
                            | CONST_BOOL { $$.type = BOOLEAN; }
                            | CONST_CHAR { $$.type = CHAR; }
                              ;

constante_lista             : constante_lista_int { $$.type = LIST_INT; $$.nDim = $1.nDim; }
                            | constante_lista_float { $$.type = LIST_FLOAT; $$.nDim = $1.nDim; }
                            | constante_lista_bool { $$.type = LIST_BOOLEAN; $$.nDim = $1.nDim; }
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

agregado                    : CORIZQ constante_lista CORDER { $$.type = $2.type; }
                              ;

funcion                     : ID  PARIZQ lista_expresiones_o_cadena PARDER ;

%%

#include "lex.yy.c"

void yyerror(const char *msg ) 
{
    fprintf(stderr,"[Linea %d]: %s\n", line, msg) ;
}
