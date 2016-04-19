/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 9 "mipl.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctype.h>
#include <stack>
#include <list>
#include "SymbolTable.h"
using namespace std;

void ignoreComment();
int ckInt();
void semanticError(const int errMsgNum);
void prRule(const char*, const char*);
void printTokenInfo(const char* tokenType, 
                    const char* lexeme);
void prSymbolTableAddition(const string identName, 
                           const TYPE_INFO typeInfo);
void beginScope();
void endScope();
void cleanUp();
TYPE_INFO findEntryInAnyScope(const string theName);

int yyerror(const char*);

extern "C" {
    int yyparse(void);
    int yylex(void);
    int yywrap() {return 1;}
}

#define MAX_INT	"2147483647"

#define OUTPUT_TOKENS	     0
#define OUTPUT_PRODUCTIONS 0
#define OUTPUT_ST_MGT      0

#define LOGICAL_OP    100
#define ARITHMETIC_OP 101

#define POSITIVE		1
#define NEGATIVE		-1
#define NO_SIGN		0

int lineNum = 1;                   // source line number

stack<SYMBOL_TABLE> scopeStack;    // stack of scope hashtables
list<string> variableNames;		  // list of declared variables

typedef char Cstring[256];

#define ERR_EXPR_MUST_BE_BOOL				0
#define ERR_EXPR_MUST_BE_INT				1 
#define ERR_INDEX_VAR_MUST_BE_ARRAY			2 
#define ERR_CANNOT_ASSIGN_TO_ARRAY			3 
#define ERR_PROCEDURE_VAR_MISMATCH			4
#define ERR_EXPR_MUST_BE_SAME_AS_VAR			5
#define ERR_EXPRS_MUST_BOTH_BE_SAME_TYPE		6
#define ERR_INDEX_EXPR_MUST_BE_INT			7
#define ERR_INPUT_VAR_MUST_BE_INT_OR_CHAR		8
#define ERR_OUTPUT_VAR_MUST_BE_INT_OR_CHAR		9
#define ERR_MULTIPLY_DEFINED_IDENT			10
#define ERR_START_INDEX_MUST_BE_LE_END_INDEX	11
#define ERR_UNDEFINED_IDENT					12

const Cstring ERR_MSG[] = {
"Expression must be of type boolean",
"Expression must be of type integer",
"Indexed variable must be of array type",
"Cannot make assignment to an array",
"Procedure/variable mismatch",
"Expression must be of same type as variable",
"Expressions must both be int, or both char, or both boolean",
"Index expression must be of type integer",
"Input variable must be of type integer or char",
"Output expression must be of type integer or char",
"Multiply defined identifier",
"Start index must be less than or equal to end index of array",
"Undefined identifier"
};



#line 152 "mipl.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
    T_LPAREN = 258,
    T_RPAREN = 259,
    T_MULT = 260,
    T_PLUS = 261,
    T_COMMA = 262,
    T_MINUS = 263,
    T_DOT = 264,
    T_DOTDOT = 265,
    T_COLON = 266,
    T_ASSIGN = 267,
    T_SCOLON = 268,
    T_LT = 269,
    T_LE = 270,
    T_NE = 271,
    T_EQ = 272,
    T_GT = 273,
    T_GE = 274,
    T_LBRACK = 275,
    T_RBRACK = 276,
    T_DO = 277,
    T_AND = 278,
    T_ARRAY = 279,
    T_BEGIN = 280,
    T_BOOL = 281,
    T_CHAR = 282,
    T_CHARCONST = 283,
    T_DIV = 284,
    T_END = 285,
    T_FALSE = 286,
    T_IDENT = 287,
    T_IF = 288,
    T_INT = 289,
    T_INTCONST = 290,
    T_NOT = 291,
    T_OF = 292,
    T_OR = 293,
    T_PROC = 294,
    T_PROG = 295,
    T_READ = 296,
    T_TRUE = 297,
    T_VAR = 298,
    T_WHILE = 299,
    T_WRITE = 300,
    T_UNKNOWN = 301,
    ST_EOF = 302,
    T_THEN = 303,
    T_ELSE = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 95 "mipl.y" /* yacc.c:355  */

  char* text;
  char ch;
  int num;
  bool boolean;
  TYPE_INFO typeInfo;

