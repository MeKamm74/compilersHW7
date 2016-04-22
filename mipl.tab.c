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

int findOffsetInAnyScope(const string theName);



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

int count = 20;
int countLabel = 4;
bool firstTime = true;


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



#line 161 "mipl.tab.c" /* yacc.c:339  */

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
#line 104 "mipl.y" /* yacc.c:355  */

  char* text;
  char ch;
  int num;
  bool boolean;
  TYPE_INFO typeInfo;

#line 256 "mipl.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 271 "mipl.tab.c" /* yacc.c:358  */

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
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

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
       0,   155,   155,   164,   169,   175,   180,   184,   190,   193,
     210,   221,   237,   268,   274,   268,   285,   295,   306,   312,
     322,   333,   344,   355,   367,   378,   388,   406,   421,   431,
     442,   458,   465,   468,   476,   482,   491,   509,   512,   518,
     533,   541,   546,   552,   557,   561,   567,   570,   587,   606,
     609,   615,   620,   642,   645,   651,   668,   679,   678,   696,
     702,   708,   712,   716,   720,   724,   728,   734,   738,   743,
     749,   757,   765,   774,   786,   790,   794,   798,   802,   806,
     810,   816,   819,   825,   830,   841,   849,   858,   909,   912,
     919,   922,   928,   941,   954,   980,   979,   992
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
  "N_BLOCK", "$@1", "$@2", "N_BOOLCONST", "N_COMPOUND", "N_CONDITION",
  "N_CONST", "N_ENTIREVAR", "N_EXPR", "N_FACTOR", "N_IDENT", "N_IDENTLST",
  "N_IDX", "N_IDXRANGE", "N_IDXVAR", "N_INPUTLST", "N_INPUTVAR",
  "N_INTCONST", "N_MULTOP", "N_MULTOP_LOGICAL", "N_MULTOP_ARITH",
  "N_MULTOPLST", "N_OUTPUT", "N_OUTPUTLST", "N_PROCDEC", "N_PROCHDR",
  "N_PROCDECPART", "N_PROCIDENT", "N_PROCSTMT", "N_PROG", "$@3",
  "N_PROGLBL", "N_READ", "N_RELOP", "N_SIGN", "N_SIMPLE", "N_SIMPLEEXPR",
  "N_STMT", "N_STMTLST", "N_STMTPART", "N_TERM", "N_TYPE", "N_VARDEC",
  "N_VARDECLST", "N_VARDECPART", "N_VARIABLE", "N_VARIDENT", "N_WHILE",
  "$@4", "N_WRITE", YY_NULLPTR
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

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -95

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -23,   -91,    23,   -91,    -5,   -91,    18,   -91,    -1,    11,
      27,   -91,   -91,    37,    40,   -91,     8,    11,    43,    11,
      38,    42,    -1,   -91,    37,    34,    46,   -91,    56,     8,
     -91,    47,   -91,    51,   -91,   -91,   -91,   -91,   -91,   -91,
      11,   -91,   -91,    -7,   -91,   -91,    33,   -91,     2,     4,
      70,     4,    71,    55,   -91,   -91,   -91,    57,   -91,   -91,
     -91,   -91,    63,    66,   -91,   -91,   -91,   -91,   -91,    69,
      59,   -91,    49,     4,   -91,   -91,     4,   -91,   -91,   -91,
      35,     1,   -91,   -16,    48,     7,    50,   -91,     4,     4,
      -7,    58,     4,    33,    44,   -91,    81,   -91,    -7,   -91,
     -91,   -91,     4,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     4,   -91,   -91,   -91,     4,   -91,
     -91,   -91,    79,   -91,    65,   -91,    82,    72,    63,   -91,
     -91,   -91,    -6,   -91,    41,     1,   -91,     7,    50,    87,
      -7,     4,    88,   -91,   -91,   -91,    -7,   -91,   -91,    79,
     -91,   -91,    82,   -91,   -91,   -91,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    59,     0,     2,     0,     1,     0,    57,    90,     0,
       0,    13,    31,    32,     0,    58,    53,     0,     0,    88,
       0,     0,    90,    14,    32,     0,     0,    91,     0,    53,
      51,     0,    33,     0,    72,    71,    70,    86,    85,    87,
      88,    52,    54,     0,    83,    15,    67,    89,    55,    67,
       0,    67,     0,     0,    74,    80,    78,    92,    93,    56,
      75,    76,    81,     0,    24,    79,    77,    68,    69,     0,
       0,    34,     0,    67,    22,    17,    67,    16,    23,    28,
       0,    46,    21,     0,    25,     8,     0,    95,    67,    67,
       0,     0,    67,    67,     0,    40,     0,    30,     0,    44,
      43,    45,    67,    41,    42,    84,    94,    27,    61,    63,
      66,    65,    62,    64,    67,     6,     7,     5,    67,     3,
       4,    73,    37,    39,     0,    48,    49,     0,    81,    18,
      12,    35,     0,    29,    19,    46,    26,     8,     0,     0,
       0,    67,     0,    36,    82,    10,     0,    47,     9,    37,
      60,    96,    49,    97,    20,    38,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,   -91,   -91,   -43,   -91,   -91,   -91,    73,
     -91,   -91,   -91,    67,   -91,   -91,   -91,   -40,   -73,    80,
      75,     3,   -91,   -91,   -49,   -37,   -45,   -91,   -91,   -91,
     -33,   -38,   -48,   -91,   -91,    76,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -42,   -26,    -4,   -90,   -21,   -91,   -10,
     -91,   100,    74,   -91,   -81,   -91,   -91,   -91,   -91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   118,   119,   120,   121,    37,    53,    54,    10,
      16,    31,    78,    55,    56,    79,    57,   125,    81,    13,
      18,    69,    70,    58,   139,   122,    82,   102,   103,   104,
     105,   126,   142,    21,    22,    23,    59,    60,     3,     8,
       4,    61,   114,    83,    38,    84,    62,    91,    45,    85,
      39,    26,    27,    11,    63,    64,    65,   124,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,    71,   107,    97,    72,   123,    99,    73,   134,    80,
      67,    87,    68,   115,   -94,   116,   106,     1,    43,    95,
      34,    35,   -94,     5,   100,    48,    49,     6,    36,   135,
     101,     7,    74,    96,    50,    75,    15,    51,    52,    67,
      76,    68,     9,    12,    17,   117,    77,    20,    71,   127,
     151,    72,   130,    19,    25,    29,   154,   123,    33,    40,
      34,    35,   108,   109,   110,   111,   112,   113,    36,    41,
      28,    46,    43,    86,    88,    89,    90,   -11,    92,    93,
      94,   132,   106,    98,    95,   133,   138,   140,   129,   141,
     146,   150,   153,   143,   148,    30,   131,    24,    44,    32,
     155,   149,   147,   152,   156,    42,   145,   144,   137,    14,
     136,     0,     0,     0,    47
};

