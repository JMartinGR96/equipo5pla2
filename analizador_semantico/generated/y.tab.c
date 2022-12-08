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
     OP_OR_LOG = 288,
     OP_AND_LOG = 289,
     OP_EQ_NEQ = 290,
     OP_REL = 291,
     MASMAS = 292,
     MENOSMENOS = 293,
     MAS_MENOS = 294,
     OP_LIST_MUL = 295,
     OP_MUL = 296,
     OP_AND_LIST = 297,
     OP_LIST_UN = 298,
     NEGACION = 299,
     ARROBA = 300,
     ELSE = 301,
     THEN = 302
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
#define OP_OR_LOG 288
#define OP_AND_LOG 289
#define OP_EQ_NEQ 290
#define OP_REL 291
#define MASMAS 292
#define MENOSMENOS 293
#define MAS_MENOS 294
#define OP_LIST_MUL 295
#define OP_MUL 296
#define OP_AND_LIST 297
#define OP_LIST_UN 298
#define NEGACION 299
#define ARROBA 300
#define ELSE 301
#define THEN 302




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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNRULES -- Number of states.  */
#define YYNSTATES  181

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
       0,     0,     3,     6,     7,    14,    15,    20,    21,    24,
      25,    26,    30,    33,    35,    36,    42,    46,    49,    51,
      55,    56,    57,    64,    68,    70,    74,    75,    78,    81,
      82,    84,    86,    88,    90,    92,    94,    96,    98,   100,
     102,   107,   109,   116,   125,   129,   134,   136,   143,   145,
     147,   153,   157,   161,   163,   165,   169,   173,   175,   177,
     179,   180,   185,   189,   192,   195,   198,   201,   204,   207,
     210,   213,   217,   221,   225,   229,   233,   237,   241,   245,
     249,   255,   257,   259,   261,   263,   267,   271,   273,   275,
     277,   279,   283,   285,   287,   289,   291,   295,   297,   301,
     303,   307,   309,   313,   315,   318,   321
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    24,    50,    -1,    -1,    17,    51,    52,
      54,    65,    18,    -1,    -1,    26,    53,    57,    27,    -1,
      -1,    54,    55,    -1,    -1,    -1,    61,    56,    50,    -1,
      57,    58,    -1,    58,    -1,    -1,     9,     4,    59,    60,
      19,    -1,     9,     4,     1,    -1,     9,     1,    -1,     1,
      -1,    60,    23,     4,    -1,    -1,    -1,     9,     4,    62,
      11,    63,    10,    -1,    63,    23,    64,    -1,    64,    -1,
      63,    23,     1,    -1,    -1,     9,     4,    -1,    65,    66,
      -1,    -1,    50,    -1,    67,    -1,    68,    -1,    70,    -1,
      72,    -1,    73,    -1,    75,    -1,    78,    -1,    81,    -1,
      82,    -1,     4,     3,    80,    19,    -1,     1,    -1,    14,
      11,    80,    10,    47,    66,    -1,    14,    11,    80,    10,
      47,    66,    46,    66,    -1,     4,     3,    80,    -1,     9,
       4,     3,    80,    -1,     1,    -1,    16,    69,    20,    71,
      28,    66,    -1,     5,    -1,     4,    -1,    13,    11,    80,
      10,    66,    -1,    12,    74,    19,    -1,    74,    23,     4,
      -1,     4,    -1,     1,    -1,    15,    76,    19,    -1,    76,
      23,    77,    -1,    77,    -1,    80,    -1,    31,    -1,    -1,
      25,    80,    79,    19,    -1,    11,    80,    10,    -1,    37,
      80,    -1,    38,    80,    -1,    80,    37,    -1,    80,    38,
      -1,    43,    80,    -1,    39,    80,    -1,    44,    80,    -1,
      42,    80,    -1,    80,    32,    80,    -1,    80,    39,    80,
      -1,    80,    40,    80,    -1,    80,    33,    80,    -1,    80,
      34,    80,    -1,    80,    35,    80,    -1,    80,    36,    80,
      -1,    80,    41,    80,    -1,    80,    38,    80,    -1,    80,
      37,    80,    45,    80,    -1,     4,    -1,    83,    -1,    90,
      -1,    84,    -1,     4,    29,    19,    -1,    30,     4,    19,
      -1,     5,    -1,     6,    -1,     8,    -1,     7,    -1,    21,
      85,    22,    -1,    86,    -1,    87,    -1,    88,    -1,    89,
      -1,    86,    23,     5,    -1,     5,    -1,    87,    23,     6,
      -1,     6,    -1,    88,    23,     8,    -1,     8,    -1,    89,
      23,     7,    -1,     7,    -1,    91,    92,    -1,     4,    11,
      -1,    76,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    58,    58,    64,    64,    67,    69,    70,
      72,    72,    76,    77,    79,    79,    81,    82,    83,    85,
      89,    91,    91,    95,    96,    97,    98,   100,   103,   104,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     117,   118,   120,   121,   124,   125,   126,   128,   131,   132,
     135,   138,   140,   141,   142,   144,   146,   147,   150,   151,
     153,   153,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   181,   183,   185,   186,   187,
     188,   191,   194,   195,   196,   197,   200,   201,   202,   203,
     204,   205,   206,   207,   209,   212,   214
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
  "ARRARR", "OP_OR_LOG", "OP_AND_LOG", "OP_EQ_NEQ", "OP_REL", "MASMAS",
  "MENOSMENOS", "MAS_MENOS", "OP_LIST_MUL", "OP_MUL", "OP_AND_LIST",
  "OP_LIST_UN", "NEGACION", "ARROBA", "ELSE", "THEN", "$accept",
  "programa", "bloque", "@1", "declar_de_variables_locales", "@2",
  "declar_de_subprogs", "declar_subprog", "@3", "variables_locales",
  "cuerpo_declar_variables", "@4", "mas_variables", "cabecera_subprograma",
  "@5", "declaraciones_id", "param", "sentencias", "sentencia",
  "sentencia_asignacion", "sentencia_if", "asignacion_for_pascal",
  "sentencia_for_pascal", "valor", "sentencia_while", "sentencia_entrada",
  "lista_variables", "sentencia_salida", "lista_expresiones_o_cadena",
  "expr_cad", "sentencia_return", "@6", "expresion",
  "sentencia_adelante_atras", "sentencia_principio_lista", "constante",
  "agregado", "constante_lista", "constante_lista_int",
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
       0,    48,    49,    51,    50,    53,    52,    52,    54,    54,
      56,    55,    57,    57,    59,    58,    58,    58,    58,    60,
      60,    62,    61,    63,    63,    63,    63,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    70,    71,    71,
      72,    73,    74,    74,    74,    75,    76,    76,    77,    77,
      79,    78,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    82,    83,    83,    83,
      83,    84,    85,    85,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    91,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     6,     0,     4,     0,     2,     0,
       0,     3,     2,     1,     0,     5,     3,     2,     1,     3,
       0,     0,     6,     3,     1,     3,     0,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     6,     8,     3,     4,     1,     6,     1,     1,
       5,     3,     3,     1,     1,     3,     3,     1,     1,     1,
       0,     4,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     2,     1,     7,     5,     9,     0,
      29,    18,     0,     0,    13,     0,     8,    10,     0,    17,
       0,     6,    12,    21,     0,    41,     0,     0,     0,     0,
       0,     0,     4,     0,     0,    30,    28,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    16,    20,     0,    11,
       0,     0,    54,    53,     0,     0,     0,    81,    87,    88,
      90,    89,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    82,    84,    83,     0,    46,     0,
       0,     0,    60,     0,     0,    26,     0,    85,    51,     0,
       0,     0,   105,     0,    97,    99,   103,   101,     0,    92,
      93,    94,    95,    63,    64,    68,    70,    67,    69,    55,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
       0,     0,   104,     0,     0,     0,     0,    86,    15,     0,
       0,     0,    24,    40,    52,     0,     0,    62,    91,     0,
       0,     0,     0,    56,    71,    74,    75,    76,    77,     0,
      79,    72,    73,    78,   106,    44,     0,    49,    48,     0,
      61,    19,    27,    22,     0,    50,     0,    96,    98,   100,
     102,     0,    45,     0,    25,    23,    42,    80,    47,     0,
      43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    35,     6,     8,     9,    10,    16,    24,    13,
      14,    47,    84,    17,    48,   131,   132,    18,    36,    37,
      38,    81,    39,   159,    40,    41,    54,    42,    71,    72,
      43,   126,    73,    44,    45,    74,    75,    98,    99,   100,
     101,   102,    76,    77,   122
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -129
static const yytype_int16 yypact[] =
{
     -20,    -3,    16,  -129,  -129,  -129,    18,  -129,  -129,    88,
      79,  -129,    27,    12,  -129,    95,  -129,  -129,   152,  -129,
       1,  -129,  -129,  -129,    -3,  -129,    -2,   116,    90,   128,
      87,   153,  -129,     4,   118,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,   144,  -129,
       4,   108,  -129,  -129,    53,     4,     4,   147,  -129,  -129,
    -129,  -129,     4,   232,  -129,     4,     4,     4,     4,     4,
       4,    54,  -129,   184,  -129,  -129,  -129,    87,  -129,   156,
     157,   161,   184,   164,    77,   171,   160,  -129,  -129,   181,
      20,    30,  -129,   111,  -129,  -129,  -129,  -129,   165,   167,
     168,   189,   190,     9,     9,  -129,  -129,  -129,  -129,  -129,
      87,     4,     4,     4,     4,     4,    98,    98,     4,     4,
       4,    -5,  -129,     4,   185,    70,   195,  -129,  -129,   223,
     242,    -4,  -129,  -129,  -129,   159,   200,  -129,  -129,   243,
     244,   241,   245,  -129,     9,   194,    75,    96,   204,   170,
       9,     9,  -129,  -129,  -129,   184,     4,  -129,  -129,   225,
    -129,  -129,  -129,  -129,   177,  -129,   159,  -129,  -129,  -129,
    -129,     4,   184,   159,  -129,  -129,   205,  -129,  -129,   159,
    -129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,     2,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
     246,  -129,  -129,  -129,  -129,  -129,    91,  -129,  -128,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,   179,   148,
    -129,  -129,   -33,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -15
static const yytype_int16 yytable[] =
{
      82,    50,    46,     4,     1,   154,   163,   165,    57,    58,
      59,    60,    61,    11,     3,    62,     5,    86,   110,   164,
     -14,    12,    90,    91,   -14,    63,    49,    51,    19,    93,
     135,    20,   103,   104,   105,   106,   107,   108,   176,    21,
     136,    65,    66,    67,     7,   178,    68,    69,    70,   119,
     120,   180,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    88,   109,   157,   158,    89,   110,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    15,    11,
     155,    57,    58,    59,    60,    61,   128,    12,    62,    23,
     129,    55,    57,    58,    59,    60,    61,   111,    63,    62,
     114,   115,   116,   117,   118,   119,   120,    52,    64,    63,
      53,   137,    83,   172,    65,    66,    67,    87,   111,    68,
      69,    70,   115,   116,   117,   118,   119,   120,   177,    56,
      68,    69,    70,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    25,    78,    85,    26,    79,    92,   123,
      25,   124,    80,    26,    27,    28,    29,    30,    31,     3,
      32,    27,    28,    29,    30,    31,     3,    33,   174,   133,
     130,   125,    34,   127,    33,   134,   130,   138,   156,    34,
     139,   140,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   141,   142,   160,   171,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   111,   161,   113,   114,
     115,   116,   117,   118,   119,   120,   111,    94,    95,    96,
      97,   116,   117,   118,   119,   120,   162,   166,   167,   169,
     168,   179,   170,   173,     0,   175,   121,     0,   143,    22
};

static const yytype_int16 yycheck[] =
{
      33,     3,     1,     1,    24,    10,    10,   135,     4,     5,
       6,     7,     8,     1,    17,    11,     0,    50,    23,    23,
      19,     9,    55,    56,    23,    21,    24,    29,     1,    62,
      10,     4,    65,    66,    67,    68,    69,    70,   166,    27,
      10,    37,    38,    39,    26,   173,    42,    43,    44,    40,
      41,   179,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    19,    19,     4,     5,    23,    23,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,     9,     1,
     123,     4,     5,     6,     7,     8,    19,     9,    11,     4,
      23,    11,     4,     5,     6,     7,     8,    32,    21,    11,
      35,    36,    37,    38,    39,    40,    41,     1,    31,    21,
       4,    10,     4,   156,    37,    38,    39,    19,    32,    42,
      43,    44,    36,    37,    38,    39,    40,    41,   171,    11,
      42,    43,    44,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     1,     1,    11,     4,     4,    11,     3,
       1,     4,     9,     4,    12,    13,    14,    15,    16,    17,
      18,    12,    13,    14,    15,    16,    17,    25,     1,    19,
       9,    20,    30,    19,    25,     4,     9,    22,     3,    30,
      23,    23,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    23,    23,    19,    45,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    32,     4,    34,    35,
      36,    37,    38,    39,    40,    41,    32,     5,     6,     7,
       8,    37,    38,    39,    40,    41,     4,    47,     5,     8,
       6,    46,     7,    28,    -1,   164,    77,    -1,   110,    13
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    49,    17,    50,     0,    51,    26,    52,    53,
      54,     1,     9,    57,    58,     9,    55,    61,    65,     1,
       4,    27,    58,     4,    56,     1,     4,    12,    13,    14,
      15,    16,    18,    25,    30,    50,    66,    67,    68,    70,
      72,    73,    75,    78,    81,    82,     1,    59,    62,    50,
       3,    29,     1,     4,    74,    11,    11,     4,     5,     6,
       7,     8,    11,    21,    31,    37,    38,    39,    42,    43,
      44,    76,    77,    80,    83,    84,    90,    91,     1,     4,
       9,    69,    80,     4,    60,    11,    80,    19,    19,    23,
      80,    80,    11,    80,     5,     6,     7,     8,    85,    86,
      87,    88,    89,    80,    80,    80,    80,    80,    80,    19,
      23,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    76,    92,     3,     4,    20,    79,    19,    19,    23,
       9,    63,    64,    19,     4,    10,    10,    10,    22,    23,
      23,    23,    23,    77,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    10,    80,     3,     4,     5,    71,
      19,     4,     4,    10,    23,    66,    47,     5,     6,     8,
       7,    45,    80,    28,     1,    64,    66,    80,    66,    46,
      66
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
        case 3:
#line 58 "src/gramatica.y"
    { TS_AddMark(); ;}
    break;

  case 4:
#line 61 "src/gramatica.y"
    { TS_ClearBlock(); ;}
    break;

  case 5:
#line 64 "src/gramatica.y"
    {decVar = 1; ;}
    break;

  case 6:
#line 66 "src/gramatica.y"
    {decVar = 0; ;}
    break;

  case 10:
#line 72 "src/gramatica.y"
    { esFunc = 1; ;}
    break;

  case 11:
#line 73 "src/gramatica.y"
    { esFunc = 0; ;}
    break;

  case 14:
#line 79 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (2)]).type; setType((yyvsp[(1) - (2)]));agregarNuevoID((yyvsp[(2) - (2)]), &(yyval));;}
    break;

  case 19:
#line 86 "src/gramatica.y"
    {
                                agregarNuevoID((yyvsp[(3) - (3)]), &(yyval));
                              ;}
    break;

  case 21:
#line 91 "src/gramatica.y"
    { setType((yyvsp[(1) - (2)])); decParam = 1; TS_AddFunction((yyvsp[(2) - (2)])); ;}
    break;

  case 22:
#line 92 "src/gramatica.y"
    { decParam = 0; (yyvsp[(4) - (6)]).nDim = 0; ;}
    break;

  case 27:
#line 100 "src/gramatica.y"
    { setType((yyvsp[(1) - (2)])); TS_AddParam((yyvsp[(2) - (2)])); ;}
    break;

  case 40:
#line 117 "src/gramatica.y"
    { comprobarAsignacion((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 42:
#line 120 "src/gramatica.y"
    { comprobarBooleano((yyvsp[(3) - (6)]));;}
    break;

  case 43:
#line 121 "src/gramatica.y"
    { comprobarBooleano((yyvsp[(3) - (8)]));;}
    break;

  case 44:
#line 124 "src/gramatica.y"
    { comprobarAsignacion((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); comprobarEntero((yyvsp[(3) - (3)]));;}
    break;

  case 45:
#line 125 "src/gramatica.y"
    { comprobarAsignacion((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])); comprobarEntero((yyvsp[(3) - (4)])); ;}
    break;

  case 47:
#line 128 "src/gramatica.y"
    { comprobarEntero((yyvsp[(4) - (6)])); ;}
    break;

  case 48:
#line 131 "src/gramatica.y"
    { (yyval).type = INT; ;}
    break;

  case 49:
#line 132 "src/gramatica.y"
    { TS_GetById((yyvsp[(1) - (1)]),&(yyval)); ;}
    break;

  case 50:
#line 135 "src/gramatica.y"
    { comprobarBooleano((yyvsp[(3) - (5)])); ;}
    break;

  case 52:
#line 140 "src/gramatica.y"
    { agregarNuevoID((yyvsp[(3) - (3)]), &(yyval)); ;}
    break;

  case 53:
#line 141 "src/gramatica.y"
    { agregarNuevoID((yyvsp[(1) - (1)]), &(yyval)); ;}
    break;

  case 56:
#line 146 "src/gramatica.y"
    { TS_CheckParam((yyvsp[(3) - (3)])); ;}
    break;

  case 57:
#line 147 "src/gramatica.y"
    {checkParams = 0; TS_CheckParam((yyvsp[(1) - (1)])); ;}
    break;

  case 60:
#line 153 "src/gramatica.y"
    { TS_CheckReturn((yyvsp[(2) - (2)]), &(yyval)); ;}
    break;

  case 62:
#line 156 "src/gramatica.y"
    { (yyval).type = (yyvsp[(2) - (3)]).type; (yyval).nDim = (yyvsp[(2) - (3)]).nDim; ;}
    break;

  case 63:
#line 157 "src/gramatica.y"
    { comprobarIncrementoDecremento((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); ;}
    break;

  case 64:
#line 158 "src/gramatica.y"
    { comprobarIncrementoDecremento((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); ;}
    break;

  case 65:
#line 159 "src/gramatica.y"
    { comprobarIncrementoDecremento((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]), &(yyval)); ;}
    break;

  case 66:
#line 160 "src/gramatica.y"
    { comprobarIncrementoDecremento((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]), &(yyval)); ;}
    break;

  case 67:
#line 161 "src/gramatica.y"
    { comprobarNumeroElementosLista((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); ;}
    break;

  case 68:
#line 162 "src/gramatica.y"
    { comprobarMasMenos((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); ;}
    break;

  case 69:
#line 163 "src/gramatica.y"
    {comprobarNegacionConBooleano((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), &(yyval)); ;}
    break;

  case 71:
#line 165 "src/gramatica.y"
    {comprobarPosicionLista((yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),&(yyval));;}
    break;

  case 72:
#line 166 "src/gramatica.y"
    { comprobarMasMenosBinario((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); ;}
    break;

  case 73:
#line 167 "src/gramatica.y"
    {comprobaOperadorBinarioConcatenarListas((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval));}
    break;

  case 74:
#line 168 "src/gramatica.y"
    { comprobarOperadorBinarioAndOr((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); ;}
    break;

  case 75:
#line 169 "src/gramatica.y"
    { comprobarOperadorBinarioAndOr((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); ;}
    break;

  case 76:
#line 170 "src/gramatica.y"
    { comprobarOperadorBinarioRelacion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); ;}
    break;

  case 77:
#line 171 "src/gramatica.y"
    { comprobarOperadorBinarioRelacion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval)); ;}
    break;

  case 78:
#line 172 "src/gramatica.y"
    {comprobaOperadorBinarioMultiplicacion((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), &(yyval));}
    break;

  case 79:
#line 173 "src/gramatica.y"
    {comprobarMenosMenos((yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),&(yyval));;}
    break;

  case 80:
#line 174 "src/gramatica.y"
    {comprobarOperadorTernarioLista((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]), &(yyval)); ;}
    break;

  case 81:
#line 175 "src/gramatica.y"
    { (yyval).type = TS_GetType((yyvsp[(1) - (1)])); (yyval).nDim = TS_GetNDim((yyvsp[(1) - (1)])); decVar = 0; ;}
    break;

  case 82:
#line 176 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (1)]).type; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 83:
#line 177 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (1)]).type; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; currentFunction = -1;;}
    break;

  case 84:
#line 178 "src/gramatica.y"
    { (yyval).type = (yyvsp[(1) - (1)]).type; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 87:
#line 185 "src/gramatica.y"
    { (yyval).type = INT; ;}
    break;

  case 88:
#line 186 "src/gramatica.y"
    { (yyval).type = FLOAT; ;}
    break;

  case 89:
#line 187 "src/gramatica.y"
    { (yyval).type = BOOLEAN; ;}
    break;

  case 90:
#line 188 "src/gramatica.y"
    { (yyval).type = CHAR; ;}
    break;

  case 91:
#line 191 "src/gramatica.y"
    { (yyval).type = (yyvsp[(2) - (3)]).type; ;}
    break;

  case 92:
#line 194 "src/gramatica.y"
    { (yyval).type = LIST_INT; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 93:
#line 195 "src/gramatica.y"
    { (yyval).type = LIST_FLOAT; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 94:
#line 196 "src/gramatica.y"
    { (yyval).type = LIST_BOOLEAN; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 95:
#line 197 "src/gramatica.y"
    { (yyval).type = LIST_CHAR; (yyval).nDim = (yyvsp[(1) - (1)]).nDim; ;}
    break;

  case 104:
#line 209 "src/gramatica.y"
    { (yyval).attr = (yyvsp[(2) - (2)]).attr; (yyval).type = (yyvsp[(2) - (2)]).type, (yyval).nDim = (yyvsp[(2) - (2)]).nDim; ;}
    break;

  case 105:
#line 212 "src/gramatica.y"
    { comprobarLlamadaAFuncion((yyvsp[(1) - (2)])); ;}
    break;

  case 106:
#line 214 "src/gramatica.y"
    {TS_FunctionCall(&(yyval));;}
    break;


/* Line 1267 of yacc.c.  */
#line 1903 "generated/y.tab.c"
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


#line 216 "src/gramatica.y"


#include "lex.yy.c"

void yyerror(const char *msg ) 
{
    fprintf(stderr,"[Linea %d]: %s\n", line, msg) ;
}