#line 247 "mipl.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 262 "mipl.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   111

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   146,   146,   153,   158,   164,   169,   173,   179,   182,
     199,   210,   224,   245,   252,   260,   269,   275,   285,   296,
     304,   312,   321,   330,   338,   354,   367,   375,   384,   398,
     405,   408,   416,   422,   431,   447,   450,   456,   471,   479,
     484,   490,   495,   499,   505,   508,   525,   537,   540,   546,
     551,   572,   575,   581,   598,   609,   608,   623,   629,   635,
     639,   643,   647,   651,   655,   661,   665,   670,   676,   684,
     692,   701,   711,   715,   719,   723,   727,   731,   735,   741,
     744,   750,   755,   764,   772,   781,   815,   818,   825,   828,
     834,   842,   851,   874,   873,   886
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_LPAREN", "T_RPAREN", "T_MULT",
  "T_PLUS", "T_COMMA", "T_MINUS", "T_DOT", "T_DOTDOT", "T_COLON",
  "T_ASSIGN", "T_SCOLON", "T_LT", "T_LE", "T_NE", "T_EQ", "T_GT", "T_GE",
  "T_LBRACK", "T_RBRACK", "T_DO", "T_AND", "T_ARRAY", "T_BEGIN", "T_BOOL",
  "T_CHAR", "T_CHARCONST", "T_DIV", "T_END", "T_FALSE", "T_IDENT", "T_IF",
  "T_INT", "T_INTCONST", "T_NOT", "T_OF", "T_OR", "T_PROC", "T_PROG",
  "T_READ", "T_TRUE", "T_VAR", "T_WHILE", "T_WRITE", "T_UNKNOWN", "ST_EOF",
  "T_THEN", "T_ELSE", "$accept", "N_START", "N_ADDOP", "N_ADDOP_LOGICAL",
  "N_ADDOP_ARITH", "N_ADDOPLST", "N_ARRAY", "N_ARRAYVAR", "N_ASSIGN",
  "N_BLOCK", "N_BOOLCONST", "N_COMPOUND", "N_CONDITION", "N_CONST",
  "N_ENTIREVAR", "N_EXPR", "N_FACTOR", "N_IDENT", "N_IDENTLST", "N_IDX",
  "N_IDXRANGE", "N_IDXVAR", "N_INPUTLST", "N_INPUTVAR", "N_INTCONST",
  "N_MULTOP", "N_MULTOP_LOGICAL", "N_MULTOP_ARITH", "N_MULTOPLST",
  "N_OUTPUT", "N_OUTPUTLST", "N_PROCDEC", "N_PROCHDR", "N_PROCDECPART",
  "N_PROCIDENT", "N_PROCSTMT", "N_PROG", "$@1", "N_PROGLBL", "N_READ",
  "N_RELOP", "N_SIGN", "N_SIMPLE", "N_SIMPLEEXPR", "N_STMT", "N_STMTLST",
  "N_STMTPART", "N_TERM", "N_TYPE", "N_VARDEC", "N_VARDECLST",
  "N_VARDECPART", "N_VARIABLE", "N_VARIDENT", "N_WHILE", "$@2", "N_WRITE", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -84

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-84)))

#define YYTABLE_NINF -93

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -24,   -84,    22,   -84,    -3,   -84,    24,   -84,    -8,     7,
      31,     6,   -84,    36,    37,   -84,    12,    42,    -8,    32,
       7,    38,     7,    48,     6,   -84,    21,   -84,   -84,    36,
      -9,    50,   -84,   -84,   -84,    11,     5,    61,     5,    70,
      54,   -84,   -84,   -84,    55,   -84,   -84,   -84,   -84,    63,
      65,   -84,   -84,   -84,   -84,    58,   -84,   -84,   -84,   -84,
     -84,   -84,     7,     5,   -84,   -84,   -84,   -84,     5,   -84,
     -84,   -84,    33,     9,   -84,   -11,    53,     4,    47,   -84,
       5,     5,    21,    52,     5,    20,   -84,    76,   -84,    21,
     -84,   -84,   -84,     5,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     5,   -84,   -84,   -84,
       5,   -84,   -84,   -84,    77,   -84,    64,   -84,    78,    62,
      63,   -84,   -84,    79,    66,   -84,    56,   -84,    39,     9,
     -84,     4,    47,    86,    21,     5,    88,   -84,   -84,    20,
      57,    21,   -84,   -84,    77,   -84,   -84,    78,   -84,   -84,
      -7,   -84,   -84,   -84,   -84
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    57,     0,     2,     0,     1,     0,    55,    88,     0,
       0,    51,    29,    30,     0,    56,     0,     0,    88,     0,
       0,     0,    86,     0,    51,    49,     0,    81,    13,    30,
       0,     0,    89,    50,    52,    53,    65,     0,    65,     0,
       0,    72,    78,    76,    90,    91,    54,    73,    74,    79,
       0,    22,    77,    75,    31,     0,    70,    69,    68,    84,
      83,    85,    86,    65,    66,    67,    20,    15,    65,    14,
      21,    26,     0,    44,    19,     0,    23,     8,     0,    93,
      65,    65,     0,     0,    65,    65,    87,     0,    28,     0,
      42,    41,    43,    65,    39,    40,    82,    92,    38,    25,
      59,    61,    64,    63,    60,    62,    65,     6,     7,     5,
      65,     3,     4,    71,    35,    37,     0,    46,    47,     0,
      79,    16,    12,     0,     0,    32,     0,    27,    17,    44,
      24,     8,     0,     0,     0,    65,     0,    34,    80,    65,
       0,     0,    45,     9,    35,    58,    94,    47,    95,    33,
       0,    18,    36,    48,    10
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -84,   -84,   -84,   -84,   -84,   -38,   -84,   -84,   -84,    80,
     -84,    81,   -84,   -84,   -84,   -33,   -59,    75,    67,   -42,
     -84,   -84,   -45,   -31,   -83,   -84,   -84,   -84,   -27,   -32,
     -43,   -84,   -84,    82,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -79,   -41,    -1,   -82,   -13,   -84,    -2,   -84,   101,
      49,   -84,   -74,   -84,   -84,   -84,   -84
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   110,   111,   112,   113,    59,    40,    41,    10,
      70,    42,    43,    71,    44,   117,    73,    13,    21,   123,
     124,    45,   133,   114,    74,    93,    94,    95,    96,   118,
     136,    17,    18,    19,    46,    47,     3,     8,     4,    48,
     106,    75,    60,    76,    49,    83,    28,    77,    61,    31,
      32,    11,    50,    51,    52,   116,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,    99,   125,    72,   115,    79,   126,   128,    63,    88,
     107,    64,   108,    65,    90,    55,     1,    56,    57,    56,
      57,    97,     5,   -92,    98,    58,    64,    58,    65,     6,
      87,   -92,    91,    66,   129,     9,    67,     7,    92,    12,
      15,    68,   109,    20,    23,    16,    26,    69,   119,    30,
      22,   122,   146,    35,    36,    24,   125,    26,   115,   151,
     126,    33,    37,    62,    78,    38,    39,   100,   101,   102,
     103,   104,   105,    80,    81,   -11,    82,    84,    85,    97,
     127,    89,   121,   137,   132,   135,   134,   140,   141,   139,
     145,    98,   148,   143,   150,    29,    54,   149,    25,   152,
      27,   144,   142,   147,   153,   130,    34,   138,   131,   154,
      14,    86
};