static const yytype_int16 yycheck[] =
{
      90,    46,    83,    76,    46,    86,     5,     3,    98,    49,
       6,    51,     8,     6,    12,     8,    32,    40,    25,    35,
      26,    27,    20,     0,    23,    32,    33,    32,    34,   102,
      29,    13,    28,    73,    41,    31,     9,    44,    45,     6,
      36,     8,    43,    32,     7,    38,    42,    39,    93,    89,
     140,    93,    92,    13,    11,    13,   146,   138,    24,    13,
      26,    27,    14,    15,    16,    17,    18,    19,    34,    13,
      32,    20,    25,     3,     3,    20,    13,    20,    12,    10,
      21,    37,    32,    48,    35,     4,     7,    22,    30,     7,
      49,     4,     4,    21,   137,    22,    93,    17,    31,    24,
     149,   138,   135,   141,   152,    29,   132,   128,   118,     9,
     114,    -1,    -1,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    51,    88,    90,     0,    32,    13,    89,    43,
      59,   103,    32,    69,   101,     9,    60,     7,    70,    13,
      39,    83,    84,    85,    69,    11,   101,   102,    32,    13,
      59,    61,    70,    24,    26,    27,    34,    56,    94,   100,
      13,    13,    85,    25,    63,    98,    20,   102,    32,    33,
      41,    44,    45,    57,    58,    63,    64,    66,    73,    86,
      87,    91,    96,   104,   105,   106,   108,     6,     8,    71,
      72,    76,    93,     3,    28,    31,    36,    42,    62,    65,
      67,    68,    76,    93,    95,    99,     3,    67,     3,    20,
      13,    97,    12,    10,    21,    35,    67,    68,    48,     5,
      23,    29,    77,    78,    79,    80,    32,   104,    14,    15,
      16,    17,    18,    19,    92,     6,     8,    38,    52,    53,
      54,    55,    75,   104,   107,    67,    81,    67,    96,    30,
      67,    71,    37,     4,    96,    68,    95,    99,     7,    74,
      22,     7,    82,    21,    97,    94,    49,    80,    55,    75,
       4,    96,    81,     4,    96,    74,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    54,    54,    55,    55,
      56,    57,    58,    60,    61,    59,    62,    62,    63,    64,
      64,    65,    65,    65,    66,    67,    67,    68,    68,    68,
      68,    69,    70,    70,    71,    72,    73,    74,    74,    75,
      76,    77,    77,    78,    79,    79,    80,    80,    81,    82,
      82,    83,    84,    85,    85,    86,    87,    89,    88,    90,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      94,    94,    94,    95,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    98,    99,   100,   100,   101,   102,   102,
     103,   103,   104,   104,   105,   107,   106,   108
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     0,     3,
       6,     1,     3,     0,     0,     5,     1,     1,     4,     4,
       6,     1,     1,     1,     1,     1,     3,     2,     1,     3,
       2,     1,     0,     3,     1,     3,     4,     0,     3,     1,
       2,     1,     1,     1,     1,     1,     0,     3,     1,     0,
       3,     2,     3,     0,     3,     1,     1,     0,     6,     1,
       5,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     1,     2,     1,     1,     4,     0,     3,
       0,     4,     1,     1,     1,     0,     5,     5
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
#line 156 "mipl.y" /* yacc.c:1646  */
    {
					  printf("\thalt\nL.1:\n\tbss 500\n\tend\n");
					  
			  prRule("N_START", "N_PROG");
			  //printf("\n---- Completed parsing ----\n\n");
			  return 0;
                  }
#line 1472 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 165 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP", "N_ADDOP_LOGICAL");
			  (yyval.num) = LOGICAL_OP;
                  }
