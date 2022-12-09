/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/gramatica.y"


    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "semantico.h"

    int yylex();
    void yyerror( const char * msg ) ;

    //int linea_actual = 1 ;

    #define YYERROR_VERBOSE


#line 86 "generated/y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    MAS_MENOS = 294,
    MENOSMENOS = 295,
    MASMAS = 296,
    OP_MUL = 297,
    OP_LIST_MUL = 298,
    NEGACION = 299,
    OP_LIST_UN = 300,
    OP_AND_LIST = 301,
    ARROBA = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   267

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    59,    59,    65,    65,    68,    70,    71,
      73,    73,    77,    78,    80,    80,    82,    83,    84,    86,
      90,    92,    92,    96,    97,    98,    99,   101,   104,   105,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     118,   119,   121,   122,   129,   130,   131,   133,   136,   137,
     140,   143,   145,   146,   147,   149,   151,   152,   155,   156,
     158,   158,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   186,   188,   190,   191,   192,
     193,   196,   199,   200,   201,   202,   205,   206,   207,   208,
     209,   210,   211,   212,   214,   217,   219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "OP_REL", "MAS_MENOS", "MENOSMENOS", "MASMAS", "OP_MUL", "OP_LIST_MUL",
  "NEGACION", "OP_LIST_UN", "OP_AND_LIST", "ARROBA", "$accept", "programa",
  "bloque", "$@1", "declar_de_variables_locales", "$@2",
  "declar_de_subprogs", "declar_subprog", "$@3", "variables_locales",
  "cuerpo_declar_variables", "@4", "mas_variables", "cabecera_subprograma",
  "$@5", "declaraciones_id", "param", "sentencias", "sentencia",
  "sentencia_asignacion", "sentencia_if", "asignacion_for_pascal",
  "sentencia_for_pascal", "valor", "sentencia_while", "sentencia_entrada",
  "lista_variables", "sentencia_salida", "lista_expresiones_o_cadena",
  "expr_cad", "sentencia_return", "@6", "expresion",
  "sentencia_adelante_atras", "sentencia_principio_lista", "constante",
  "agregado", "constante_lista", "constante_lista_int",
  "constante_lista_float", "constante_lista_bool", "constante_lista_char",
  "funcion", "cabecera_funcion", "argumentos_funcion", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -22,     2,    24,  -111,  -111,  -111,     5,  -111,  -111,    90,
      41,  -111,   108,     0,  -111,    56,  -111,  -111,   155,  -111,
      40,  -111,  -111,  -111,     2,  -111,    13,   156,    58,    63,
      -1,    64,  -111,     7,    88,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,    87,  -111,
       7,    48,  -111,  -111,    47,     7,     7,   125,  -111,  -111,
    -111,  -111,     7,   134,  -111,     7,     7,     7,     7,     7,
       7,    53,  -111,   183,  -111,  -111,  -111,    -1,  -111,   140,
     141,   138,   183,   144,    70,   165,    92,  -111,  -111,   160,
      65,    78,  -111,   112,  -111,  -111,  -111,  -111,   143,   153,
     154,   158,   159,  -111,    83,    83,  -111,  -111,  -111,  -111,
      -1,     7,     7,     7,     7,     7,     7,    50,    50,     7,
       7,    -2,  -111,     7,   163,   157,   164,  -111,  -111,   175,
     180,    54,  -111,  -111,  -111,   174,  -111,  -111,  -111,   188,
     189,   186,   190,  -111,    83,   195,   207,   219,   224,    83,
      83,   170,  -111,  -111,  -111,   183,     7,  -111,  -111,   168,
    -111,  -111,  -111,  -111,   137,  -111,  -111,  -111,  -111,  -111,
       7,   183,   174,  -111,  -111,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
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
      93,    94,    95,    68,    64,    63,    69,    67,    70,    55,
       0,     0,     0,     0,     0,     0,     0,    66,    65,     0,
       0,     0,   104,     0,     0,     0,     0,    86,    15,     0,
       0,     0,    24,    40,    52,     0,    42,    62,    91,     0,
       0,     0,     0,    56,    71,    74,    75,    76,    77,    72,
      79,     0,    78,    73,   106,    44,     0,    49,    48,     0,
      61,    19,    27,    22,     0,    50,    96,    98,   100,   102,
       0,    45,     0,    25,    23,    80,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,    25,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
     185,  -111,  -111,  -111,  -111,  -111,    36,  -111,  -110,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,   124,    93,
    -111,  -111,   -33,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    11,     1,    57,    58,    59,    60,    61,   154,    12,
      62,    57,    58,    59,    60,    61,    50,    86,    62,     3,
      63,   110,    90,    91,     5,   165,     4,    21,    63,    93,
      64,     7,   103,   104,   105,   106,   107,   108,    65,    66,
      67,    46,    51,    68,    69,    70,    65,    66,    67,    49,
      15,    68,    69,    70,    57,    58,    59,    60,    61,   -14,
      23,    62,   176,   -14,   163,    78,    88,    87,    79,    55,
      89,    63,   109,    80,    56,   135,   110,   164,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   136,   128,
     155,    11,    83,   129,    68,    69,    70,   111,    85,    12,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    19,
     111,   133,    20,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   137,   171,   111,   119,   120,   112,   113,   114,
     115,   116,   117,   118,   119,   120,    92,   175,   173,    94,
      95,    96,    97,   123,   111,   124,   130,   112,   113,   114,
     115,   116,   117,   118,   119,   120,    25,    52,   125,    26,
      53,   157,   158,   127,   134,   138,   156,    27,    28,    29,
      30,    31,     3,    32,   130,    25,   139,   140,    26,   161,
      33,   141,   142,   160,   162,    34,    27,    28,    29,    30,
      31,     3,   -43,   166,   168,   167,   172,   169,    22,    33,
     174,   121,   111,   143,    34,   112,   113,   114,   115,   116,
     117,   118,   119,   120,     0,   111,     0,   170,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   111,     0,     0,
       0,   113,   114,   115,   116,   117,   118,   119,   120,   111,
       0,     0,     0,     0,   114,   115,   116,   117,   118,   119,
     120,   111,     0,     0,     0,     0,   111,   115,   116,   117,
     118,   119,   120,   116,   117,   118,   119,   120
};