static const yytype_uint8 yycheck[] =
{
      82,    75,    85,    36,    78,    38,    85,    89,     3,    68,
       6,     6,     8,     8,     5,    24,    40,    26,    27,    26,
      27,    32,     0,    12,    35,    34,     6,    34,     8,    32,
      63,    20,    23,    28,    93,    43,    31,    13,    29,    32,
       9,    36,    38,     7,    32,    39,    25,    42,    81,    11,
      13,    84,   134,    32,    33,    13,   139,    25,   132,   141,
     139,    13,    41,    13,     3,    44,    45,    14,    15,    16,
      17,    18,    19,     3,    20,    20,    13,    12,    20,    32,
       4,    48,    30,    21,     7,     7,    22,    21,    49,    10,
       4,    35,     4,   131,    37,    20,    29,   139,    18,   144,
      19,   132,   129,   135,   147,   106,    24,   120,   110,   150,
       9,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    51,    86,    88,     0,    32,    13,    87,    43,
      59,   101,    32,    67,    99,     9,    39,    81,    82,    83,
       7,    68,    13,    32,    13,    59,    25,    61,    96,    67,
      11,    99,   100,    13,    83,    32,    33,    41,    44,    45,
      57,    58,    61,    62,    64,    71,    84,    85,    89,    94,
     102,   103,   104,   106,    68,    24,    26,    27,    34,    56,
      92,    98,    13,     3,     6,     8,    28,    31,    36,    42,
      60,    63,    65,    66,    74,    91,    93,    97,     3,    65,
       3,    20,    13,    95,    12,    20,   100,    65,    66,    48,
       5,    23,    29,    75,    76,    77,    78,    32,    35,   102,
      14,    15,    16,    17,    18,    19,    90,     6,     8,    38,
      52,    53,    54,    55,    73,   102,   105,    65,    79,    65,
      94,    30,    65,    69,    70,    74,    91,     4,    94,    66,
      93,    97,     7,    72,    22,     7,    80,    21,    95,    10,
      21,    49,    78,    55,    73,     4,    94,    79,     4,    69,
      37,    94,    72,    80,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    54,    54,    55,    55,
      56,    57,    58,    59,    60,    60,    61,    62,    62,    63,
      63,    63,    64,    65,    65,    66,    66,    66,    66,    67,
      68,    68,    69,    70,    71,    72,    72,    73,    74,    75,
      75,    76,    77,    77,    78,    78,    79,    80,    80,    81,
      82,    83,    83,    84,    85,    87,    86,    88,    89,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    92,    92,
      92,    93,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    96,    97,    98,    98,    99,   100,   100,   101,   101,
     102,   102,   103,   105,   104,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     0,     3,
       6,     1,     3,     3,     1,     1,     4,     4,     6,     1,
       1,     1,     1,     1,     3,     2,     1,     3,     2,     1,
       0,     3,     1,     3,     4,     0,     3,     1,     2,     1,
       1,     1,     1,     1,     0,     3,     1,     0,     3,     2,
       3,     0,     3,     1,     1,     0,     6,     1,     5,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     1,     2,     1,     1,     4,     0,     3,     0,     4,
       1,     1,     1,     0,     5,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 147 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_START", "N_PROG");
			  printf("\n---- Completed parsing ----\n\n");
			  return 0;
                  }