#line 1481 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 170 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP", "N_ADDOP_ARITH");
			  (yyval.num) = ARITHMETIC_OP;
                  }
#line 1490 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 176 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP_LOGICAL", "T_OR");
			  }
#line 1498 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 181 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP_ARITH", "T_PLUS");
			  }
#line 1506 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 185 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOP_ARITH", "T_MINUS");
			  }
#line 1514 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 190 "mipl.y" /* yacc.c:1646  */
    {
			  prRule("N_ADDOPLST", "epsilon");
			  }
#line 1522 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 194 "mipl.y" /* yacc.c:1646  */
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
#line 1542 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 212 "mipl.y" /* yacc.c:1646  */
    {
                  prRule("N_ARRAY",
                	         "T_ARRAY T_LBRACK N_IDXRANGE T_RBRACK T_OF N_SIMPLE");
			  (yyval.typeInfo).type = ARRAY; 
                	  (yyval.typeInfo).startIndex = (yyvsp[-3].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[-3].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).type;
                  }
#line 1555 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 222 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_ARRAYVAR", "N_ENTIREVAR");
					  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
					  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
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
#line 1574 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 238 "mipl.y" /* yacc.c:1646  */
    {
					  // Look up the offset
					  // Get the value, ascii or num or bool
					  // load them both
					  // st
					  
					  int val = (yyvsp[-2].typeInfo).offset;
					  if((yyvsp[0].typeInfo).isVar)
						  printf("\tderef\n");
					  printf("\tst\n");
					  			  			  
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
#line 1608 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 268 "mipl.y" /* yacc.c:1646  */
    {
					//print bss + (20+numVars)
					if(firstTime) {			
						printf("bss %d\nL.2:\n", count);
						firstTime = false;
				    }
				  }
#line 1620 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 274 "mipl.y" /* yacc.c:1646  */
    {
					//PRINT PROCEDURE OAL CODE, ELSEWHERE
				    printf("L.3:\n");
				  }
#line 1629 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 279 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_BLOCK", 
                         "N_VARDECPART N_PROCDECPART N_STMTPART");
                	  endScope();
                  }
