/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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


#line 88 "generated/y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OP_ASIGNACION = 258,           /* OP_ASIGNACION  */
    ID = 259,                      /* ID  */
    CONST_INT = 260,               /* CONST_INT  */
    CONST_FLOAT = 261,             /* CONST_FLOAT  */
    CONST_CHAR = 262,              /* CONST_CHAR  */
    CONST_BOOL = 263,              /* CONST_BOOL  */
    DECLAR = 264,                  /* DECLAR  */
    PARDER = 265,                  /* PARDER  */
    PARIZQ = 266,                  /* PARIZQ  */
    METERDATOS = 267,              /* METERDATOS  */
    MIENTRAS = 268,                /* MIENTRAS  */
    SI = 269,                      /* SI  */
    SACARDATOS = 270,              /* SACARDATOS  */
    FOR = 271,                     /* FOR  */
    INICIOBLOQUE = 272,            /* INICIOBLOQUE  */
    FINBLOQUE = 273,               /* FINBLOQUE  */
    PYC = 274,                     /* PYC  */
    TO = 275,                      /* TO  */
    CORIZQ = 276,                  /* CORIZQ  */
    CORDER = 277,                  /* CORDER  */
    COMA = 278,                    /* COMA  */
    MAIN = 279,                    /* MAIN  */
    RETURN = 280,                  /* RETURN  */
    INI_DECLAR_VAR = 281,          /* INI_DECLAR_VAR  */
    FIN_DECLAR_VAR = 282,          /* FIN_DECLAR_VAR  */
    DO = 283,                      /* DO  */
    SENT_LIST = 284,               /* SENT_LIST  */
    DOLAR = 285,                   /* DOLAR  */
    CADENA = 286,                  /* CADENA  */
    ARRARR = 287,                  /* ARRARR  */
    THEN = 288,                    /* THEN  */
    ELSE = 289,                    /* ELSE  */
    OP_OR_LOG = 290,               /* OP_OR_LOG  */
    OP_AND_LOG = 291,              /* OP_AND_LOG  */
    OP_EQ_NEQ = 292,               /* OP_EQ_NEQ  */
    OP_REL = 293,                  /* OP_REL  */
    MAS_MENOS = 294,               /* MAS_MENOS  */
    MENOSMENOS = 295,              /* MENOSMENOS  */
    MASMAS = 296,                  /* MASMAS  */
    OP_MUL = 297,                  /* OP_MUL  */
    OP_LIST_MUL = 298,             /* OP_LIST_MUL  */
    NEGACION = 299,                /* NEGACION  */
    OP_LIST_UN = 300,              /* OP_LIST_UN  */
    OP_AND_LIST = 301,             /* OP_AND_LIST  */
    ARROBA = 302                   /* ARROBA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OP_ASIGNACION = 3,              /* OP_ASIGNACION  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_CONST_INT = 5,                  /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 6,                /* CONST_FLOAT  */
  YYSYMBOL_CONST_CHAR = 7,                 /* CONST_CHAR  */
  YYSYMBOL_CONST_BOOL = 8,                 /* CONST_BOOL  */
  YYSYMBOL_DECLAR = 9,                     /* DECLAR  */
  YYSYMBOL_PARDER = 10,                    /* PARDER  */
  YYSYMBOL_PARIZQ = 11,                    /* PARIZQ  */
  YYSYMBOL_METERDATOS = 12,                /* METERDATOS  */
  YYSYMBOL_MIENTRAS = 13,                  /* MIENTRAS  */
  YYSYMBOL_SI = 14,                        /* SI  */
  YYSYMBOL_SACARDATOS = 15,                /* SACARDATOS  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_INICIOBLOQUE = 17,              /* INICIOBLOQUE  */
  YYSYMBOL_FINBLOQUE = 18,                 /* FINBLOQUE  */
  YYSYMBOL_PYC = 19,                       /* PYC  */
  YYSYMBOL_TO = 20,                        /* TO  */
  YYSYMBOL_CORIZQ = 21,                    /* CORIZQ  */
  YYSYMBOL_CORDER = 22,                    /* CORDER  */
  YYSYMBOL_COMA = 23,                      /* COMA  */
  YYSYMBOL_MAIN = 24,                      /* MAIN  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_INI_DECLAR_VAR = 26,            /* INI_DECLAR_VAR  */
  YYSYMBOL_FIN_DECLAR_VAR = 27,            /* FIN_DECLAR_VAR  */
  YYSYMBOL_DO = 28,                        /* DO  */
  YYSYMBOL_SENT_LIST = 29,                 /* SENT_LIST  */
  YYSYMBOL_DOLAR = 30,                     /* DOLAR  */
  YYSYMBOL_CADENA = 31,                    /* CADENA  */
  YYSYMBOL_ARRARR = 32,                    /* ARRARR  */
  YYSYMBOL_THEN = 33,                      /* THEN  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_OP_OR_LOG = 35,                 /* OP_OR_LOG  */
  YYSYMBOL_OP_AND_LOG = 36,                /* OP_AND_LOG  */
  YYSYMBOL_OP_EQ_NEQ = 37,                 /* OP_EQ_NEQ  */
  YYSYMBOL_OP_REL = 38,                    /* OP_REL  */
  YYSYMBOL_MAS_MENOS = 39,                 /* MAS_MENOS  */
  YYSYMBOL_MENOSMENOS = 40,                /* MENOSMENOS  */
  YYSYMBOL_MASMAS = 41,                    /* MASMAS  */
  YYSYMBOL_OP_MUL = 42,                    /* OP_MUL  */
  YYSYMBOL_OP_LIST_MUL = 43,               /* OP_LIST_MUL  */
  YYSYMBOL_NEGACION = 44,                  /* NEGACION  */
  YYSYMBOL_OP_LIST_UN = 45,                /* OP_LIST_UN  */
  YYSYMBOL_OP_AND_LIST = 46,               /* OP_AND_LIST  */
  YYSYMBOL_ARROBA = 47,                    /* ARROBA  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_programa = 49,                  /* programa  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_bloque = 51,                    /* bloque  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_declar_de_variables_locales = 53, /* declar_de_variables_locales  */
  YYSYMBOL_54_3 = 54,                      /* $@3  */
  YYSYMBOL_declar_de_subprogs = 55,        /* declar_de_subprogs  */
  YYSYMBOL_declar_subprog = 56,            /* declar_subprog  */
  YYSYMBOL_57_4 = 57,                      /* $@4  */
  YYSYMBOL_variables_locales = 58,         /* variables_locales  */
  YYSYMBOL_cuerpo_declar_variables = 59,   /* cuerpo_declar_variables  */
  YYSYMBOL_60_5 = 60,                      /* @5  */
  YYSYMBOL_mas_variables = 61,             /* mas_variables  */
  YYSYMBOL_cabecera_subprograma = 62,      /* cabecera_subprograma  */
  YYSYMBOL_63_6 = 63,                      /* $@6  */
  YYSYMBOL_declaraciones_id = 64,          /* declaraciones_id  */
  YYSYMBOL_param = 65,                     /* param  */
  YYSYMBOL_sentencias = 66,                /* sentencias  */
  YYSYMBOL_sentencia = 67,                 /* sentencia  */
  YYSYMBOL_sentencia_asignacion = 68,      /* sentencia_asignacion  */
  YYSYMBOL_sentencia_if = 69,              /* sentencia_if  */
  YYSYMBOL_expresion_if = 70,              /* expresion_if  */
  YYSYMBOL_asignacion_for_pascal = 71,     /* asignacion_for_pascal  */
  YYSYMBOL_sentencia_for_pascal = 72,      /* sentencia_for_pascal  */
  YYSYMBOL_valor = 73,                     /* valor  */
  YYSYMBOL_sentencia_while = 74,           /* sentencia_while  */
  YYSYMBOL_sentencia_entrada = 75,         /* sentencia_entrada  */
  YYSYMBOL_lista_variables = 76,           /* lista_variables  */
  YYSYMBOL_sentencia_salida = 77,          /* sentencia_salida  */
  YYSYMBOL_lista_expresiones_o_cadena = 78, /* lista_expresiones_o_cadena  */
  YYSYMBOL_expr_cad = 79,                  /* expr_cad  */
  YYSYMBOL_sentencia_return = 80,          /* sentencia_return  */
  YYSYMBOL_81_7 = 81,                      /* @7  */
  YYSYMBOL_expresion = 82,                 /* expresion  */
  YYSYMBOL_sentencia_adelante_atras = 83,  /* sentencia_adelante_atras  */
  YYSYMBOL_sentencia_principio_lista = 84, /* sentencia_principio_lista  */
  YYSYMBOL_constante = 85,                 /* constante  */
  YYSYMBOL_agregado = 86,                  /* agregado  */
  YYSYMBOL_constante_lista = 87,           /* constante_lista  */
  YYSYMBOL_constante_lista_int = 88,       /* constante_lista_int  */
  YYSYMBOL_constante_lista_float = 89,     /* constante_lista_float  */
  YYSYMBOL_constante_lista_bool = 90,      /* constante_lista_bool  */
  YYSYMBOL_constante_lista_char = 91,      /* constante_lista_char  */
  YYSYMBOL_funcion = 92,                   /* funcion  */
  YYSYMBOL_cabecera_funcion = 93,          /* cabecera_funcion  */
  YYSYMBOL_argumentos_funcion = 94         /* argumentos_funcion  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,    58,    58,    58,    61,    61,    67,    67,    70,    72,
      73,    75,    75,    79,    80,    82,    82,    84,    85,    86,
      88,    93,    95,    95,    99,   100,   101,   102,   104,   107,
     108,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   121,   122,   124,   125,   128,   131,   132,   134,   137,
     138,   141,   144,   146,   147,   148,   150,   152,   153,   156,
     157,   159,   159,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   188,   190,   192,   193,
     194,   195,   198,   201,   202,   203,   204,   207,   208,   209,
     210,   211,   212,   213,   214,   216,   219,   221
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "OP_ASIGNACION", "ID",
  "CONST_INT", "CONST_FLOAT", "CONST_CHAR", "CONST_BOOL", "DECLAR",
  "PARDER", "PARIZQ", "METERDATOS", "MIENTRAS", "SI", "SACARDATOS", "FOR",
  "INICIOBLOQUE", "FINBLOQUE", "PYC", "TO", "CORIZQ", "CORDER", "COMA",
  "MAIN", "RETURN", "INI_DECLAR_VAR", "FIN_DECLAR_VAR", "DO", "SENT_LIST",
  "DOLAR", "CADENA", "ARRARR", "THEN", "ELSE", "OP_OR_LOG", "OP_AND_LOG",
  "OP_EQ_NEQ", "OP_REL", "MAS_MENOS", "MENOSMENOS", "MASMAS", "OP_MUL",
  "OP_LIST_MUL", "NEGACION", "OP_LIST_UN", "OP_AND_LIST", "ARROBA",
  "$accept", "programa", "$@1", "bloque", "$@2",
  "declar_de_variables_locales", "$@3", "declar_de_subprogs",
  "declar_subprog", "$@4", "variables_locales", "cuerpo_declar_variables",
  "@5", "mas_variables", "cabecera_subprograma", "$@6", "declaraciones_id",
  "param", "sentencias", "sentencia", "sentencia_asignacion",
  "sentencia_if", "expresion_if", "asignacion_for_pascal",
  "sentencia_for_pascal", "valor", "sentencia_while", "sentencia_entrada",
  "lista_variables", "sentencia_salida", "lista_expresiones_o_cadena",
  "expr_cad", "sentencia_return", "@7", "expresion",
  "sentencia_adelante_atras", "sentencia_principio_lista", "constante",
  "agregado", "constante_lista", "constante_lista_int",
  "constante_lista_float", "constante_lista_bool", "constante_lista_char",
  "funcion", "cabecera_funcion", "argumentos_funcion", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-16)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -74,     2,    -5,   -74,     9,   -74,   -74,     5,   -74,   -74,
      59,    41,   -74,    65,     0,   -74,    63,   -74,   -74,   133,
     -74,    40,   -74,   -74,   -74,     9,   -74,    13,   107,    96,
     124,    -1,   108,   -74,     7,    87,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   127,
     -74,     7,    74,   -74,   -74,    80,     7,     7,   128,   -74,
     -74,   -74,   -74,     7,   161,   -74,     7,     7,     7,     7,
       7,     7,    82,   -74,   166,   -74,   -74,   -74,    -1,   -74,
     137,   122,   166,   142,    83,   134,   141,   -74,   -74,   155,
      78,   152,   166,   -74,    90,   -74,   -74,   -74,   -74,   149,
     151,   163,   164,   174,   -74,   -18,   -18,   -74,   -74,   -74,
     -74,    -1,     7,     7,     7,     7,     7,     7,    50,    50,
       7,     7,    -2,   -74,     7,   119,   145,   -74,   -74,   168,
     171,    54,   -74,   -74,   -74,   140,   179,   -74,   -74,   194,
     205,   215,   206,   -74,   -18,   178,   190,   202,    33,   -18,
     -18,   153,   -74,   -74,   -74,   166,   -74,   -74,   196,   -74,
     -74,   -74,   -74,    88,   -74,   140,   -74,   -74,   -74,   -74,
       7,   140,   -74,   -74,   191,   -74,   -74,   140,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     3,     8,     6,    10,
       0,    30,    19,     0,     0,    14,     0,     9,    11,     0,
      18,     0,     7,    13,    22,     0,    42,     0,     0,     0,
       0,     0,     0,     5,     0,     0,    31,    29,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    17,    21,     0,
      12,     0,     0,    55,    54,     0,     0,     0,    82,    88,
      89,    91,    90,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,    58,    59,    83,    85,    84,     0,    47,
       0,     0,    61,     0,     0,    27,     0,    86,    52,     0,
       0,     0,    45,   106,     0,    98,   100,   104,   102,     0,
      93,    94,    95,    96,    69,    65,    64,    70,    68,    71,
      56,     0,     0,     0,     0,     0,     0,     0,    67,    66,
       0,     0,     0,   105,     0,     0,     0,    87,    16,     0,
       0,     0,    25,    41,    53,     0,     0,    63,    92,     0,
       0,     0,     0,    57,    72,    75,    76,    77,    78,    73,
      80,     0,    79,    74,   107,    46,    50,    49,     0,    62,
      20,    28,    23,     0,    51,     0,    97,    99,   101,   103,
       0,     0,    26,    24,    43,    81,    48,     0,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -74,    45,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   212,   -74,   -74,   -74,   -74,   -74,    72,   -74,   -73,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     158,   126,   -74,   -74,   -34,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    36,     7,     9,    10,    11,    17,    25,
      14,    15,    48,    84,    18,    49,   131,   132,    19,    37,
      38,    39,    91,    81,    40,   158,    41,    42,    55,    43,
      72,    73,    44,   126,    74,    45,    46,    75,    76,    99,
     100,   101,   102,   103,    77,    78,   123
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    12,     3,    58,    59,    60,    61,    62,   154,    13,
      63,    58,    59,    60,    61,    62,    51,    86,    63,     4,
      64,   111,    90,    92,   120,   121,     5,    22,    64,    94,
      65,     8,   104,   105,   106,   107,   108,   109,    66,    67,
      68,    47,    52,    69,    70,    71,    66,    67,    68,     6,
      16,    69,    70,    71,    58,    59,    60,    61,    62,   -15,
      12,    63,   164,   -15,   162,   112,    20,    24,    13,    21,
      50,    64,   117,   118,   119,   120,   121,   163,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   135,   172,
     155,    83,   174,    87,    69,    70,    71,   130,   176,    88,
     137,   110,   128,    89,   178,   111,   129,    56,    53,    79,
     112,    54,    80,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   112,   156,   157,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    26,    57,   175,    27,    85,    93,
     124,    26,   125,   130,    27,    28,    29,    30,    31,    32,
       5,    33,    28,    29,    30,    31,    32,     5,    34,   134,
     133,   127,   136,    35,   159,    34,    95,    96,    97,    98,
      35,   138,   160,   112,   139,   161,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   112,   140,   141,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   142,   112,   166,
     170,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     112,   167,   165,   169,   114,   115,   116,   117,   118,   119,
     120,   121,   112,   168,   171,   177,    23,   115,   116,   117,
     118,   119,   120,   121,   112,   173,   122,   143,     0,     0,
     116,   117,   118,   119,   120,   121
};

static const yytype_int16 yycheck[] =
{
      34,     1,     0,     4,     5,     6,     7,     8,    10,     9,
      11,     4,     5,     6,     7,     8,     3,    51,    11,    24,
      21,    23,    56,    57,    42,    43,    17,    27,    21,    63,
      31,    26,    66,    67,    68,    69,    70,    71,    39,    40,
      41,     1,    29,    44,    45,    46,    39,    40,    41,     4,
       9,    44,    45,    46,     4,     5,     6,     7,     8,    19,
       1,    11,   135,    23,    10,    32,     1,     4,     9,     4,
      25,    21,    39,    40,    41,    42,    43,    23,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    10,     1,
     124,     4,   165,    19,    44,    45,    46,     9,   171,    19,
      10,    19,    19,    23,   177,    23,    23,    11,     1,     1,
      32,     4,     4,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    32,     4,     5,    35,    36,    37,    38,    39,
      40,    41,    42,    43,     1,    11,   170,     4,    11,    11,
       3,     1,    20,     9,     4,    12,    13,    14,    15,    16,
      17,    18,    12,    13,    14,    15,    16,    17,    25,     4,
      19,    19,    10,    30,    19,    25,     5,     6,     7,     8,
      30,    22,     4,    32,    23,     4,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    32,    23,    23,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    23,    32,     5,
      47,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      32,     6,    33,     7,    36,    37,    38,    39,    40,    41,
      42,    43,    32,     8,    28,    34,    14,    37,    38,    39,
      40,    41,    42,    43,    32,   163,    78,   111,    -1,    -1,
      38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,    24,    17,    51,    52,    26,    53,
      54,    55,     1,     9,    58,    59,     9,    56,    62,    66,
       1,     4,    27,    59,     4,    57,     1,     4,    12,    13,
      14,    15,    16,    18,    25,    30,    51,    67,    68,    69,
      72,    74,    75,    77,    80,    83,    84,     1,    60,    63,
      51,     3,    29,     1,     4,    76,    11,    11,     4,     5,
       6,     7,     8,    11,    21,    31,    39,    40,    41,    44,
      45,    46,    78,    79,    82,    85,    86,    92,    93,     1,
       4,    71,    82,     4,    61,    11,    82,    19,    19,    23,
      82,    70,    82,    11,    82,     5,     6,     7,     8,    87,
      88,    89,    90,    91,    82,    82,    82,    82,    82,    82,
      19,    23,    32,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    78,    94,     3,    20,    81,    19,    19,    23,
       9,    64,    65,    19,     4,    10,    10,    10,    22,    23,
      23,    23,    23,    79,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    10,    82,     4,     5,    73,    19,
       4,     4,    10,    23,    67,    33,     5,     6,     8,     7,
      47,    28,     1,    65,    67,    82,    67,    34,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    52,    51,    54,    53,    53,    55,
      55,    57,    56,    58,    58,    60,    59,    59,    59,    59,
      61,    61,    63,    62,    64,    64,    64,    64,    65,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    69,    69,    70,    71,    71,    72,    73,
      73,    74,    75,    76,    76,    76,    77,    78,    78,    79,
      79,    81,    80,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    84,    85,    85,
      85,    85,    86,    87,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    93,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     6,     0,     4,     0,     2,
       0,     0,     3,     2,     1,     0,     5,     3,     2,     1,
       3,     0,     0,     6,     3,     1,     3,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     6,     8,     1,     3,     1,     6,     1,
       1,     5,     3,     3,     1,     1,     3,     3,     1,     1,
       1,     0,     4,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     2,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* $@1: %empty  */