#line 1460 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 154 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP", "N_ADDOP_LOGICAL");
			  (yyval.num) = LOGICAL_OP;
                  }
#line 1469 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 159 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP", "N_ADDOP_ARITH");
			  (yyval.num) = ARITHMETIC_OP;
                  }
#line 1478 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 165 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP_LOGICAL", "T_OR");
			  }
#line 1486 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 170 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP_ARITH", "T_PLUS");
			  }
#line 1494 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 174 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP_ARITH", "T_MINUS");
			  }
#line 1502 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 179 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOPLST", "epsilon");
			  }
#line 1510 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 183 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOPLST", 
			         "N_ADDOP N_TERM N_ADDOPLST");
			  if (((yyvsp[-2].num) == LOGICAL_OP) && ((yyvsp[-1].typeInfo).type != BOOL)) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
			  else if (((yyvsp[-2].num) == ARITHMETIC_OP) &&
				      ((yyvsp[-1].typeInfo).type != INT)) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_INT);
			    return(0);
			  }
			  }
#line 1530 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 201 "mipl.y" /* yacc.c:1646  */
    {
                  prRule("N_ARRAY",
                	         "T_ARRAY T_LBRACK N_IDXRANGE T_RBRACK T_OF N_SIMPLE");
			  (yyval.typeInfo).type = ARRAY; 
                	  (yyval.typeInfo).startIndex = (yyvsp[-3].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[-3].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).type;
                  }
#line 1543 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 211 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_ARRAYVAR", "N_ENTIREVAR");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
                	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
                	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		    	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
			  if ((yyvsp[0].typeInfo).type != ARRAY) 
			  {
               	    semanticError(ERR_INDEX_VAR_MUST_BE_ARRAY);
             	    return(0);
              	  }
                  }
#line 1560 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 225 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_ASSIGN", 
                         "N_VARIABLE T_ASSIGN N_EXPR");
			  if ((yyvsp[-2].typeInfo).type == ARRAY) 
			  {
                	    semanticError(ERR_CANNOT_ASSIGN_TO_ARRAY);
              	    return(0);
                	  }
			  if ((yyvsp[-2].typeInfo).type == PROCEDURE) 
			  {
			      semanticError(ERR_PROCEDURE_VAR_MISMATCH);
                      return(0);
			  }
			  if ((yyvsp[0].typeInfo).type != (yyvsp[-2].typeInfo).type) 
			  {
              	    semanticError(ERR_EXPR_MUST_BE_SAME_AS_VAR);
               	    return(0);
                	  }
             	  }
#line 1584 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 246 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_BLOCK", 
                         "N_VARDECPART N_PROCDECPART N_STMTPART");
                	  endScope();
                  }
#line 1594 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 253 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_BOOLCONST", "T_TRUE");
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
			  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		   	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 1606 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 261 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_BOOLCONST", "T_FALSE");
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		        (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1618 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 270 "mipl.y" /* yacc.c:1646  */
    {
                  prRule("N_COMPOUND", 
                         "T_BEGIN N_STMT N_STMTLST T_END");
                  }
#line 1627 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 276 "mipl.y" /* yacc.c:1646  */
    {
                  prRule("N_CONDITION", 
                         "T_IF N_EXPR T_THEN N_STMT");
			  if ((yyvsp[-2].typeInfo).type != BOOL) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
                  }
#line 1641 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 286 "mipl.y" /* yacc.c:1646  */
    {
                  prRule("N_CONDITION",
                      "T_IF N_EXPR T_THEN N_STMT T_ELSE N_STMT");
			  if ((yyvsp[-4].typeInfo).type != BOOL) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
                  }
#line 1655 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 297 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_CONST", "N_INTCONST");
			  (yyval.typeInfo).type = INT; 
               	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
              	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1667 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 305 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_CONST", "T_CHARCONST");
			  (yyval.typeInfo).type = CHAR; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
               	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	  }
#line 1679 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 313 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_CONST", "N_BOOLCONST");
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
               	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1691 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 322 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_ENTIREVAR", "N_VARIDENT");
              	  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
                	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                  }
#line 1703 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 331 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_EXPR", "N_SIMPLEEXPR");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
               	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		    	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                  }