#line 1639 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 286 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_BOOLCONST", "T_TRUE");
				  (yyval.typeInfo).offset = 1;
				  (yyval.typeInfo).isVar = false;
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
			  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		   	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 1653 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 296 "mipl.y" /* yacc.c:1646  */
    {
					  (yyval.typeInfo).offset = 0;
				  (yyval.typeInfo).isVar = false;
              	  prRule("N_BOOLCONST", "T_FALSE");
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		        (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1667 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 307 "mipl.y" /* yacc.c:1646  */
    {
                  prRule("N_COMPOUND", 
                         "T_BEGIN N_STMT N_STMTLST T_END");
                  }
#line 1676 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 313 "mipl.y" /* yacc.c:1646  */
    {
                  prRule("N_CONDITION", 
                         "T_IF N_EXPR T_THEN N_STMT");
			  if ((yyvsp[-2].typeInfo).type != BOOL) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
                  }
#line 1690 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 323 "mipl.y" /* yacc.c:1646  */
    {
                  prRule("N_CONDITION",
                      "T_IF N_EXPR T_THEN N_STMT T_ELSE N_STMT");
			  if ((yyvsp[-4].typeInfo).type != BOOL) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
                  }
#line 1704 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 334 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_CONST", "N_INTCONST");
					  (yyval.typeInfo).offset = int((yyvsp[0].num));
					  printf("\tlc %d\n", (yyval.typeInfo).offset);
					  (yyval.typeInfo).isVar = false;
			  (yyval.typeInfo).type = INT; 
               	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
              	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1719 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 345 "mipl.y" /* yacc.c:1646  */
    {
					  (yyval.typeInfo).offset = int((yyvsp[0].ch));
					  (yyval.typeInfo).isVar = false;
					  printf("\tlc %d\n", (yyval.typeInfo).offset);
                	  prRule("N_CONST", "T_CHARCONST");
			  (yyval.typeInfo).type = CHAR; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
               	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	  }
#line 1734 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 356 "mipl.y" /* yacc.c:1646  */
    {
					  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
					  (yyval.typeInfo).isVar = false;
					  printf("\tlc %d\n", (yyval.typeInfo).offset);
               	  prRule("N_CONST", "N_BOOLCONST");
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
               	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1749 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 368 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_ENTIREVAR", "N_VARIDENT");
				  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
				  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
              	  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
                	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                  }
#line 1763 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 379 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_EXPR", "N_SIMPLEEXPR");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
			  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
			  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
               	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		    	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                  }
#line 1777 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 389 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_EXPR", 
                         "N_SIMPLEEXPR N_RELOP N_SIMPLEEXPR");
			  if ((yyvsp[-2].typeInfo).type != (yyvsp[0].typeInfo).type) 
			  {
			    semanticError(
 			       ERR_EXPRS_MUST_BOTH_BE_SAME_TYPE);
			    return(0);
			  }
			  (yyval.typeInfo).isVar = (yyvsp[-2].typeInfo).isVar;
			  (yyval.typeInfo).offset = (yyvsp[-2].typeInfo).offset;
			  (yyval.typeInfo).type = BOOL; 
               	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
              	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	  }
#line 1798 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 407 "mipl.y" /* yacc.c:1646  */
    {
            	  prRule("N_FACTOR", "N_SIGN N_VARIABLE");
			  if (((yyvsp[-1].num) != NO_SIGN) && ((yyvsp[0].typeInfo).type != INT)) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_INT);
			    return(0);
			  }
			  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
			  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
      		  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
                	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
              	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		   	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                  }
#line 1817 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 422 "mipl.y" /* yacc.c:1646  */
    {
            	  prRule("N_FACTOR", "N_CONST");
				  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
				  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
             	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		   	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
           	  }
#line 1831 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 432 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_FACTOR", 
              	         "T_LPAREN N_EXPR T_RPAREN");
				  (yyval.typeInfo).offset = (yyvsp[-1].typeInfo).offset;
				  (yyval.typeInfo).isVar = (yyvsp[-1].typeInfo).isVar;
			  (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type; 
             	  (yyval.typeInfo).startIndex = (yyvsp[-1].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[-1].typeInfo).endIndex;
		   	  (yyval.typeInfo).baseType = (yyvsp[-1].typeInfo).baseType;
             	  }
#line 1846 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 443 "mipl.y" /* yacc.c:1646  */
    {
					  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
					  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
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
#line 1865 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 459 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_IDENT", "T_IDENT");
               	  (yyval.text) = (yyvsp[0].text);
              	  }
#line 1874 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 465 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_IDENTLST", "epsilon");
               	  }
#line 1882 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 469 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_IDENTLST", 
                	         "T_COMMA N_IDENT N_IDENTLST");
			  string varName = string((yyvsp[-1].text));
			  variableNames.push_front(varName);
              	  }