#line 58 "src/gramatica.y"
                              { generaFich(); }
#line 1397 "generated/y.tab.c"
    break;

  case 3: /* programa: $@1 MAIN bloque  */
#line 58 "src/gramatica.y"
                                                            { closeInter(); }
#line 1403 "generated/y.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 61 "src/gramatica.y"
                                           { TS_AddMark(); }
#line 1409 "generated/y.tab.c"
    break;

  case 5: /* bloque: INICIOBLOQUE $@2 declar_de_variables_locales declar_de_subprogs sentencias FINBLOQUE  */
#line 64 "src/gramatica.y"
                                        { TS_ClearBlock(); }
#line 1415 "generated/y.tab.c"
    break;

  case 6: /* $@3: %empty  */
#line 67 "src/gramatica.y"
                                             {decVar = 1; }
#line 1421 "generated/y.tab.c"
    break;

  case 7: /* declar_de_variables_locales: INI_DECLAR_VAR $@3 variables_locales FIN_DECLAR_VAR  */
#line 69 "src/gramatica.y"
                                             {decVar = 0; }
#line 1427 "generated/y.tab.c"
    break;

  case 11: /* $@4: %empty  */
#line 75 "src/gramatica.y"
                                                   { esFunc = 1; }
#line 1433 "generated/y.tab.c"
    break;

  case 12: /* declar_subprog: cabecera_subprograma $@4 bloque  */