#line 1715 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 339 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_EXPR", 
                         "N_SIMPLEEXPR N_RELOP N_SIMPLEEXPR");
			  if ((yyvsp[-2].typeInfo).type != (yyvsp[0].typeInfo).type) 
			  {
			    semanticError(
 			       ERR_EXPRS_MUST_BOTH_BE_SAME_TYPE);
			    return(0);
			  }
			  (yyval.typeInfo).type = BOOL; 
               	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
              	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	  }
#line 1734 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 355 "mipl.y" /* yacc.c:1646  */
    {
            	  prRule("N_FACTOR", "N_SIGN N_VARIABLE");
			  if (((yyvsp[-1].num) != NO_SIGN) && ((yyvsp[0].typeInfo).type != INT)) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_INT);
			    return(0);
			  }
      		  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
                	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
              	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		   	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                  }
#line 1751 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 368 "mipl.y" /* yacc.c:1646  */
    {
            	  prRule("N_FACTOR", "N_CONST");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
             	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		   	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
           	  }
#line 1763 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 376 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_FACTOR", 
              	         "T_LPAREN N_EXPR T_RPAREN");
			  (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type; 
             	  (yyval.typeInfo).startIndex = (yyvsp[-1].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[-1].typeInfo).endIndex;
		   	  (yyval.typeInfo).baseType = (yyvsp[-1].typeInfo).baseType;
             	  }
#line 1776 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 385 "mipl.y" /* yacc.c:1646  */
    {
            	  prRule("N_FACTOR", "T_NOT N_FACTOR");
			  if ((yyvsp[0].typeInfo).type != BOOL) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	  }
#line 1793 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 399 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_IDENT", "T_IDENT");
               	  (yyval.text) = (yyvsp[0].text);
              	  }
#line 1802 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 405 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_IDENTLST", "epsilon");
               	  }
#line 1810 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 409 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_IDENTLST", 
                	         "T_COMMA N_IDENT N_IDENTLST");
			  string varName = string((yyvsp[-1].text));
			  variableNames.push_front(varName);
              	  }
#line 1821 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 417 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_IDX", "N_INTCONST");
               	  (yyval.num) = (yyvsp[0].num);
               	  }
#line 1830 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 423 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_IDXRANGE", "N_IDX T_DOTDOT N_IDX");
		     	  (yyval.typeInfo).type = INDEX_RANGE; 
                	  (yyval.typeInfo).startIndex = (yyvsp[-2].num);
               	  (yyval.typeInfo).endIndex = (yyvsp[0].num);
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	  }
#line 1842 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 432 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_IDXVAR", 
              	         "N_ARRAYVAR T_LBRACK N_EXPR T_RBRACK");
	    		  if ((yyvsp[-1].typeInfo).type != INT) 
			  {
          		    semanticError(ERR_INDEX_EXPR_MUST_BE_INT);
               	    return(0);
              	  }
			  (yyval.typeInfo).type = (yyvsp[-3].typeInfo).baseType; 
			  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
			  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
			  (yyval.typeInfo).baseType = NOT_APPLICABLE;
              	  }
#line 1860 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 447 "mipl.y" /* yacc.c:1646  */
    {
           	  prRule("N_INPUTLST", "epsilon");
             	  }
#line 1868 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 451 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_INPUTLST", 
              	         "T_COMMA N_INPUTVAR N_INPUTLST");
            	  }
#line 1877 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 457 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_INPUTVAR", "N_VARIABLE");
			  if (((yyvsp[0].typeInfo).type != INT) && ((yyvsp[0].typeInfo).type != CHAR)) 
			  {
             	    semanticError(
			      ERR_INPUT_VAR_MUST_BE_INT_OR_CHAR);
              	    return(0);
                	  }
		   	  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
                	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
                	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
             	  }
#line 1895 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 472 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_INTCONST", "N_SIGN T_INTCONST");
			  if ((yyvsp[-1].num) == NO_SIGN)
			    (yyval.num) = (yyvsp[0].num);
			  else (yyval.num) = (yyvsp[-1].num) * (yyvsp[0].num);
               	  }
#line 1906 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 480 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_MULTOP", "N_MULTOP_LOGICAL");
			  (yyval.num) = LOGICAL_OP;
                	  }
#line 1915 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 485 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_MULTOP", "N_MULTOP_ARITH");
			  (yyval.num) = ARITHMETIC_OP;
              	  }
#line 1924 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 491 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_MULTOP_LOGICAL", "T_AND");
                	  }
#line 1932 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 496 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_MULTOP_ARITH", "T_MULT");
               	  }
#line 1940 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 500 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_MULTOP_ARITH", "T_DIV");
                	  }
#line 1948 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 505 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_MULTOPLST", "epsilon");
               	  }