#line 1893 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 477 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_IDX", "N_INTCONST");
               	  (yyval.num) = (yyvsp[0].num);
               	  }
#line 1902 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 483 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_IDXRANGE", "N_IDX T_DOTDOT N_IDX");
		     	  (yyval.typeInfo).type = INDEX_RANGE; 
                	  (yyval.typeInfo).startIndex = (yyvsp[-2].num);
               	  (yyval.typeInfo).endIndex = (yyvsp[0].num);
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	  }
#line 1914 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 492 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_IDXVAR", 
              	         "N_ARRAYVAR T_LBRACK N_EXPR T_RBRACK");
	    		  if ((yyvsp[-1].typeInfo).type != INT) 
			  {
          		    semanticError(ERR_INDEX_EXPR_MUST_BE_INT);
               	    return(0);
              	  }
			  (yyval.typeInfo).isVar = (yyvsp[-3].typeInfo).isVar;
			  (yyval.typeInfo).offset = (yyvsp[-3].typeInfo).offset;	  
			  (yyval.typeInfo).type = (yyvsp[-3].typeInfo).baseType; 
			  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
			  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
			  (yyval.typeInfo).baseType = NOT_APPLICABLE;
              	  }
#line 1934 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 509 "mipl.y" /* yacc.c:1646  */
    {
           	  prRule("N_INPUTLST", "epsilon");
             	  }
#line 1942 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 513 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_INPUTLST", 
              	         "T_COMMA N_INPUTVAR N_INPUTLST");
            	  }
#line 1951 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 519 "mipl.y" /* yacc.c:1646  */
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
#line 1969 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 534 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_INTCONST", "N_SIGN T_INTCONST");
			  if ((yyvsp[-1].num) == NO_SIGN)
			    (yyval.num) = (yyvsp[0].num);
			  else (yyval.num) = (yyvsp[-1].num) * (yyvsp[0].num);
               	  }
#line 1980 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 542 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_MULTOP", "N_MULTOP_LOGICAL");
			  (yyval.num) = LOGICAL_OP;
                	  }
#line 1989 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 547 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_MULTOP", "N_MULTOP_ARITH");
			  (yyval.num) = ARITHMETIC_OP;
              	  }
#line 1998 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 553 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_MULTOP_LOGICAL", "T_AND");
                	  }
#line 2006 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 558 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_MULTOP_ARITH", "T_MULT");
               	  }
#line 2014 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 562 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_MULTOP_ARITH", "T_DIV");
                	  }
#line 2022 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 567 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_MULTOPLST", "epsilon");
               	  }
#line 2030 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 571 "mipl.y" /* yacc.c:1646  */
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
#line 2050 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 588 "mipl.y" /* yacc.c:1646  */
    {
					  
				    if((yyvsp[0].typeInfo).type == INT)
						printf("\tderef\n\tiwrite\n");
					else
						printf("\tderef\n\tcwrite\n");
					  
					  
              	  prRule("N_OUTPUT", "N_EXPR");
			  if (((yyvsp[0].typeInfo).type != INT) && ((yyvsp[0].typeInfo).type != CHAR)) 
			  {
              	    semanticError(
			      ERR_OUTPUT_VAR_MUST_BE_INT_OR_CHAR);
             	    return(0);
               	  }
              	  }
#line 2071 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 606 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_OUTPUTLST", "epsilon");
               	  }
#line 2079 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 610 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_OUTPUTLST", 
			         "T_COMMA N_OUTPUT N_OUTPUTLST");
            	  }
#line 2088 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 616 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_PROCDEC", "N_PROCHDR N_BLOCK");
             	  }
#line 2096 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 621 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_PROCHDR",
			         "T_PROC T_IDENT T_SCOLON");
			  string lexeme = string((yyvsp[-1].text));
			  TYPE_INFO info = {PROCEDURE, NOT_APPLICABLE,
		                          NOT_APPLICABLE,
		                          NOT_APPLICABLE, countLabel, true};
			  prSymbolTableAddition(lexeme, info);
            	  bool success = scopeStack.top().addEntry
         	                    (SYMBOL_TABLE_ENTRY(lexeme, info));
				  countLabel++;
             	  if (! success) 
			  {
            	    semanticError(ERR_MULTIPLY_DEFINED_IDENT);
               	    return(0);
               	  }

			  beginScope();
                  }
#line 2120 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 642 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_PROCDECPART", "epsilon");
               	  }