#line 76 "src/gramatica.y"
                                     { esFunc = 0; }
#line 1439 "generated/y.tab.c"
    break;

  case 15: /* @5: %empty  */
#line 82 "src/gramatica.y"
                                        { yyval.type = yyvsp[-1].type; setType(yyvsp[-1]);agregarNuevoID(yyvsp[0], &yyval); declarID(yyvsp[0]); }
#line 1445 "generated/y.tab.c"
    break;

  case 16: /* cuerpo_declar_variables: DECLAR ID @5 mas_variables PYC  */
#line 83 "src/gramatica.y"
                                                { pycYSalto(); }
#line 1451 "generated/y.tab.c"
    break;

  case 20: /* mas_variables: mas_variables COMA ID  */
#line 89 "src/gramatica.y"
                              {
                                declarListID(yyvsp[0]);
                                agregarNuevoID(yyvsp[0], &yyval);
                              }
#line 1460 "generated/y.tab.c"
    break;

  case 22: /* $@6: %empty  */
#line 95 "src/gramatica.y"
                                        { setType(yyvsp[-1]); decParam = 1; TS_AddFunction(yyvsp[0]); }
#line 1466 "generated/y.tab.c"
    break;

  case 23: /* cabecera_subprograma: DECLAR ID $@6 PARIZQ declaraciones_id PARDER  */