#line 1956 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 509 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_MULTOPLST", 
               	         "N_MULTOP N_FACTOR N_MULTOPLST");
			  if (((yyvsp[-2].num) == LOGICAL_OP) && ((yyvsp[-1].typeInfo).type != BOOL))
 			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
			  else if (((yyvsp[-2].num) == ARITHMETIC_OP) &&
			           ((yyvsp[-1].typeInfo).type != INT)) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_INT);
			    return(0);
			  }
             	  }
#line 1976 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 526 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_OUTPUT", "N_EXPR");
			  if (((yyvsp[0].typeInfo).type != INT) && ((yyvsp[0].typeInfo).type != CHAR)) 
			  {
              	    semanticError(
			      ERR_OUTPUT_VAR_MUST_BE_INT_OR_CHAR);
             	    return(0);
               	  }
              	  }
#line 1990 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 537 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_OUTPUTLST", "epsilon");
               	  }
#line 1998 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 541 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_OUTPUTLST", 
			         "T_COMMA N_OUTPUT N_OUTPUTLST");
            	  }
#line 2007 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 547 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_PROCDEC", "N_PROCHDR N_BLOCK");
             	  }
#line 2015 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 552 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_PROCHDR",
			         "T_PROC T_IDENT T_SCOLON");
			  string lexeme = string((yyvsp[-1].text));
			  TYPE_INFO info = {PROCEDURE, NOT_APPLICABLE,
		                          NOT_APPLICABLE,
		                          NOT_APPLICABLE};
			  prSymbolTableAddition(lexeme, info);
            	  bool success = scopeStack.top().addEntry
         	                    (SYMBOL_TABLE_ENTRY(lexeme,info));
             	  if (! success) 
			  {
            	    semanticError(ERR_MULTIPLY_DEFINED_IDENT);
               	    return(0);
               	  }

			  beginScope();
                  }
#line 2038 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 572 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_PROCDECPART", "epsilon");
               	  }
#line 2046 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 576 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_PROCDECPART",
               	         "N_PROCDEC T_SCOLON N_PROCDECPART");
              	  }
#line 2055 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 582 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_PROCIDENT", "T_IDENT");
			  string ident = string((yyvsp[0].text));
                	  TYPE_INFO typeInfo = 
			              findEntryInAnyScope(ident);
               	  if (typeInfo.type == UNDEFINED) 
			  {
                	    semanticError(ERR_MULTIPLY_DEFINED_IDENT);
                	    return(0);
               	  }
			  (yyval.typeInfo).type = typeInfo.type;
			  (yyval.typeInfo).startIndex = typeInfo.startIndex;
			  (yyval.typeInfo).endIndex = typeInfo.endIndex;
			  (yyval.typeInfo).baseType = typeInfo.baseType;
               	  }
#line 2075 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 599 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_PROCSTMT", "N_PROCIDENT");
			  if ((yyvsp[0].typeInfo).type != PROCEDURE) 
			  {
			    semanticError(ERR_PROCEDURE_VAR_MISMATCH);
			    return(0);
			  }
              	  }
#line 2088 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 609 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_PROG",
                     "N_PROGLBL T_IDENT T_SCOLON N_BLOCK T_DOT");
			  string lexeme = string((yyvsp[-1].text));
			  TYPE_INFO info = {PROGRAM, NOT_APPLICABLE,
			                    NOT_APPLICABLE,
			                    NOT_APPLICABLE};
			  prSymbolTableAddition(lexeme, info);
               	  bool success = scopeStack.top().addEntry
                               (SYMBOL_TABLE_ENTRY(lexeme,info));
			  }
#line 2104 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 621 "mipl.y" /* yacc.c:1646  */
    { }
#line 2110 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 624 "mipl.y" /* yacc.c:1646  */
    {
            	  prRule("N_PROGLBL", "T_PROG");
			  beginScope();
               	  }
#line 2119 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 630 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_READ",
               "T_READ T_LPAREN N_INPUTVAR N_INPUTLST T_RPAREN");
			  }
#line 2128 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 636 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_RELOP", "T_LT");
                	  }
#line 2136 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 640 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_RELOP", "T_GT");
                	  }
#line 2144 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 644 "mipl.y" /* yacc.c:1646  */
    {
                   prRule("N_RELOP", "T_LE");
               	  }
#line 2152 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 648 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_RELOP", "T_GE");
                	  }
#line 2160 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 652 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_RELOP", "T_EQ");
                	  }
#line 2168 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 656 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_RELOP", "T_NE");
               	  }
#line 2176 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 661 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_SIGN", "epsilon");
			  (yyval.num) = NO_SIGN;
               	  }
#line 2185 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 666 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_SIGN", "T_PLUS");
			  (yyval.num) = POSITIVE;
               	  }
#line 2194 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 671 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_SIGN", "T_MINUS");
			  (yyval.num) = NEGATIVE;
               	  }
