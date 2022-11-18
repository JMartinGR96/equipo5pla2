%{

    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

    void yyerror( char * msg ) ;

    int linea_actual = 1 ;

    #define YYERROR_VERBOSE

%}

//%start programa

%token OP_ASIGNACION
%token OP_BINARIO
%token NEGACION
%token ID
%token CONST
%token DECLAR
%token PARDER
%token PARIZQ
%token UNYBIN
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
%token MASMAS
%token ARROBA
%token INI_DECLAR_VAR
%token FIN_DECLAR_VAR
%token ELSE
%token DO
%token OP_LIST_UN
%token SENT_LIST
%token DOLAR
%token CADENA

%%

programa                    : MAIN bloque ;

bloque                      : INICIOBLOQUE declar_de_variables_locales declar_de_subprogs sentencias FINBLOQUE ;

declar_de_variables_locales : INI_DECLAR_VAR  variables_locales FIN_DECLAR_VAR 
                            | ;

declar_de_subprogs          : declar_de_subprogs declar_subprog 
                            | ;                                          

declar_subprog              : cabecera_subprograma bloque ;

variables_locales           : variables_locales cuerpo_declar_variables 
                            | cuerpo_declar_variables ;

cuerpo_declar_variables     : DECLAR ID asig_valor mas_variables PYC 
                            | DECLAR ID error
                            | DECLAR error
                            | error ;

mas_variables               : mas_variables COMA ID asig_valor 
                               | ;

asig_valor                  : OP_ASIGNACION expresion 
                            | ;

cabecera_subprograma        : DECLAR ID PARIZQ PARDER 
                            | DECLAR ID PARIZQ declaraciones_id PARDER 
                            | error ;

declaraciones_id            : declaraciones_id COMA DECLAR ID  
                            | DECLAR ID ;

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

sentencia_asignacion        : ID OP_ASIGNACION expresion PYC ;

sentencia_if                : SI PARIZQ expresion PARDER THEN sentencia 
                            | SI PARIZQ expresion PARDER THEN sentencia ELSE sentencia ;

sentencia_for_pascal        : FOR sentencia_asignacion TO valor DO sentencia ;

valor                       : CONST 
                            | ID ;

sentencia_while             : MIENTRAS PARIZQ expresion PARDER sentencia ;

sentencia_entrada           : METERDATOS lista_variables PYC ;

lista_variables             : lista_variables COMA ID 
                            | ID 
                            | error ;

sentencia_salida            : SACARDATOS lista_expresiones_o_cadena PYC ;

lista_expresiones_o_cadena  : lista_expresiones_o_cadena COMA expr_cad 
                            | expr_cad ;

expr_cad                    : expresion 
                            | CADENA ;

sentencia_return            : RETURN expresion PYC ;

expresion                   : PARIZQ expresion PARDER 
                            | op_unario expresion 
                            | expresion op_binario expresion 
                            | expresion MASMAS expresion ARROBA expresion 
                            | ID 
                            | CONST 
                            | funcion 
                            | agregado 
                            | error ;

op_binario                  : ARROBA 
                            | OP_BINARIO 
                            | UNYBIN ;

op_unario                   : MASMAS 
                            | UNYBIN 
                            | NEGACION 
                            | OP_LIST_UN ;

sentencia_adelante_atras    : ID SENT_LIST PYC ;

sentencia_principio_lista   : DOLAR ID PYC ;

agregado                    : CORIZQ lista_consts CORDER ;

lista_consts                : lista_consts COMA CONST 
                            | CONST ;

funcion                     : ID  PARIZQ lista_expresiones_o_cadena PARDER ;

%%

#include "lex.yy.c"

void yyerror( char *msg ) 
{
    fprintf(stderr,"[Linea %d]: %s\n", linea_actual, msg) ;
}