static const yytype_int16 yycheck[] =
{
      33,     1,    24,     4,     5,     6,     7,     8,    10,     9,
      11,     4,     5,     6,     7,     8,     3,    50,    11,    17,
      21,    23,    55,    56,     0,   135,     1,    27,    21,    62,
      31,    26,    65,    66,    67,    68,    69,    70,    39,    40,
      41,     1,    29,    44,    45,    46,    39,    40,    41,    24,
       9,    44,    45,    46,     4,     5,     6,     7,     8,    19,
       4,    11,   172,    23,    10,     1,    19,    19,     4,    11,
      23,    21,    19,     9,    11,    10,    23,    23,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    10,    19,
     123,     1,     4,    23,    44,    45,    46,    32,    11,     9,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     1,
      32,    19,     4,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    10,   156,    32,    42,    43,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    11,   170,     1,     5,
       6,     7,     8,     3,    32,     4,     9,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     1,     1,    20,     4,
       4,     4,     5,    19,     4,    22,     3,    12,    13,    14,
      15,    16,    17,    18,     9,     1,    23,    23,     4,     4,
      25,    23,    23,    19,     4,    30,    12,    13,    14,    15,
      16,    17,    18,     5,     8,     6,    28,     7,    13,    25,
     164,    77,    32,   110,    30,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    32,    -1,    47,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    32,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    32,    -1,    -1,    -1,    -1,    32,    38,    39,    40,
      41,    42,    43,    39,    40,    41,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    24,    49,    17,    50,     0,    51,    26,    52,    53,
      54,     1,     9,    57,    58,     9,    55,    61,    65,     1,
       4,    27,    58,     4,    56,     1,     4,    12,    13,    14,
      15,    16,    18,    25,    30,    50,    66,    67,    68,    70,
      72,    73,    75,    78,    81,    82,     1,    59,    62,    50,
       3,    29,     1,     4,    74,    11,    11,     4,     5,     6,
       7,     8,    11,    21,    31,    39,    40,    41,    44,    45,
      46,    76,    77,    80,    83,    84,    90,    91,     1,     4,
       9,    69,    80,     4,    60,    11,    80,    19,    19,    23,
      80,    80,    11,    80,     5,     6,     7,     8,    85,    86,
      87,    88,    89,    80,    80,    80,    80,    80,    80,    19,
      23,    32,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    76,    92,     3,     4,    20,    79,    19,    19,    23,
       9,    63,    64,    19,     4,    10,    10,    10,    22,    23,
      23,    23,    23,    77,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    10,    80,     3,     4,     5,    71,
      19,     4,     4,    10,    23,    66,     5,     6,     8,     7,
      47,    80,    28,     1,    64,    80,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     6,     0,     4,     0,     2,     0,
       0,     3,     2,     1,     0,     5,     3,     2,     1,     3,
       0,     0,     6,     3,     1,     3,     0,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     4,     0,     3,     4,     1,     6,     1,     1,
       5,     3,     3,     1,     1,     3,     3,     1,     1,     1,
       0,     4,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     2,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 59 "src/gramatica.y"
                                           { TS_AddMark(); }
#line 1508 "generated/y.tab.c"
    break;

  case 4:
#line 62 "src/gramatica.y"
                                        { TS_ClearBlock(); }
#line 1514 "generated/y.tab.c"
    break;

  case 5:
#line 65 "src/gramatica.y"
                                             {decVar = 1; }
#line 1520 "generated/y.tab.c"
    break;

  case 6:
#line 67 "src/gramatica.y"
                                             {decVar = 0; }
#line 1526 "generated/y.tab.c"
    break;

  case 10:
#line 73 "src/gramatica.y"
                                                   { esFunc = 1; }
#line 1532 "generated/y.tab.c"
    break;

  case 11:
#line 74 "src/gramatica.y"
                                     { esFunc = 0; }
#line 1538 "generated/y.tab.c"
    break;

  case 14:
#line 80 "src/gramatica.y"
                                        { yyval.type = yyvsp[-1].type; setType(yyvsp[-1]);agregarNuevoID(yyvsp[0], &yyval);}
#line 1544 "generated/y.tab.c"
    break;

  case 19:
#line 87 "src/gramatica.y"
                              {
                                agregarNuevoID(yyvsp[0], &yyval);
                              }
#line 1552 "generated/y.tab.c"
    break;

  case 21:
#line 92 "src/gramatica.y"
                                        { setType(yyvsp[-1]); decParam = 1; TS_AddFunction(yyvsp[0]); }
#line 1558 "generated/y.tab.c"
    break;

  case 22:
#line 93 "src/gramatica.y"
                                                             { decParam = 0; yyvsp[-2].nDim = 0; }
#line 1564 "generated/y.tab.c"
    break;

  case 27:
#line 101 "src/gramatica.y"
                                        { setType(yyvsp[-1]); TS_AddParam(yyvsp[0]); }
#line 1570 "generated/y.tab.c"
    break;

  case 40:
#line 118 "src/gramatica.y"
                                                             { comprobarAsignacion(yyvsp[-3], yyvsp[-1]); }
#line 1576 "generated/y.tab.c"
    break;

  case 42:
#line 121 "src/gramatica.y"
                                                         { comprobarBooleano(yyvsp[-1]);}
#line 1582 "generated/y.tab.c"
    break;

  case 44:
#line 129 "src/gramatica.y"
                                                         { comprobarAsignacion(yyvsp[-2], yyvsp[0]); comprobarEntero(yyvsp[0]);}
#line 1588 "generated/y.tab.c"
    break;

  case 45:
#line 130 "src/gramatica.y"
                                                                { comprobarAsignacion(yyvsp[-2], yyvsp[0]); comprobarEntero(yyvsp[-1]); }
#line 1594 "generated/y.tab.c"
    break;

  case 47:
#line 133 "src/gramatica.y"
                                                                              { comprobarEntero(yyvsp[-2]); }
#line 1600 "generated/y.tab.c"
    break;

  case 48:
#line 136 "src/gramatica.y"
                                        { yyval.type = INT; }
#line 1606 "generated/y.tab.c"
    break;

  case 49:
#line 137 "src/gramatica.y"
                                 { TS_GetById(yyvsp[0],&yyval); }
#line 1612 "generated/y.tab.c"
    break;

  case 50:
#line 140 "src/gramatica.y"
                                                                         { comprobarBooleano(yyvsp[-2]); }
#line 1618 "generated/y.tab.c"
    break;

  case 52:
#line 145 "src/gramatica.y"
                                                      { agregarNuevoID(yyvsp[0], &yyval); }
#line 1624 "generated/y.tab.c"
    break;

  case 53:
#line 146 "src/gramatica.y"
                                 { agregarNuevoID(yyvsp[0], &yyval); }
#line 1630 "generated/y.tab.c"
    break;

  case 56:
#line 151 "src/gramatica.y"
                                                                       { TS_CheckParam(yyvsp[0]); }
#line 1636 "generated/y.tab.c"
    break;

  case 57:
#line 152 "src/gramatica.y"
                                       {checkParams = 0; TS_CheckParam(yyvsp[0]); }
#line 1642 "generated/y.tab.c"
    break;

  case 60:
#line 158 "src/gramatica.y"
                                               { TS_CheckReturn(yyvsp[0], &yyval); }
#line 1648 "generated/y.tab.c"
    break;

  case 62:
#line 161 "src/gramatica.y"
                                                      { yyval.type = yyvsp[-1].type; yyval.nDim = yyvsp[-1].nDim; }
#line 1654 "generated/y.tab.c"
    break;

  case 63:
#line 162 "src/gramatica.y"
                                               { comprobarIncrementoDecremento(yyvsp[-1], yyvsp[0], &yyval); }
#line 1660 "generated/y.tab.c"
    break;

  case 64:
#line 163 "src/gramatica.y"
                                                   { comprobarIncrementoDecremento(yyvsp[-1], yyvsp[0], &yyval); }
#line 1666 "generated/y.tab.c"
    break;

  case 65:
#line 164 "src/gramatica.y"
                                               { comprobarIncrementoDecremento(yyvsp[0], yyvsp[-1], &yyval); }
#line 1672 "generated/y.tab.c"
    break;

  case 66:
#line 165 "src/gramatica.y"
                                                   { comprobarIncrementoDecremento(yyvsp[0], yyvsp[-1], &yyval); }
#line 1678 "generated/y.tab.c"
    break;

  case 67:
#line 166 "src/gramatica.y"
                                                   { comprobarNumeroElementosLista(yyvsp[-1], yyvsp[0], &yyval); }
#line 1684 "generated/y.tab.c"
    break;

  case 68:
#line 167 "src/gramatica.y"
                                                                 { comprobarMasMenos(yyvsp[-1], yyvsp[0], &yyval); }
#line 1690 "generated/y.tab.c"
    break;

  case 69:
#line 168 "src/gramatica.y"
                                                 {comprobarNegacionConBooleano(yyvsp[-1], yyvsp[0], &yyval); }
#line 1696 "generated/y.tab.c"
    break;

  case 71:
#line 170 "src/gramatica.y"
                                                         {comprobarPosicionLista(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval);}
#line 1702 "generated/y.tab.c"
    break;

  case 72:
#line 171 "src/gramatica.y"
                                                            { comprobarMasMenosBinario(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1708 "generated/y.tab.c"
    break;

  case 73:
#line 172 "src/gramatica.y"
                                                              {comprobaOperadorBinarioConcatenarListas(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval);}
#line 1714 "generated/y.tab.c"
    break;

  case 74:
#line 173 "src/gramatica.y"
                                                            { comprobarOperadorBinarioAndOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1720 "generated/y.tab.c"
    break;

  case 75:
#line 174 "src/gramatica.y"
                                                             { comprobarOperadorBinarioAndOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1726 "generated/y.tab.c"
    break;

  case 76:
#line 175 "src/gramatica.y"
                                                            { comprobarOperadorBinarioRelacion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1732 "generated/y.tab.c"
    break;

  case 77:
#line 176 "src/gramatica.y"
                                                         { comprobarOperadorBinarioRelacion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1738 "generated/y.tab.c"
    break;

  case 78:
#line 177 "src/gramatica.y"
                                                         {comprobaOperadorBinarioMultiplicacion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1744 "generated/y.tab.c"
    break;

  case 79:
#line 178 "src/gramatica.y"
                                                             {comprobarMenosMenos(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval);}
#line 1750 "generated/y.tab.c"
    break;

  case 80:
#line 179 "src/gramatica.y"
                                                                          {comprobarOperadorTernarioLista(yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1756 "generated/y.tab.c"
    break;

  case 81:
#line 180 "src/gramatica.y"
                                 { yyval.type = TS_GetType(yyvsp[0]); yyval.nDim = TS_GetNDim(yyvsp[0]); decVar = 0; }
#line 1762 "generated/y.tab.c"
    break;

  case 82:
#line 181 "src/gramatica.y"
                                        { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; }
#line 1768 "generated/y.tab.c"
    break;

  case 83:
#line 182 "src/gramatica.y"
                                      { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; currentFunction = -1;}
#line 1774 "generated/y.tab.c"
    break;

  case 84:
#line 183 "src/gramatica.y"
                                       { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; }
#line 1780 "generated/y.tab.c"
    break;

  case 87:
#line 190 "src/gramatica.y"
                                        { yyval.type = INT; }
#line 1786 "generated/y.tab.c"
    break;

  case 88:
#line 191 "src/gramatica.y"
                                          { yyval.type = FLOAT; }
#line 1792 "generated/y.tab.c"
    break;

  case 89:
#line 192 "src/gramatica.y"
                                         { yyval.type = BOOLEAN; }
#line 1798 "generated/y.tab.c"
    break;

  case 90:
#line 193 "src/gramatica.y"
                                         { yyval.type = CHAR; }
#line 1804 "generated/y.tab.c"
    break;

  case 91:
#line 196 "src/gramatica.y"
                                                            { yyval.type = yyvsp[-1].type; }
#line 1810 "generated/y.tab.c"
    break;

  case 92:
#line 199 "src/gramatica.y"
                                                  { yyval.type = LIST_INT; yyval.nDim = yyvsp[0].nDim; }
#line 1816 "generated/y.tab.c"
    break;

  case 93:
#line 200 "src/gramatica.y"
                                                    { yyval.type = LIST_FLOAT; yyval.nDim = yyvsp[0].nDim; }
#line 1822 "generated/y.tab.c"
    break;

  case 94:
#line 201 "src/gramatica.y"
                                                   { yyval.type = LIST_BOOLEAN; yyval.nDim = yyvsp[0].nDim; }
#line 1828 "generated/y.tab.c"
    break;

  case 95:
#line 202 "src/gramatica.y"
                                                   { yyval.type = LIST_CHAR; yyval.nDim = yyvsp[0].nDim; }
#line 1834 "generated/y.tab.c"
    break;

  case 104:
#line 214 "src/gramatica.y"
                                                                  { yyval.attr = yyvsp[0].attr; yyval.type = yyvsp[0].type, yyval.nDim = yyvsp[0].nDim; }
#line 1840 "generated/y.tab.c"
    break;

  case 105:
#line 217 "src/gramatica.y"
                                        { comprobarLlamadaAFuncion(yyvsp[-1]); }
#line 1846 "generated/y.tab.c"
    break;

  case 106:
#line 219 "src/gramatica.y"
                                                                {TS_FunctionCall(&yyval);}
#line 1852 "generated/y.tab.c"
    break;


#line 1856 "generated/y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 221 "src/gramatica.y"


#include "lex.yy.c"

void yyerror(const char *msg ) 
{
    fprintf(stderr,"[Linea %d]: %s\n", line, msg) ;
}
