/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OP_ASIGNACION = 258,
     ID = 259,
     CONST_INT = 260,
     CONST_FLOAT = 261,
     CONST_CHAR = 262,
     CONST_BOOL = 263,
     DECLAR = 264,
     PARDER = 265,
     PARIZQ = 266,
     METERDATOS = 267,
     MIENTRAS = 268,
     SI = 269,
     SACARDATOS = 270,
     FOR = 271,
     INICIOBLOQUE = 272,
     FINBLOQUE = 273,
     PYC = 274,
     TO = 275,
     CORIZQ = 276,
     CORDER = 277,
     COMA = 278,
     MAIN = 279,
     RETURN = 280,
     INI_DECLAR_VAR = 281,
     FIN_DECLAR_VAR = 282,
     DO = 283,
     SENT_LIST = 284,
     DOLAR = 285,
     CADENA = 286,
     ARRARR = 287,
     THEN = 288,
     ELSE = 289,
     OP_OR_LOG = 290,
     OP_AND_LOG = 291,
     OP_EQ_NEQ = 292,
     OP_REL = 293,
     MASMAS = 294,
     MENOSMENOS = 295,
     MAS_MENOS = 296,
     OP_LIST_MUL = 297,
     OP_MUL = 298,
     OP_AND_LIST = 299,
     OP_LIST_UN = 300,
     NEGACION = 301,
     ARROBA = 302
   };
#endif
/* Tokens.  */
#define OP_ASIGNACION 258
#define ID 259
#define CONST_INT 260
#define CONST_FLOAT 261
#define CONST_CHAR 262
#define CONST_BOOL 263
#define DECLAR 264
#define PARDER 265
#define PARIZQ 266
#define METERDATOS 267
#define MIENTRAS 268
#define SI 269
#define SACARDATOS 270
#define FOR 271
#define INICIOBLOQUE 272
#define FINBLOQUE 273
#define PYC 274
#define TO 275
#define CORIZQ 276
#define CORDER 277
#define COMA 278
#define MAIN 279
#define RETURN 280
#define INI_DECLAR_VAR 281
#define FIN_DECLAR_VAR 282
#define DO 283
#define SENT_LIST 284
#define DOLAR 285
#define CADENA 286
#define ARRARR 287
#define THEN 288
#define ELSE 289
#define OP_OR_LOG 290
#define OP_AND_LOG 291
#define OP_EQ_NEQ 292
#define OP_REL 293
#define MASMAS 294
#define MENOSMENOS 295
#define MAS_MENOS 296
#define OP_LIST_MUL 297
#define OP_MUL 298
#define OP_AND_LIST 299
#define OP_LIST_UN 300
#define NEGACION 301
#define ARROBA 302