#line 96 "src/gramatica.y"
                                                             { decParam = 0; yyvsp[-2].nDim = 0; }
#line 1472 "generated/y.tab.c"
    break;

  case 28: /* param: DECLAR ID  */
#line 104 "src/gramatica.y"
                                        { setType(yyvsp[-1]); TS_AddParam(yyvsp[0]); }
#line 1478 "generated/y.tab.c"
    break;

  case 41: /* sentencia_asignacion: ID OP_ASIGNACION expresion PYC  */
#line 121 "src/gramatica.y"
                                                             { comprobarAsignacion(yyvsp[-3], yyvsp[-1]); evaluar_sentencia_asig(yyvsp[-3], yyvsp[-1]);}
#line 1484 "generated/y.tab.c"
    break;

  case 43: /* sentencia_if: SI PARIZQ expresion_if PARDER THEN sentencia  */
#line 124 "src/gramatica.y"
                                                                           { comprobarBooleano_if(yyvsp[-3]); }
#line 1490 "generated/y.tab.c"
    break;

  case 44: /* sentencia_if: SI PARIZQ expresion_if PARDER THEN sentencia ELSE sentencia  */
#line 125 "src/gramatica.y"
                                                                                          { comprobarBooleano_if(yyvsp[-5]);}
#line 1496 "generated/y.tab.c"
    break;

  case 45: /* expresion_if: expresion  */
