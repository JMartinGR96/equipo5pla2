%{
#include "tabla_tokens.h"
int atributo = -1;
%}

letra	[a-zA-Z_]
digito  [0-9]

%option yylineno
%option noyywrap
%%

"Robert"  								return(MAIN); 
"return"  								return(RETURN);
"while"   								return(MIENTRAS);
"if"      								return(SI);
"for"     								return(FOR);
"to"      								return(TO);
"then"    								return(THENELSEDO);
"else"    								return(THENELSEDO);
"do"      								return(THENELSEDO);
				
"list of int"   						return(DECLAR);
"list of char"  						return(DECLAR);
"list of float" 						return(DECLAR);
"list of bool"  						return(DECLAR);
"int"									return(DECLAR);
"char"          						return(DECLAR);
"float"         						return(DECLAR);
"bool"          						return(DECLAR);
				
")"             						return(PARDER);
"("             						return(PARIZQ);
"["             						return(CORIZQ);
"]"             						return(CORDER);
"{"             						return(INICIOBLOQUE);
"}"             						return(FINBLOQUE);
";"             						return(PYC);
","             						return(COMA);
"++"            						return(MASMAS);
"@"             						return(ARROBA);
"="             						return(OP_ASIGNACION);
"/" 		    						return(OP_BINARIO);
"%"             						return(OP_BINARIO);
"*"             						return(OP_BINARIO);
"<" 									return(OP_BINARIO);
"<="									return(OP_BINARIO);
"=="									return(OP_BINARIO);
">="									return(OP_BINARIO);
">"										return(OP_BINARIO);
"&"										return(OP_BINARIO);
"|"										return(OP_BINARIO);
"!="									return(OP_BINARIO);
"^"										return(OP_BINARIO);
"&&"									return(OP_BINARIO);
"||"									return(OP_BINARIO);
"<<"									return(OP_UNARIO);
">>"									return(OP_UNARIO);
"!"										return(OP_UNARIO);
"+"										return(UNYBIN);
"-"										atributo = 2; return(UNYBIN);
"meter->"								return(METERDATOS);
"sacar<-"								return(SACARDATOS);
"begin_var"								return(INI_DECLAR_VAR);
"/end_var"								return(FIN_DECLAR_VAR);
\'[^\']\'                           	return(CONST);
\"[^\"]*\"                           	return(CONST);
"true"                         			return(CONST);
"false"                           		return(CONST);
{digito}({digito})*						return(CONST);
{digito}({digito})*"."({digito})*		return(CONST);
{letra}({letra}|{digito})*				return(ID);



[ \t]+                              	{}
\n                                  	{}
.                             			printf("Error lexico en línea %d, no se reconoce %s\n", yylineno, yytext);

%%

int main(int argc, char** argv) {
	// Comprobamos que los argumentos son correctos
  	if (argc <= 1) {
		printf("\nERROR: el numero de argumentos introducidos es incorrecto\n");
		printf("\nEjecucion correcta: %s nombre_fichero\n", argv[0]);
		exit(-1);
  	}

    // Abrimos el fichero en modo lectura (r)
    yyin = fopen(argv[1], "r");

    // En caso de no poder abrir el fichero (NULL) mostramos el error 
    if (yyin == NULL) {
        printf ("\nNo se ha podido abrir el fichero %s\n", argv[1]);
        exit (-2);
    }

    // Llamamos a yylex para lanzar el analizador lexico
  	int analyzer = yylex();

  	// Continuamos lanzando yylex() mientras quede fichero por leer
  	while (analyzer != 0) {
    	printf("__%d__ : ", analyzer);
		if (atributo != -1) {
			printf("(%d) ", atributo);
			atributo = -1;
		}
		else {
			printf("(-) ");
		}
		printf("%s\n", yytext);
    	analyzer = yylex();
  	}

	// Finaliza el programa
	exit(1);
}