/* Copy the first part of user declarations.  */
#line 1 "src/gramatica.y"


    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "semantico.h"

    int yylex();
    void yyerror( const char * msg ) ;

    //int linea_actual = 1 ;

    #define YYERROR_VERBOSE



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 216 "generated/y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    16,    17,    24,    25,
      30,    31,    34,    35,    36,    40,    43,    45,    49,    53,
      56,    58,    61,    65,    66,    67,    74,    78,    80,    84,
      85,    88,    91,    92,    94,    96,    98,   100,   102,   104,
     106,   108,   110,   112,   117,   119,   126,   135,   137,   139,
     145,   147,   152,   154,   156,   162,   164,   168,   172,   174,
     176,   180,   184,   186,   188,   190,   194,   196,   198,   202,
     206,   209,   212,   215,   218,   221,   224,   227,   230,   234,
     238,   242,   246,   250,   254,   258,   262,   266,   272,   274,
     276,   278,   280,   284,   288,   290,   292,   294,   296,   300,
     302,   304,   306,   308,   312,   314,   318,   320,   324,   326,
     330,   332,   335,   338
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    -1,    50,    24,    51,    -1,    -1,    17,
      52,    55,    57,    68,    18,    -1,    -1,    17,    54,    55,
      57,    68,    18,    -1,    -1,    26,    56,    60,    27,    -1,
      -1,    57,    58,    -1,    -1,    -1,    64,    59,    53,    -1,
      60,    61,    -1,    61,    -1,    62,    63,    19,    -1,     9,
       4,     1,    -1,     9,     1,    -1,     1,    -1,     9,     4,
      -1,    63,    23,     4,    -1,    -1,    -1,     9,     4,    65,
      11,    66,    10,    -1,    66,    23,    67,    -1,    67,    -1,
      66,    23,     1,    -1,    -1,     9,     4,    -1,    68,    69,
      -1,    -1,    53,    -1,    70,    -1,    71,    -1,    75,    -1,
      77,    -1,    79,    -1,    81,    -1,    86,    -1,    88,    -1,
      89,    -1,     4,     3,    87,    19,    -1,     1,    -1,    14,
      11,    73,    10,    33,    72,    -1,    14,    11,    73,    10,
      33,    72,    34,    69,    -1,    69,    -1,    87,    -1,     4,
       3,    87,    20,    76,    -1,     1,    -1,    16,    74,    28,
      69,    -1,     5,    -1,     4,    -1,    13,    11,    78,    10,
      69,    -1,    87,    -1,    12,    80,    19,    -1,    80,    23,
       4,    -1,     4,    -1,     1,    -1,    15,    82,    19,    -1,
      82,    23,    83,    -1,    83,    -1,     4,    -1,    31,    -1,
      84,    23,    85,    -1,    85,    -1,    87,    -1,    25,    87,
      19,    -1,    11,    87,    10,    -1,    39,    87,    -1,    40,
      87,    -1,    87,    39,    -1,    87,    40,    -1,    45,    87,
      -1,    41,    87,    -1,    46,    87,    -1,    44,    87,    -1,
      87,    32,    87,    -1,    87,    41,    87,    -1,    87,    42,
      87,    -1,    87,    35,    87,    -1,    87,    36,    87,    -1,
      87,    37,    87,    -1,    87,    38,    87,    -1,    87,    43,
      87,    -1,    87,    40,    87,    -1,    87,    39,    87,    47,
      87,    -1,     4,    -1,    90,    -1,    97,    -1,    91,    -1,
       4,    29,    19,    -1,    30,     4,    19,    -1,     5,    -1,
       6,    -1,     8,    -1,     7,    -1,    21,    92,    22,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    93,    23,
       5,    -1,     5,    -1,    94,    23,     6,    -1,     6,    -1,
      95,    23,     8,    -1,     8,    -1,    96,    23,     7,    -1,
       7,    -1,    98,    99,    -1,     4,    11,    -1,    84,    10,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    57,    60,    60,    67,    67,    74,    74,
      77,    79,    80,    82,    82,    86,    87,    89,    90,    91,
      92,    94,    97,   102,   104,   104,   108,   109,   110,   111,
     113,   116,   117,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   130,   131,   133,   134,   137,   140,   143,
     144,   146,   149,   150,   153,   156,   159,   162,   163,   164,
     166,   169,   170,   173,   174,   176,   177,   180,   183,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   212,   214,   216,   217,   218,   219,   222,   225,
     226,   227,   228,   231,   232,   233,   234,   235,   236,   237,
     238,   240,   247,   250
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_ASIGNACION", "ID", "CONST_INT",
  "CONST_FLOAT", "CONST_CHAR", "CONST_BOOL", "DECLAR", "PARDER", "PARIZQ",
  "METERDATOS", "MIENTRAS", "SI", "SACARDATOS", "FOR", "INICIOBLOQUE",
  "FINBLOQUE", "PYC", "TO", "CORIZQ", "CORDER", "COMA", "MAIN", "RETURN",
  "INI_DECLAR_VAR", "FIN_DECLAR_VAR", "DO", "SENT_LIST", "DOLAR", "CADENA",
  "ARRARR", "THEN", "ELSE", "OP_OR_LOG", "OP_AND_LOG", "OP_EQ_NEQ",
  "OP_REL", "MASMAS", "MENOSMENOS", "MAS_MENOS", "OP_LIST_MUL", "OP_MUL",
  "OP_AND_LIST", "OP_LIST_UN", "NEGACION", "ARROBA", "$accept", "programa",
  "@1", "bloque_main", "@2", "bloque", "@3", "declar_de_variables_locales",
  "@4", "declar_de_subprogs", "declar_subprog", "@5", "variables_locales",
  "cuerpo_declar_variables", "primera", "mas_variables",
  "cabecera_subprograma", "@6", "declaraciones_id", "param", "sentencias",
  "sentencia", "sentencia_asignacion", "sentencia_if", "_sentencia",
  "expresion_if", "asignacion_for_pascal", "sentencia_for_pascal", "valor",
  "sentencia_while", "expresion_while", "sentencia_entrada",
  "lista_variables", "sentencia_salida",
  "lista_expresiones_o_cadena_sacar", "expr_cad_sacar",
  "lista_expresiones_o_cadena", "expr_cad", "sentencia_return",
  "expresion", "sentencia_adelante_atras", "sentencia_principio_lista",
  "constante", "agregado", "constante_lista", "constante_lista_int",
  "constante_lista_float", "constante_lista_bool", "constante_lista_char",
  "funcion", "cabecera_funcion", "argumentos_funcion", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    50,    49,    52,    51,    54,    53,    56,    55,
      55,    57,    57,    59,    58,    60,    60,    61,    61,    61,
      61,    62,    63,    63,    65,    64,    66,    66,    66,    66,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    73,    74,
      74,    75,    76,    76,    77,    78,    79,    80,    80,    80,
      81,    82,    82,    83,    83,    84,    84,    85,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    89,    90,    90,    90,    90,    91,    92,
      92,    92,    92,    93,    93,    94,    94,    95,    95,    96,
      96,    97,    98,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     6,     0,     6,     0,     4,
       0,     2,     0,     0,     3,     2,     1,     3,     3,     2,
       1,     2,     3,     0,     0,     6,     3,     1,     3,     0,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     6,     8,     1,     1,     5,
       1,     4,     1,     1,     5,     1,     3,     3,     1,     1,
       3,     3,     1,     1,     1,     3,     1,     1,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     3,    10,     8,    12,
       0,    32,    20,     0,     0,    16,    23,     0,    11,    13,
       0,    19,     0,     9,    15,     0,    24,     0,    44,     0,
       0,     0,     0,     0,     0,     6,     5,     0,     0,    33,
      31,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      18,    17,     0,     0,    14,     0,     0,    59,    58,     0,
       0,     0,    63,    64,     0,    62,    50,     0,     0,    10,
      88,    94,    95,    97,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    91,    90,     0,     0,    22,
      29,     0,    92,    56,     0,     0,    55,     0,    48,    60,
       0,     0,     0,    12,   112,     0,   104,   106,   110,   108,
       0,    99,   100,   101,   102,    70,    71,    75,    77,    74,
      76,    68,     0,     0,     0,     0,     0,    72,    73,     0,
       0,     0,     0,    66,    67,   111,    93,     0,     0,    27,
      43,    57,     0,     0,    61,     0,    51,    32,    69,    98,
       0,     0,     0,     0,    78,    81,    82,    83,    84,     0,
      86,    79,    80,    85,   113,     0,    30,    25,     0,    54,
       0,     0,     0,   103,   105,   107,   109,     0,    65,    28,
      26,    47,    45,    53,    52,    49,     7,    87,     0,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,    39,    69,     9,    10,    11,
      18,    27,    14,    15,    16,    25,    19,    53,   138,   139,
      20,    40,    41,    42,   182,    97,    68,    43,   185,    44,
      95,    45,    59,    46,    64,    65,   132,   133,    47,   134,
      48,    49,    84,    85,   110,   111,   112,   113,   114,    86,
      87,   135
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -94
static const yytype_int16 yypact[] =
{
     -94,     5,   -17,   -94,    18,   -94,   -94,    -6,   -94,   -94,
       7,    37,   -94,    35,    52,   -94,   -94,    65,   -94,   -94,
     107,   -94,     3,   -94,   -94,     2,   -94,    95,   -94,     0,
      74,   116,   117,    -3,   125,   -94,   -94,    26,    72,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   127,   123,   -94,    26,   119,   -94,   -94,    90,
      26,    26,   -94,   -94,    91,   -94,   -94,   132,   108,    -6,
     128,   -94,   -94,   -94,   -94,    26,   110,    26,    26,    26,
      26,    26,    26,   147,   -94,   -94,   -94,    26,   131,   -94,
     139,   161,   -94,   -94,   149,   141,   199,   145,   199,   -94,
      -3,    26,   148,   -94,   -94,    64,   -94,   -94,   -94,   -94,
     134,   135,   144,   146,   151,    20,    20,   -94,   -94,   -94,
     -94,   -94,    26,    26,    26,    26,    26,     6,     6,    26,
      26,    26,    -8,   -94,   199,   -94,   -94,   153,    -4,   -94,
     -94,   -94,   148,   137,   -94,   174,   -94,    37,   -94,   -94,
     163,   165,   164,   168,    20,   211,   223,    16,    41,   186,
      20,    20,   -94,   -94,   -94,    26,   -94,   -94,    59,   -94,
     148,    93,   129,   -94,   -94,   -94,   -94,    26,   -94,   -94,
     -94,   -94,   142,   -94,   -94,   -94,   -94,   -94,   148,   -94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,   -94,   -94,   150,   -94,   112,   -94,    88,
     -94,   -94,   -94,   178,   -94,   -94,   -94,   -94,   -94,    27,
      58,   -93,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   120,   -94,    42,   -94,   -37,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -22
static const yytype_int16 yytable[] =
{
      83,    62,   164,    55,    50,     3,   167,     4,    12,   146,
      70,    71,    72,    73,    74,   165,    13,    75,    91,   168,
       8,    51,   -21,    96,    98,    52,   -21,    76,    63,    56,
      70,    71,    72,    73,    74,     5,    21,    75,   105,    22,
     115,   116,   117,   118,   119,   120,    17,    76,   122,   169,
      80,    81,    82,    12,   126,   127,   128,   129,   130,   131,
     179,    13,   130,   131,   145,    77,    78,    79,   137,    26,
      80,    81,    82,   122,   148,    57,    88,   181,    58,    23,
     127,   128,   129,   130,   131,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   189,   122,   183,   184,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    28,    93,
      99,    29,    35,    94,   100,   106,   107,   108,   109,    30,
      31,    32,    33,    34,    35,    36,    66,    60,    61,    67,
      28,    89,    37,    29,    90,   101,   102,    38,    92,   104,
     187,    30,    31,    32,    33,    34,    35,   186,   137,    28,
     136,   142,    29,   141,    37,   143,   149,   166,   150,    38,
      30,    31,    32,    33,    34,    35,   121,   151,   173,   152,
     170,   174,   175,    37,   153,   176,   188,    54,    38,   122,
     140,   103,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   147,    24,   122,   171,   180,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   172,   122,   178,     0,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   122,     0,
     144,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   122,     0,   177,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   122,     0,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   122,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131
};

static const yytype_int16 yycheck[] =
{
      37,     4,    10,     3,     1,     0,    10,    24,     1,   102,
       4,     5,     6,     7,     8,    23,     9,    11,    55,    23,
      26,    19,    19,    60,    61,    23,    23,    21,    31,    29,
       4,     5,     6,     7,     8,    17,     1,    11,    75,     4,
      77,    78,    79,    80,    81,    82,     9,    21,    32,   142,
      44,    45,    46,     1,    38,    39,    40,    41,    42,    43,
       1,     9,    42,    43,   101,    39,    40,    41,     9,     4,
      44,    45,    46,    32,    10,     1,     4,   170,     4,    27,
      39,    40,    41,    42,    43,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   188,    32,     4,     5,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     1,    19,
      19,     4,    17,    23,    23,     5,     6,     7,     8,    12,
      13,    14,    15,    16,    17,    18,     1,    11,    11,     4,
       1,     4,    25,     4,    11,     3,    28,    30,    19,    11,
     177,    12,    13,    14,    15,    16,    17,    18,     9,     1,
      19,    10,     4,     4,    25,    10,    22,     4,    23,    30,
      12,    13,    14,    15,    16,    17,    19,    23,     5,    23,
      33,     6,     8,    25,    23,     7,    34,    27,    30,    32,
      19,    69,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   103,    14,    32,    20,   168,    35,    36,    37,    38,
      39,    40,    41,    42,    43,   147,    32,   165,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    32,    -1,
     100,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    32,    -1,    47,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    32,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    50,     0,    24,    17,    51,    52,    26,    55,
      56,    57,     1,     9,    60,    61,    62,     9,    58,    64,
      68,     1,     4,    27,    61,    63,     4,    59,     1,     4,
      12,    13,    14,    15,    16,    17,    18,    25,    30,    53,
      69,    70,    71,    75,    77,    79,    81,    86,    88,    89,
       1,    19,    23,    65,    53,     3,    29,     1,     4,    80,
      11,    11,     4,    31,    82,    83,     1,     4,    74,    54,
       4,     5,     6,     7,     8,    11,    21,    39,    40,    41,
      44,    45,    46,    87,    90,    91,    97,    98,     4,     4,
      11,    87,    19,    19,    23,    78,    87,    73,    87,    19,
      23,     3,    28,    55,    11,    87,     5,     6,     7,     8,
      92,    93,    94,    95,    96,    87,    87,    87,    87,    87,
      87,    19,    32,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    84,    85,    87,    99,    19,     9,    66,    67,
      19,     4,    10,    10,    83,    87,    69,    57,    10,    22,
      23,    23,    23,    23,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    10,    23,     4,    10,    23,    69,
      33,    20,    68,     5,     6,     8,     7,    47,    85,     1,
      67,    69,    72,     4,     5,    76,    18,    87,    34,    69
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 57 "src/gramatica.y"
    { generaFich(); ;}
    break;

  case 3:
#line 57 "src/gramatica.y"
    { Robert(); volcar(); closeInter(); ;}
    break;

  case 4:
#line 60 "src/gramatica.y"
    { TS_AddMark(); nivel_bloque = 0;}
    break;

  case 5:
#line 64 "src/gramatica.y"
    { TS_ClearBlock(); ;}
    break;

  case 6:
#line 67 "src/gramatica.y"
    { TS_AddMark(); nivel_bloque++; ;}
    break;

  case 7:
#line 71 "src/gramatica.y"
    { TS_ClearBlock(); nivel_bloque--;;}
    break;

  case 8:
#line 74 "src/gramatica.y"
    {decVar = 1; ;}
    break;

  case 9:
#line 76 "src/gramatica.y"
    {decVar = 0; ;}
    break;

  case 13:
#line 82 "src/gramatica.y"
    { esFunc = 1; ;}
    break;

  case 14:
#line 83 "src/gramatica.y"
    { esFunc = 0;fputs("}\n",file_funciones); ;}
    break;

  case 17:
#line 89 "src/gramatica.y"
    { pycYSalto(); ;}
    break;

  case 21:
#line 94 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (2)]).type; setType((yyvsp[(1) - (2)]));agregarNuevoID((yyvsp[(2) - (2)]), &(yyval)); declarID((yyvsp[(2) - (2)])); ;}
    break;

  case 22:
#line 98 "src/gramatica.y"
    {
                                declarListID((yyvsp[(3) - (3)]));
                                agregarNuevoID((yyvsp[(3) - (3)]), &(yyval));
                              ;}
    break;

  case 24:
#line 104 "src/gramatica.y"
    { setType((yyvsp[(1) - (2)])); decParam = 1; TS_AddFunction((yyvsp[(2) - (2)])); ;}
    break;

  case 25:
#line 105 "src/gramatica.y"
    { decParam = 0; (yyvsp[(4) - (6)]).nDim = 0; impresion_lexema((yyvsp[(1) - (6)]),(yyvsp[(2) - (6)]), lista_param,(yyval).lex);;}
    break;

  case 26:
#line 108 "src/gramatica.y"
    {lista_param = concat(lista_param,(yyvsp[(3) - (3)]).lex,',');;}
    break;

  case 27:
#line 109 "src/gramatica.y"
    {lista_param = concat(lista_param,(yyvsp[(1) - (1)]).lex,',');;}
    break;

  case 30:
#line 113 "src/gramatica.y"
    { setType((yyvsp[(1) - (2)])); TS_AddParam((yyvsp[(2) - (2)])); juntarDeclarId((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]),&(yyval));  ;}
    break;

  case 34:
#line 120 "src/gramatica.y"
    {(yyval).eval = (yyvsp[(1) - (1)]).eval;;}
    break;

  case 35:
#line 121 "src/gramatica.y"
    {addSalida();;}
    break;

  case 43:
#line 130 "src/gramatica.y"
    { comprobarAsignacion((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); (yyval).eval = evaluar_sentencia_asig((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 45:
#line 133 "src/gramatica.y"
    { comprobarBooleano_if((yyvsp[(3) - (6)])); ;}
    break;

  case 46:
#line 134 "src/gramatica.y"
    {comprobarBooleano_if((yyvsp[(3) - (8)]));;}
    break;

  case 47:
#line 137 "src/gramatica.y"
    { goToEndAndElse(); ;}
    break;

  case 48:
#line 140 "src/gramatica.y"
    { line_if = line; (yyval).type = (yyvsp[(1) - (1)]).type; evaluar_sentencia_if((yyvsp[(1) - (1)])); insertIfElse(); goToElse((yyval).temp_asociado);}
    break;

  case 49:
#line 143 "src/gramatica.y"
    { comprobarAsignacion((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)])); comprobarEntero((yyvsp[(3) - (5)])); comprobarEntero((yyvsp[(5) - (5)])); insertFor(); goToFor((yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)])); (yyval).lex = (yyvsp[(1) - (5)]).lex; ;}
    break;

  case 51:
#line 146 "src/gramatica.y"
    { evaluar_sentencia_for((yyvsp[(2) - (4)]).lex); ;}
    break;

  case 52:
#line 149 "src/gramatica.y"
    { (yyval).type = INT; ;}
    break;

  case 53:
#line 150 "src/gramatica.y"
    { TS_GetById((yyvsp[(1) - (1)]),&(yyval)); ;}
    break;

  case 54:
#line 153 "src/gramatica.y"
    { comprobarBooleano((yyvsp[(3) - (5)])); evaluar_sentencia_while(); ;}
    break;

  case 55:
#line 156 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (1)]).type; insertWhile(); goToWhile((yyval).temp_asociado,(yyvsp[(1) - (1)])); ;}
    break;

  case 56:
#line 159 "src/gramatica.y"
    {evaluarSentenciaEntrada();;}
    break;

  case 57:
#line 162 "src/gramatica.y"
    { agregarNuevoID((yyvsp[(3) - (3)]), &(yyval)); addVariableListaMeterDatos((yyvsp[(3) - (3)])); ;}
    break;

  case 58:
#line 163 "src/gramatica.y"
    { agregarNuevoID((yyvsp[(1) - (1)]), &(yyval)); addVariableListaMeterDatos((yyvsp[(1) - (1)]));;}
    break;

  case 60:
#line 166 "src/gramatica.y"
    { evaluarSentenciaSalida(); ;}
    break;

  case 61:
#line 169 "src/gramatica.y"
    { addVariableListaSacarDatos((yyvsp[(3) - (3)])); ;}
    break;

  case 62:
#line 170 "src/gramatica.y"
    { addVariableListaSacarDatos((yyvsp[(1) - (1)])); ;}
    break;

  case 63:
#line 173 "src/gramatica.y"
    {(yyval).lex = (yyvsp[(1) - (1)]).lex;;}
    break;

  case 64:
#line 174 "src/gramatica.y"
    {(yyval).lex = (yyvsp[(1) - (1)]).lex;;}
    break;

  case 65:
#line 176 "src/gramatica.y"
    { TS_CheckParam((yyvsp[(3) - (3)])); ;}
    break;

  case 66:
#line 177 "src/gramatica.y"
    {checkParams = 0; TS_CheckParam((yyvsp[(1) - (1)]));(yyval).temp_asociado = lista_func;(yyval).eval = lista_evals;;}
    break;

  case 67:
#line 180 "src/gramatica.y"
    {sacarTemporalAsociado((yyvsp[(1) - (1)])); sacarEvalAsociado((yyvsp[(1) - (1)]));;}
    break;

  case 68:
#line 183 "src/gramatica.y"
    { TS_CheckReturn((yyvsp[(2) - (3)]), &(yyval)); imprimir_return((yyvsp[(2) - (3)])); ;}
    break;

  case 69:
#line 186 "src/gramatica.y"
    { (yyval).type = (yyvsp[(2) - (3)]).type; (yyval).nDim = (yyvsp[(2) - (3)]).nDim; (yyval).eval = (yyvsp[(2) - (3)]).eval; (yyval).temp_asociado = (yyvsp[(2) - (3)]).temp_asociado;;}
    break;

  case 70:
#line 187 "src/gramatica.y"
    { comprobarIncrementoDecremento((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); evaluar_expresion_unaria((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval));;}
    break;

  case 71:
#line 188 "src/gramatica.y"
    { comprobarIncrementoDecremento((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); evaluar_expresion_unaria((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval));;}
    break;

  case 72:
#line 189 "src/gramatica.y"
    { comprobarIncrementoDecremento((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]), &(yyval)); evaluar_expresion_unaria((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]), &(yyval));;}
    break;

  case 73:
#line 190 "src/gramatica.y"
    { comprobarIncrementoDecremento((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]), &(yyval)); evaluar_expresion_unaria((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]), &(yyval));;}
    break;

  case 74:
#line 191 "src/gramatica.y"
    { comprobarNumeroElementosLista((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); ;}
    break;

  case 75:
#line 192 "src/gramatica.y"
    { comprobarMasMenos((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); evaluar_expresion_unaria((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval));;}
    break;

  case 76:
#line 193 "src/gramatica.y"
    {comprobarNegacionConBooleano((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); evaluar_expresion_unaria((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval));;}
    break;

  case 78:
#line 195 "src/gramatica.y"
    {comprobarPosicionLista((yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),&(yyval));;}
    break;

  case 79:
#line 196 "src/gramatica.y"
    { comprobarMasMenosBinario((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); evaluar_expresion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); ;}
    break;

  case 80:
#line 197 "src/gramatica.y"
    {comprobaOperadorBinarioConcatenarListas((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval));;}
    break;

  case 81:
#line 198 "src/gramatica.y"
    { comprobarOperadorBinarioAndOr((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); evaluar_expresion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval));;}
    break;

  case 82:
#line 199 "src/gramatica.y"
    { comprobarOperadorBinarioAndOr((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); evaluar_expresion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval));;}
    break;

  case 83:
#line 200 "src/gramatica.y"
    { comprobarOperadorBinarioRelacion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); evaluar_expresion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval));;}
    break;

  case 84:
#line 201 "src/gramatica.y"
    { comprobarOperadorBinarioRelacion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); evaluar_expresion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval));;}
    break;

  case 85:
#line 202 "src/gramatica.y"
    {comprobaOperadorBinarioMultiplicacion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); evaluar_expresion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval));;}
    break;

  case 86:
#line 203 "src/gramatica.y"
    {comprobarMenosMenos((yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),&(yyval));;}
    break;

  case 87:
#line 204 "src/gramatica.y"
    {comprobarOperadorTernarioLista((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]), &(yyval)); ;}
    break;

  case 88:
#line 205 "src/gramatica.y"
    { (yyval).type = TS_GetType((yyvsp[(1) - (1)])); (yyval).nDim = TS_GetNDim((yyvsp[(1) - (1)])); decVar = 0; (yyval).eval = "";(yyval).temp_asociado = (yyvsp[(1) - (1)]).lex;;}
    break;

  case 89:
#line 206 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (1)]).type; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; (yyval).eval = "";(yyval).temp_asociado = (yyvsp[(1) - (1)]).lex; ;}
    break;

  case 90:
#line 207 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (1)]).type; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; currentFunction = -1; (yyval).eval = "";(yyval).temp_asociado = componerLlamadaFuncion((yyvsp[(1) - (1)]).lex);;}
    break;

  case 91:
#line 208 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (1)]).type; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 94:
#line 216 "src/gramatica.y"
    { (yyval).type = INT; ;}
    break;

  case 95:
#line 217 "src/gramatica.y"
    { (yyval).type = FLOAT; ;}
    break;

  case 96:
#line 218 "src/gramatica.y"
    { (yyval).type = BOOL; ;}
    break;

  case 97:
#line 219 "src/gramatica.y"
    { (yyval).type = CHAR; ;}
    break;

  case 98:
#line 222 "src/gramatica.y"
    { (yyval).type = (yyvsp[(2) - (3)]).type; ;}
    break;

  case 99:
#line 225 "src/gramatica.y"
    { (yyval).type = LIST_INT; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 100:
#line 226 "src/gramatica.y"
    { (yyval).type = LIST_FLOAT; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 101:
#line 227 "src/gramatica.y"
    { (yyval).type = LIST_BOOL; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 102:
#line 228 "src/gramatica.y"
    { (yyval).type = LIST_CHAR; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 111:
#line 240 "src/gramatica.y"
    { (yyval).attr = (yyvsp[(2) - (2)]).attr; (yyval).type = (yyvsp[(2) - (2)]).type, (yyval).nDim = (yyvsp[(2) - (2)]).nDim; if(esFunc)
                                                                                                                              fputs(lista_evals,file_funciones);
                                                                                                                              else
                                                                                                                              fputs(lista_evals,file);
                                                                                                                              lista_evals = NULL;;}
    break;

  case 112:
#line 247 "src/gramatica.y"
    { comprobarLlamadaAFuncion((yyvsp[(1) - (2)]));(yyval).lex = (yyvsp[(1) - (2)]).lex ;}
    break;

  case 113:
#line 250 "src/gramatica.y"
    {TS_FunctionCall(&(yyval));;}
    break;


/* Line 1267 of yacc.c.  */
#line 2010 "generated/y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 253 "src/gramatica.y"


#include "lex.yy.c"

void yyerror(const char *msg ) 
{
    fprintf(stderr,"[Linea %d]: %s\n", line, msg) ;
}