#line 128 "src/gramatica.y"
                                        { line_if = line; yyval.type = yyvsp[0].type; }
#line 1502 "generated/y.tab.c"
    break;

  case 46: /* asignacion_for_pascal: ID OP_ASIGNACION expresion  */
#line 131 "src/gramatica.y"
                                                         { comprobarAsignacion(yyvsp[-2], yyvsp[0]); comprobarEntero(yyvsp[0]);}
#line 1508 "generated/y.tab.c"
    break;

  case 48: /* sentencia_for_pascal: FOR asignacion_for_pascal TO valor DO sentencia  */
#line 134 "src/gramatica.y"
                                                                              { comprobarEntero(yyvsp[-2]); }
#line 1514 "generated/y.tab.c"
    break;

  case 49: /* valor: CONST_INT  */
#line 137 "src/gramatica.y"
                                        { yyval.type = INT; }
#line 1520 "generated/y.tab.c"
    break;

  case 50: /* valor: ID  */
#line 138 "src/gramatica.y"
                                 { TS_GetById(yyvsp[0],&yyval); }
#line 1526 "generated/y.tab.c"
    break;

  case 51: /* sentencia_while: MIENTRAS PARIZQ expresion PARDER sentencia  */
#line 141 "src/gramatica.y"
                                                                         { comprobarBooleano(yyvsp[-2]); }