#line 2203 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 677 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_SIMPLE", "T_INT");
			  (yyval.typeInfo).type = INT; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 2215 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 685 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_SIMPLE", "T_CHAR");
			  (yyval.typeInfo).type = CHAR; 
               	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 2227 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 693 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_SIMPLE", "T_BOOL");
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 2239 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 702 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_SIMPLEEXPR", 
               	         "N_TERM N_ADDOPLST");
			  (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type; 
               	  (yyval.typeInfo).startIndex = (yyvsp[-1].typeInfo).startIndex;
                	  (yyval.typeInfo).endIndex = (yyvsp[-1].typeInfo).endIndex;
		    	  (yyval.typeInfo).baseType = (yyvsp[-1].typeInfo).baseType;
                	  }
#line 2252 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 712 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_ASSIGN");
               	  }
#line 2260 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 716 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_STMT", "N_PROCSTMT");
                	  }
#line 2268 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 720 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_READ");
                	  }
#line 2276 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 724 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_WRITE");
                	  }
#line 2284 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 728 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_CONDITION");
                	  }
#line 2292 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 732 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_WHILE");
                	  }
#line 2300 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 736 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_COMPOUND");
                	  }
#line 2308 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 741 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMTLST", "epsilon");
                	  }
#line 2316 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 745 "mipl.y" /* yacc.c:1646  */
    {
                   prRule("N_STMTLST", 
			          "T_SCOLON N_STMT N_STMTLST");
               	  }
#line 2325 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 751 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_STMTPART", "N_COMPOUND");
               	  }
#line 2333 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 756 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_TERM", "N_FACTOR N_MULTOPLST");
			  (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type; 
                	  (yyval.typeInfo).startIndex = (yyvsp[-1].typeInfo).startIndex;
                	  (yyval.typeInfo).endIndex = (yyvsp[-1].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[-1].typeInfo).baseType;
               	  }
#line 2345 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 765 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_TYPE", "N_SIMPLE");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
               	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		    	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
              	  }
#line 2357 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 773 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_TYPE", "N_ARRAY");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
               	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                	  }
#line 2369 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 782 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARDEC", 
             	         "N_IDENT N_IDENTLST T_COLON N_TYPE");
			  string varName = string((yyvsp[-3].text));
			  variableNames.push_front(varName);
		
			  for (std::list<string>::iterator
             	       it=variableNames.begin();
			       it != variableNames.end(); it++) 
			  {
			    string varName = string(*it);
			    prSymbolTableAddition(varName, (yyvsp[0].typeInfo));
             	    bool success = scopeStack.top().addEntry
                            (SYMBOL_TABLE_ENTRY(varName, (yyvsp[0].typeInfo)));
              	    if (! success) 
			    {
               	      semanticError(ERR_MULTIPLY_DEFINED_IDENT);
             	      return(0);
               	    }
               	    if ((yyvsp[0].typeInfo).type == ARRAY) 
			    {
              	      if ((yyvsp[0].typeInfo).startIndex > (yyvsp[0].typeInfo).endIndex) 
			      {
             	        semanticError(
				   ERR_START_INDEX_MUST_BE_LE_END_INDEX);
                	        return(0);
               	      }
              	    }
			  }
                	  variableNames.clear();
              	  }
#line 2405 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 815 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_VARDECLST", "epsilon");
             	  }
#line 2413 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 819 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARDECLST", 
              	         "N_VARDEC T_SCOLON N_VARDECLST");
            	  }
#line 2422 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 825 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_VARDECPART", "epsilon");
               	  }
#line 2430 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 829 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARDECPART",
                        "T_VAR N_VARDEC T_SCOLON N_VARDECLST");
               	  }
#line 2439 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 835 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_VARIABLE", "N_ENTIREVAR");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
			  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
			  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
			  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
               	  }
#line 2451 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 843 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARIABLE", "N_IDXVAR");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
			  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
			  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
			  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
               	  }
#line 2463 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 852 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARIDENT", "T_IDENT");
			  string ident = string((yyvsp[0].text));
                	  TYPE_INFO typeInfo = 
						findEntryInAnyScope(ident);
                	  if (typeInfo.type == UNDEFINED) 
		 	  {
             	    semanticError(ERR_UNDEFINED_IDENT);
             	    return(0);
              	  }
			  if (typeInfo.type == PROCEDURE) 
			  {
			    semanticError(ERR_PROCEDURE_VAR_MISMATCH);
                	    return(0);
			  }
			  (yyval.typeInfo).type = typeInfo.type;
			  (yyval.typeInfo).startIndex = typeInfo.startIndex;
			  (yyval.typeInfo).endIndex = typeInfo.endIndex;
			  (yyval.typeInfo).baseType = typeInfo.baseType;
			  }