#line 2128 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 646 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_PROCDECPART",
               	         "N_PROCDEC T_SCOLON N_PROCDECPART");
              	  }
#line 2137 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 652 "mipl.y" /* yacc.c:1646  */
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
#line 2157 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 669 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_PROCSTMT", "N_PROCIDENT");
			  if ((yyvsp[0].typeInfo).type != PROCEDURE) 
			  {
			    semanticError(ERR_PROCEDURE_VAR_MISMATCH);
			    return(0);
			  }
              	  }
#line 2170 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 679 "mipl.y" /* yacc.c:1646  */
    {
					  //Initial program lines, same every time
					  printf("init L.0, 20, L.1, L.2, L.3\nL.0:\n\t");
					  
             	  prRule("N_PROG",
                     "N_PROGLBL T_IDENT T_SCOLON N_BLOCK T_DOT");
			  string lexeme = string((yyvsp[-1].text));
			  TYPE_INFO info = {PROGRAM, NOT_APPLICABLE,
			                    NOT_APPLICABLE,
			                    NOT_APPLICABLE, NOT_APPLICABLE, true};
			  prSymbolTableAddition(lexeme, info);
               	  bool success = scopeStack.top().addEntry
                               (SYMBOL_TABLE_ENTRY(lexeme, info));
			  }
#line 2189 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 694 "mipl.y" /* yacc.c:1646  */
    { }
#line 2195 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 697 "mipl.y" /* yacc.c:1646  */
    {
            	  prRule("N_PROGLBL", "T_PROG");
			  beginScope();
               	  }
#line 2204 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 703 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_READ",
               "T_READ T_LPAREN N_INPUTVAR N_INPUTLST T_RPAREN");
			  }
#line 2213 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 709 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_RELOP", "T_LT");
                	  }
#line 2221 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 713 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_RELOP", "T_GT");
                	  }
#line 2229 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 717 "mipl.y" /* yacc.c:1646  */
    {
                   prRule("N_RELOP", "T_LE");
               	  }
#line 2237 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 721 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_RELOP", "T_GE");
                	  }
#line 2245 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 725 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_RELOP", "T_EQ");
                	  }
#line 2253 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 729 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_RELOP", "T_NE");
               	  }
#line 2261 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 734 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_SIGN", "epsilon");
			  (yyval.num) = NO_SIGN;
               	  }
#line 2270 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 739 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_SIGN", "T_PLUS");
			  (yyval.num) = POSITIVE;
               	  }
#line 2279 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 744 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_SIGN", "T_MINUS");
			  (yyval.num) = NEGATIVE;
               	  }
#line 2288 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 750 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_SIMPLE", "T_INT");
			  (yyval.typeInfo).type = INT; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 2300 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 758 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_SIMPLE", "T_CHAR");
			  (yyval.typeInfo).type = CHAR; 
               	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 2312 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 766 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_SIMPLE", "T_BOOL");
			  (yyval.typeInfo).type = BOOL; 
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 2324 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 775 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_SIMPLEEXPR", 
               	         "N_TERM N_ADDOPLST");
			  (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type; 
			  (yyval.typeInfo).isVar = (yyvsp[-1].typeInfo).isVar;
			  (yyval.typeInfo).offset = (yyvsp[-1].typeInfo).offset;
               	  (yyval.typeInfo).startIndex = (yyvsp[-1].typeInfo).startIndex;
                	  (yyval.typeInfo).endIndex = (yyvsp[-1].typeInfo).endIndex;
		    	  (yyval.typeInfo).baseType = (yyvsp[-1].typeInfo).baseType;
                	  }
#line 2339 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 787 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_ASSIGN");
               	  }
#line 2347 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 791 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_STMT", "N_PROCSTMT");
                	  }
#line 2355 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 795 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_READ");
                	  }
#line 2363 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 799 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_WRITE");
                	  }
#line 2371 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 803 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_CONDITION");
                	  }
#line 2379 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 807 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_WHILE");
                	  }
#line 2387 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 811 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_COMPOUND");
                	  }
#line 2395 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 816 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMTLST", "epsilon");
                	  }
#line 2403 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 820 "mipl.y" /* yacc.c:1646  */
    {
                   prRule("N_STMTLST", 
			          "T_SCOLON N_STMT N_STMTLST");
               	  }
#line 2412 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 826 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_STMTPART", "N_COMPOUND");
               	  }