#line 1532 "generated/y.tab.c"
    break;

  case 53: /* lista_variables: lista_variables COMA ID  */
#line 146 "src/gramatica.y"
                                                      { agregarNuevoID(yyvsp[0], &yyval); }
#line 1538 "generated/y.tab.c"
    break;

  case 54: /* lista_variables: ID  */
#line 147 "src/gramatica.y"
                                 { agregarNuevoID(yyvsp[0], &yyval); }
#line 1544 "generated/y.tab.c"
    break;

  case 57: /* lista_expresiones_o_cadena: lista_expresiones_o_cadena COMA expr_cad  */
#line 152 "src/gramatica.y"
                                                                       { TS_CheckParam(yyvsp[0]); }
#line 1550 "generated/y.tab.c"
    break;

  case 58: /* lista_expresiones_o_cadena: expr_cad  */
#line 153 "src/gramatica.y"
                                       {checkParams = 0; TS_CheckParam(yyvsp[0]); }
#line 1556 "generated/y.tab.c"
    break;

  case 61: /* @7: %empty  */
#line 159 "src/gramatica.y"
                                               { TS_CheckReturn(yyvsp[0], &yyval); }
#line 1562 "generated/y.tab.c"
    break;

  case 63: /* expresion: PARIZQ expresion PARDER  */