#line 2488 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 874 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_WHILE", 
                	         "T_WHILE N_EXPR T_DO N_STMT");
			  if ((yyvsp[0].typeInfo).type != BOOL) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
               	  }
#line 2502 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 884 "mipl.y" /* yacc.c:1646  */
    { }
#line 2508 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 887 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_WRITE",
               "T_WRITE T_LPAREN N_OUTPUT N_OUTPUTLST T_RPAREN");
               	  }
#line 2517 "mipl.tab.c" /* yacc.c:1646  */
    break;


#line 2521 "mipl.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 892 "mipl.y" /* yacc.c:1906  */


#include    "lex.yy.c"
extern FILE *yyin;

void prRule(const char *lhs, const char *rhs) 
{
  if (OUTPUT_PRODUCTIONS)
    printf("%s -> %s\n", lhs, rhs);
  return;
}

void semanticError(const int errMsgNum)
{
  yyerror(ERR_MSG[errMsgNum]);
}

int yyerror(const char *s) 
{
  printf("Line %d: %s\n", lineNum, s);
  cleanUp();
  exit(1);
}

int ckInt() 
{
  char *ptr;
  int	rc = 0;
  ptr = yytext;

  /* ignore sign and leading zeroes */
  if (*ptr == '-' || *ptr == '+')
    ++ptr;
  while (*ptr == '0')
    ++ptr;

  switch (*ptr) {
  case '1':	/* ALL are valid */
			break;

  case '2':	/* it depends */
			if (strcmp(MAX_INT, ptr) < 0)
				rc = 1;
			break;

  default:	     /* ALL are invalid */
			rc = 1;
			break;
		}
  return rc;
}

void printTokenInfo(const char* tokenType, 
                    const char* lexeme) 
{
  if (OUTPUT_TOKENS)
    printf("TOKEN: %-15s  LEXEME: %s\n", tokenType, lexeme);
}

void ignoreComment() 
{
  char c, pc = 0;

  // read and ignore input until you get "*)" 
  while (((c = yyinput()) != ')' || pc != '*') && c != 0) {
    pc = c;
    if (c == '\n') lineNum++;
  }

  return;
}

void beginScope() 
{
  scopeStack.push(SYMBOL_TABLE());
  if (OUTPUT_ST_MGT) 
    printf("\n___Entering new scope...\n\n");
}

void endScope() 
{
  scopeStack.pop();
  if (OUTPUT_ST_MGT) 
    printf("\n___Exiting scope...\n\n");
}

void prSymbolTableAddition(const string identName, 
                           const TYPE_INFO typeInfo) 
{
  if (OUTPUT_ST_MGT) 
  {
   char *cstr = new char[identName.length() + 1];
   strcpy(cstr, identName.c_str());
   printf("___Adding %s to symbol table with type ", cstr);
   delete [] cstr;
   switch (typeInfo.type) {
	case PROGRAM	: printf("PROGRAM\n"); 
                        break;
	case PROCEDURE	: printf("PROCEDURE\n"); 
                        break;
	case INT		: printf("INTEGER\n"); 
                        break;
	case CHAR		: printf("CHAR\n"); 
                        break;
	case BOOL		: printf("BOOLEAN\n"); 
                        break;
	case ARRAY		: printf("ARRAY ");
				  printf("%d .. %d OF ",
				         typeInfo.startIndex, 
				         typeInfo.endIndex);
				  switch (typeInfo.baseType) {
				    case INT : printf("INTEGER\n"); 
                                     break;
				    case CHAR: printf("CHAR\n"); 
                                     break;
				    case BOOL: printf("BOOLEAN\n"); 
                                     break;
				    default : printf("UNKNOWN\n"); 
                                    break;
				  }
				  break;
	default 		: printf("UNKNOWN\n"); 
                        break;
   }
  }
}

TYPE_INFO findEntryInAnyScope(const string theName) 
{
  TYPE_INFO info = {UNDEFINED, NOT_APPLICABLE, NOT_APPLICABLE,
                    NOT_APPLICABLE};
  if (scopeStack.empty( )) return(info);
  info = scopeStack.top().findEntry(theName);
  if (info.type != UNDEFINED)
    return(info);
  else { // check in "next higher" scope
	   SYMBOL_TABLE symbolTable = scopeStack.top( );
	   scopeStack.pop( );
	   info = findEntryInAnyScope(theName);
	   scopeStack.push(symbolTable); // restore the stack
	   return(info);
  }
}

void cleanUp() 
{
  if (scopeStack.empty()) 
    return;
  else {
        scopeStack.pop();
        cleanUp();
  }
}

int main(int argc, char** argv){

  if(argc < 2) {
    printf("You must specify a file in the command line!\n");
    exit(1);
  }

  yyin = fopen(argv[1], "r");

  // loop as long as there is anything to parse
  do {
    yyparse();
  } while (!feof(yyin));

  cleanUp();
  return 0;
}