#line 2420 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 831 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_TERM", "N_FACTOR N_MULTOPLST");
			  (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type; 
			  (yyval.typeInfo).isVar = (yyvsp[-1].typeInfo).isVar;
			  (yyval.typeInfo).offset = (yyvsp[-1].typeInfo).offset;
                	  (yyval.typeInfo).startIndex = (yyvsp[-1].typeInfo).startIndex;
                	  (yyval.typeInfo).endIndex = (yyvsp[-1].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[-1].typeInfo).baseType;
               	  }
#line 2434 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 842 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_TYPE", "N_SIMPLE");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
               	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		    	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
              	  }
#line 2446 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 850 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_TYPE", "N_ARRAY");
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type; 
               	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		     	  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                	  }
#line 2458 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 859 "mipl.y" /* yacc.c:1646  */
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
				
				bool success;
				if((yyvsp[0].typeInfo).type == ARRAY) {
					count++;
					(yyvsp[0].typeInfo).isVar = true;
					(yyvsp[0].typeInfo).offset = count;
					success = scopeStack.top().addEntry
                            (SYMBOL_TABLE_ENTRY(varName, (yyvsp[0].typeInfo)));
					count+=((yyvsp[0].typeInfo).endIndex - (yyvsp[0].typeInfo).startIndex);
				} else {
					(yyvsp[0].typeInfo).isVar = true;
					(yyvsp[0].typeInfo).offset = count;
					count++;
					success = scopeStack.top().addEntry
                            (SYMBOL_TABLE_ENTRY(varName, (yyvsp[0].typeInfo)));
				}
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
#line 2511 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 909 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_VARDECLST", "epsilon");
             	  }
#line 2519 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 913 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARDECLST", 
              	         "N_VARDEC T_SCOLON N_VARDECLST");
            	  }
#line 2528 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 919 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_VARDECPART", "epsilon");
               	  }
#line 2536 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 923 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARDECPART",
                        "T_VAR N_VARDEC T_SCOLON N_VARDECLST");
               	  }
#line 2545 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 929 "mipl.y" /* yacc.c:1646  */
    {
					int offset = (yyvsp[0].typeInfo).offset;
					printf("\tla %d, %d\n", offset, 0);
					  
               	  prRule("N_VARIABLE", "N_ENTIREVAR");
			  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
			  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
			  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
			  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
			  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
               	  }
#line 2562 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 942 "mipl.y" /* yacc.c:1646  */
    {
					int offset = (yyvsp[0].typeInfo).offset;
					printf("\tla %d, %d\n", offset, 0);
              	    prRule("N_VARIABLE", "N_IDXVAR");
			  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
			  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
			  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
			  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
			  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
			  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
               	  }
#line 2578 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 955 "mipl.y" /* yacc.c:1646  */
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
			  
			  (yyval.typeInfo).offset = findOffsetInAnyScope(ident);
			  (yyval.typeInfo).isVar = true;
			  (yyval.typeInfo).type = typeInfo.type;
			  (yyval.typeInfo).startIndex = typeInfo.startIndex;
			  (yyval.typeInfo).endIndex = typeInfo.endIndex;
			  (yyval.typeInfo).baseType = typeInfo.baseType;
			  }
#line 2606 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 980 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_WHILE", 
                	         "T_WHILE N_EXPR T_DO N_STMT");
			  if ((yyvsp[0].typeInfo).type != BOOL) 
			  {
			    semanticError(ERR_EXPR_MUST_BE_BOOL);
			    return(0);
			  }
               	  }
#line 2620 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 990 "mipl.y" /* yacc.c:1646  */
    { }
#line 2626 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 993 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_WRITE",
               "T_WRITE T_LPAREN N_OUTPUT N_OUTPUTLST T_RPAREN");
               	  }
#line 2635 "mipl.tab.c" /* yacc.c:1646  */
    break;


#line 2639 "mipl.tab.c" /* yacc.c:1646  */
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
#line 998 "mipl.y" /* yacc.c:1906  */


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

int findOffsetInAnyScope(const string theName) 
{
  int offset = 0;
  if (scopeStack.empty( )) return(offset);
  offset = scopeStack.top().findOffset(theName);
  if (offset != 0)
    return(offset);
  else { // check in "next higher" scope
	   SYMBOL_TABLE symbolTable = scopeStack.top( );
	   scopeStack.pop( );
	   offset = findOffsetInAnyScope(theName);
	   scopeStack.push(symbolTable); // restore the stack
	   return(offset);
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