#line 162 "src/gramatica.y"
                                                      { yyval.type = yyvsp[-1].type; yyval.nDim = yyvsp[-1].nDim; yyval.eval = yyvsp[-1].eval; yyval.temp_asociado = yyvsp[-1].temp_asociado;}
#line 1568 "generated/y.tab.c"
    break;

  case 64: /* expresion: MASMAS expresion  */
#line 163 "src/gramatica.y"
                                               { comprobarIncrementoDecremento(yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion_unaria(yyvsp[-1], yyvsp[0], &yyval);}
#line 1574 "generated/y.tab.c"
    break;

  case 65: /* expresion: MENOSMENOS expresion  */
#line 164 "src/gramatica.y"
                                                   { comprobarIncrementoDecremento(yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion_unaria(yyvsp[-1], yyvsp[0], &yyval);}
#line 1580 "generated/y.tab.c"
    break;

  case 66: /* expresion: expresion MASMAS  */
#line 165 "src/gramatica.y"
                                               { comprobarIncrementoDecremento(yyvsp[0], yyvsp[-1], &yyval); evaluar_expresion_unaria(yyvsp[0], yyvsp[-1], &yyval);}
#line 1586 "generated/y.tab.c"
    break;

  case 67: /* expresion: expresion MENOSMENOS  */
#line 166 "src/gramatica.y"
                                                   { comprobarIncrementoDecremento(yyvsp[0], yyvsp[-1], &yyval); evaluar_expresion_unaria(yyvsp[0], yyvsp[-1], &yyval);}
#line 1592 "generated/y.tab.c"
    break;

  case 68: /* expresion: OP_LIST_UN expresion  */
#line 167 "src/gramatica.y"
                                                   { comprobarNumeroElementosLista(yyvsp[-1], yyvsp[0], &yyval); }
#line 1598 "generated/y.tab.c"
    break;

  case 69: /* expresion: MAS_MENOS expresion  */
#line 168 "src/gramatica.y"
                                                                 { comprobarMasMenos(yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion_unaria(yyvsp[-1], yyvsp[0], &yyval);}
#line 1604 "generated/y.tab.c"
    break;

  case 70: /* expresion: NEGACION expresion  */
#line 169 "src/gramatica.y"
                                                 {comprobarNegacionConBooleano(yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion_unaria(yyvsp[-1], yyvsp[0], &yyval);}
#line 1610 "generated/y.tab.c"
    break;

  case 72: /* expresion: expresion ARRARR expresion  */
#line 171 "src/gramatica.y"
                                                         {comprobarPosicionLista(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval);}
#line 1616 "generated/y.tab.c"
    break;

  case 73: /* expresion: expresion MAS_MENOS expresion  */
#line 172 "src/gramatica.y"
                                                            { comprobarMasMenosBinario(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1622 "generated/y.tab.c"
    break;

  case 74: /* expresion: expresion OP_LIST_MUL expresion  */
#line 173 "src/gramatica.y"
                                                              {comprobaOperadorBinarioConcatenarListas(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval);}
#line 1628 "generated/y.tab.c"
    break;

  case 75: /* expresion: expresion OP_OR_LOG expresion  */
#line 174 "src/gramatica.y"
                                                            { comprobarOperadorBinarioAndOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval);}
#line 1634 "generated/y.tab.c"
    break;

  case 76: /* expresion: expresion OP_AND_LOG expresion  */
#line 175 "src/gramatica.y"
                                                             { comprobarOperadorBinarioAndOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval);}
#line 1640 "generated/y.tab.c"
    break;

  case 77: /* expresion: expresion OP_EQ_NEQ expresion  */
#line 176 "src/gramatica.y"
                                                            { comprobarOperadorBinarioRelacion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval);}
#line 1646 "generated/y.tab.c"
    break;

  case 78: /* expresion: expresion OP_REL expresion  */
#line 177 "src/gramatica.y"
                                                         { comprobarOperadorBinarioRelacion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval);}
#line 1652 "generated/y.tab.c"
    break;

  case 79: /* expresion: expresion OP_MUL expresion  */
#line 178 "src/gramatica.y"
                                                         {comprobaOperadorBinarioMultiplicacion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); evaluar_expresion(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval);}
#line 1658 "generated/y.tab.c"
    break;

  case 80: /* expresion: expresion MENOSMENOS expresion  */
#line 179 "src/gramatica.y"
                                                             {comprobarMenosMenos(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval);}
#line 1664 "generated/y.tab.c"
    break;

  case 81: /* expresion: expresion MASMAS expresion ARROBA expresion  */
#line 180 "src/gramatica.y"
                                                                          {comprobarOperadorTernarioLista(yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1670 "generated/y.tab.c"
    break;

  case 82: /* expresion: ID  */
#line 181 "src/gramatica.y"
                                 { yyval.type = TS_GetType(yyvsp[0]); yyval.nDim = TS_GetNDim(yyvsp[0]); decVar = 0; yyval.eval = "";yyval.temp_asociado = yyvsp[0].lex;}
#line 1676 "generated/y.tab.c"
    break;

  case 83: /* expresion: constante  */
#line 182 "src/gramatica.y"
                                        { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.eval = "";yyval.temp_asociado = yyvsp[0].lex; }
#line 1682 "generated/y.tab.c"
    break;

  case 84: /* expresion: funcion  */
#line 183 "src/gramatica.y"
                                      { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; currentFunction = -1; yyval.eval = "";yyval.temp_asociado = yyvsp[0].lex;}
#line 1688 "generated/y.tab.c"
    break;

  case 85: /* expresion: agregado  */
#line 184 "src/gramatica.y"
                                       { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; }
#line 1694 "generated/y.tab.c"
    break;

  case 88: /* constante: CONST_INT  */
#line 192 "src/gramatica.y"
                                        { yyval.type = INT; }
#line 1700 "generated/y.tab.c"
    break;

  case 89: /* constante: CONST_FLOAT  */
#line 193 "src/gramatica.y"
                                          { yyval.type = FLOAT; }
#line 1706 "generated/y.tab.c"
    break;

  case 90: /* constante: CONST_BOOL  */
#line 194 "src/gramatica.y"
                                         { yyval.type = BOOL; }
#line 1712 "generated/y.tab.c"
    break;

  case 91: /* constante: CONST_CHAR  */
#line 195 "src/gramatica.y"
                                         { yyval.type = CHAR; }
#line 1718 "generated/y.tab.c"
    break;

  case 92: /* agregado: CORIZQ constante_lista CORDER  */
#line 198 "src/gramatica.y"
                                                            { yyval.type = yyvsp[-1].type; }
#line 1724 "generated/y.tab.c"
    break;

  case 93: /* constante_lista: constante_lista_int  */
#line 201 "src/gramatica.y"
                                                  { yyval.type = LIST_INT; yyval.nDim = yyvsp[0].nDim; }
#line 1730 "generated/y.tab.c"
    break;

  case 94: /* constante_lista: constante_lista_float  */
#line 202 "src/gramatica.y"
                                                    { yyval.type = LIST_FLOAT; yyval.nDim = yyvsp[0].nDim; }
#line 1736 "generated/y.tab.c"
    break;

  case 95: /* constante_lista: constante_lista_bool  */
#line 203 "src/gramatica.y"
                                                   { yyval.type = LIST_BOOL; yyval.nDim = yyvsp[0].nDim; }
#line 1742 "generated/y.tab.c"
    break;

  case 96: /* constante_lista: constante_lista_char  */
#line 204 "src/gramatica.y"
                                                   { yyval.type = LIST_CHAR; yyval.nDim = yyvsp[0].nDim; }
#line 1748 "generated/y.tab.c"
    break;

  case 105: /* funcion: cabecera_funcion argumentos_funcion  */
#line 216 "src/gramatica.y"
                                                                  { yyval.attr = yyvsp[0].attr; yyval.type = yyvsp[0].type, yyval.nDim = yyvsp[0].nDim; }
#line 1754 "generated/y.tab.c"
    break;

  case 106: /* cabecera_funcion: ID PARIZQ  */
#line 219 "src/gramatica.y"
                                        { comprobarLlamadaAFuncion(yyvsp[-1]); }
#line 1760 "generated/y.tab.c"
    break;

  case 107: /* argumentos_funcion: lista_expresiones_o_cadena PARDER  */
#line 221 "src/gramatica.y"
                                                                {TS_FunctionCall(&yyval);}
#line 1766 "generated/y.tab.c"
    break;


#line 1770 "generated/y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 223 "src/gramatica.y"


#include "lex.yy.c"

void yyerror(const char *msg ) 
{
    fprintf(stderr,"[Linea %d]: %s\n", line, msg) ;
}
