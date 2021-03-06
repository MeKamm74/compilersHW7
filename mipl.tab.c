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

#define LOGICAL_OP    103
#define OR_OP		  104
#define AND_OP		  105

#define ARITHMETIC_OP 102
#define ADD_OP		  101
#define SUB_OP        100
#define MULT_OP	      99
#define DIV_OP        98

#define GT_OP         106
#define GE_OP         107
#define LT_OP         108
#define LE_OP         109
#define EQ_OP         110
#define NE_OP         111

#define POSITIVE		1
#define NEGATIVE		-1
#define NO_SIGN		0

int lineNum = 1;                   // source line number
int numTabs = 0;
int numVars = 0;
int level = 0;
int count = 20;
int countLabel = 3;
bool firstTime = true;

stack<int> ifElseLabels;

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



#line 178 "mipl.tab.c" /* yacc.c:339  */

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
#line 121 "mipl.y" /* yacc.c:355  */

  char* text;
  char ch;
  int num;
  bool boolean;
  TYPE_INFO typeInfo;

#line 273 "mipl.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 288 "mipl.tab.c" /* yacc.c:358  */

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
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

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
       0,   174,   174,   182,   187,   193,   200,   206,   214,   217,
     234,   245,   249,   266,   287,   290,   296,   290,   311,   322,
     334,   338,   334,   346,   356,   346,   364,   368,   368,   382,
     384,   394,   410,   421,   432,   442,   460,   475,   485,   496,
     513,   517,   528,   532,   540,   544,   550,   560,   564,   583,
     586,   592,   615,   624,   629,   635,   642,   648,   656,   659,
     676,   694,   697,   697,   705,   705,   716,   739,   743,   750,
     768,   780,   779,   797,   803,   809,   815,   821,   827,   833,
     839,   847,   851,   857,   864,   872,   880,   889,   901,   905,
     909,   913,   917,   921,   925,   931,   934,   938,   934,   945,
     950,   961,   970,   979,  1031,  1034,  1034,  1044,  1047,  1047,
    1056,  1067,  1079,  1106,  1105,  1125,  1129,  1129
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
  "N_ADDOP_ARITH", "N_ADDOPLST", "N_ARRAY", "N_ARRAYSYMBOL", "N_ARRAYVAR",
  "N_ASSIGN", "N_ASSIGNCHAR", "N_BLOCK", "$@1", "$@2", "N_BOOLCONST",
  "N_COMPOUND", "$@3", "$@4", "N_CONDITION", "$@5", "$@6", "N_IF",
  "N_ELSE", "$@7", "N_CONST", "N_ENTIREVAR", "N_EXPR", "N_FACTOR", "N_NOT",
  "N_IDENT", "N_IDENTLST", "N_COMMA", "N_IDX", "N_IDXRANGE", "N_DOTDOT",
  "N_IDXVAR", "N_INPUTLST", "N_INPUTVAR", "N_INTCONST", "N_MULTOP",
  "N_MULTOP_LOGICAL", "N_MULTOP_ARITH", "N_MULTOPLST", "N_OUTPUT",
  "N_OUTPUTLST", "$@8", "N_PROCDEC", "$@9", "N_PROCHDR", "N_PROCDECPART",
  "N_PROCIDENT", "N_PROCSTMT", "N_PROG", "$@10", "N_PROGLBL", "N_READ",
  "N_RELOP", "N_SIGN", "N_SIMPLE", "N_SIMPLEEXPR", "N_STMT", "N_STMTLST",
  "$@11", "$@12", "N_STMTPART", "N_TERM", "N_TYPE", "N_VARDEC",
  "N_VARDECLST", "$@13", "N_VARDECPART", "$@14", "N_VARIABLE",
  "N_VARIDENT", "N_WHILE", "$@15", "N_WHILESYMBOL", "N_WRITE", "$@16", YY_NULLPTR
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

#define YYPACT_NINF -136

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define YYTABLE_NINF -113

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,  -136,    20,  -136,    -9,  -136,    21,  -136,     4,  -136,
      32,  -136,    16,  -136,    12,  -136,    58,    50,    34,    54,
    -136,  -136,  -136,    57,    16,    37,    59,    12,     4,    45,
      -2,    58,  -136,    16,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,    51,  -136,  -136,  -136,    60,
       5,    56,    37,    -8,  -136,    71,  -136,    72,    61,  -136,
    -136,  -136,     0,    62,  -136,  -136,  -136,  -136,  -136,    64,
    -136,  -136,     0,  -136,  -136,  -136,    67,    63,  -136,    43,
    -136,    47,  -136,     0,     0,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,     6,     0,  -136,   -14,    41,     1,    70,  -136,
       0,  -136,  -136,    56,    48,  -136,  -136,    73,  -136,     0,
      65,    83,    40,  -136,  -136,  -136,     0,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,     0,  -136,
    -136,  -136,     0,  -136,  -136,  -136,  -136,    66,  -136,    68,
    -136,    18,    47,    85,  -136,    84,  -136,  -136,     5,     6,
    -136,     1,     5,  -136,     5,  -136,    73,  -136,  -136,    88,
    -136,  -136,  -136,  -136,  -136,  -136,     0,  -136,    44,    70,
      84,  -136,  -136,  -136,  -136,     5,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    73,     0,     2,     0,     1,     0,    71,   107,   108,
       0,    15,     0,    72,    67,    41,    42,     0,     0,     0,
      64,    16,    44,     0,     0,   104,     0,    67,   107,     0,
       0,    42,   109,     0,    66,    68,    65,    20,    99,    17,
      11,    86,    85,    84,   102,     0,   101,   103,    43,     0,
       0,    81,   104,    69,    26,     0,   115,     0,     0,    88,
      94,    92,    81,   110,   111,    70,    89,    90,    21,     0,
      33,    93,    81,    91,    82,    83,     0,     0,    45,     0,
     106,     0,   116,    81,    81,    31,    19,    40,    18,    32,
      37,    23,    58,    81,    30,     0,    34,     8,    95,    14,
      81,   113,    47,    81,     0,    52,   112,    49,    51,    81,
       0,     0,     0,    56,    55,    57,    81,    53,    54,   100,
      39,    36,    75,    77,    80,    79,    76,    78,    81,     6,
       7,     5,    81,     3,     4,    87,    96,     0,    13,     0,
      46,     0,     0,     0,    60,    61,    48,    38,     0,    58,
      35,     8,     0,    22,     0,    10,    49,    74,    62,     0,
      24,    59,     9,    97,   114,    50,    81,   117,    29,    95,
      61,    27,    25,    98,    63,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,  -136,  -136,  -136,   -56,  -136,  -136,  -136,  -136,
    -136,    69,  -136,  -136,  -136,    74,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,   -57,   -83,  -136,    75,
      76,  -136,    -5,  -136,  -136,  -136,   -62,   -42,   -50,  -136,
    -136,  -136,   -48,   -64,   -66,  -136,  -136,  -136,  -136,    78,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,   -49,   -35,   -20,
    -135,   -60,  -136,  -136,  -136,   -22,  -136,    79,    77,  -136,
    -136,  -136,   -81,  -136,  -136,  -136,  -136,  -136,  -136
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   132,   133,   134,   135,    44,    45,    58,    59,
     100,    10,    14,    29,    89,    60,    50,    98,    61,   112,
     168,    62,   172,   175,    90,    63,   144,    92,    93,    16,
      23,    24,    76,    77,   103,    64,   143,   107,    94,   116,
     117,   118,   119,   145,   159,   166,    19,    28,    20,    21,
      65,    66,     3,     8,     4,    67,   128,    95,    46,    96,
      68,   137,   152,   169,    39,    97,    47,    17,    32,    33,
      11,    12,    69,    70,    71,   139,    72,    73,   109
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,    78,    79,    84,  -112,    91,    74,   129,    75,   130,
     120,   113,  -112,   160,   121,   101,     1,   163,   106,   164,
       5,   105,    40,     6,    41,    42,   110,   111,    85,   114,
      37,    86,    43,   149,     7,   115,    87,    53,    54,   131,
     176,    13,    88,   138,    41,    42,    55,     9,    15,    56,
      57,    18,    43,    78,    79,   122,   123,   124,   125,   126,
     127,   108,    74,    25,    75,    22,    26,    27,    30,  -105,
      37,    51,    34,    52,    81,    82,    99,   102,   105,   106,
     142,    83,   -12,   136,   104,   141,   146,   147,   148,   157,
     154,   158,   167,   171,   165,   162,   153,    36,   140,    31,
     156,   161,   170,    38,   174,    35,   155,    48,   150,   173,
     151,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80
};

static const yytype_int16 yycheck[] =
{
      81,    51,    51,     3,    12,    62,     6,     6,     8,     8,
      93,     5,    20,   148,    95,    72,    40,   152,    32,   154,
       0,    35,    24,    32,    26,    27,    83,    84,    28,    23,
      25,    31,    34,   116,    13,    29,    36,    32,    33,    38,
     175,     9,    42,   100,    26,    27,    41,    43,    32,    44,
      45,    39,    34,   103,   103,    14,    15,    16,    17,    18,
      19,   142,     6,    13,     8,     7,    32,    13,    11,    32,
      25,    20,    13,    13,     3,     3,    12,    10,    35,    32,
       7,    20,    20,    13,    21,    37,    21,     4,    48,     4,
      22,     7,     4,    49,   156,   151,    30,    28,   103,    24,
     142,   149,   166,    29,   170,    27,   141,    31,   128,   169,
     132,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    51,   102,   104,     0,    32,    13,   103,    43,
      61,   120,   121,     9,    62,    32,    79,   117,    39,    96,
      98,    99,     7,    80,    81,    13,    32,    13,    97,    63,
      11,    79,   118,   119,    13,    99,    61,    25,    65,   114,
      24,    26,    27,    34,    56,    57,   108,   116,    80,   117,
      66,    20,    13,    32,    33,    41,    44,    45,    58,    59,
      65,    68,    71,    75,    85,   100,   101,   105,   110,   122,
     123,   124,   126,   127,     6,     8,    82,    83,    88,   107,
     118,     3,     3,    20,     3,    28,    31,    36,    42,    64,
      74,    76,    77,    78,    88,   107,   109,   115,    67,    12,
      60,    76,    10,    84,    21,    35,    32,    87,   122,   128,
      76,    76,    69,     5,    23,    29,    89,    90,    91,    92,
      77,   122,    14,    15,    16,    17,    18,    19,   106,     6,
       8,    38,    52,    53,    54,    55,    13,   111,    76,   125,
      82,    37,     7,    86,    76,    93,    21,     4,    48,    77,
     109,   115,   112,    30,    22,   108,    87,     4,     7,    94,
     110,    92,    55,   110,   110,    86,    95,     4,    70,   113,
      93,    49,    72,   111,    94,    73,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    54,    54,    55,    55,
      56,    57,    58,    59,    60,    62,    63,    61,    64,    64,
      66,    67,    65,    69,    70,    68,    71,    73,    72,    72,
      74,    74,    74,    75,    76,    76,    77,    77,    77,    77,
      78,    79,    80,    80,    81,    82,    83,    84,    85,    86,
      86,    87,    88,    89,    89,    90,    91,    91,    92,    92,
      93,    94,    95,    94,    97,    96,    98,    99,    99,   100,
     101,   103,   102,   104,   105,   106,   106,   106,   106,   106,
     106,   107,   107,   107,   108,   108,   108,   109,   110,   110,
     110,   110,   110,   110,   110,   111,   112,   113,   111,   114,
     115,   116,   116,   117,   118,   119,   118,   120,   121,   120,
     122,   122,   123,   125,   124,   126,   128,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     0,     3,
       6,     1,     1,     3,     1,     0,     0,     5,     1,     1,
       0,     0,     6,     0,     0,     7,     1,     0,     3,     0,
       1,     1,     1,     1,     1,     3,     2,     1,     3,     2,
       1,     1,     0,     3,     1,     1,     3,     1,     4,     0,
       3,     1,     2,     1,     1,     1,     1,     1,     0,     3,
       1,     0,     0,     4,     0,     3,     3,     0,     3,     1,
       1,     0,     6,     1,     5,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     0,     5,     1,
       2,     1,     1,     4,     0,     0,     4,     0,     0,     5,
       1,     1,     1,     0,     5,     1,     0,     6
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
#line 175 "mipl.y" /* yacc.c:1646  */
    {
                    printf("print()\n");
            			  prRule("N_START", "N_PROG");
            			  //printf("\n---- Completed parsing ----\n\n");
            			  return 0;
                  }
#line 1508 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 183 "mipl.y" /* yacc.c:1646  */
    {
            			  prRule("N_ADDOP", "N_ADDOP_LOGICAL");
            			  (yyval.num) = (yyvsp[0].num);
                  }
#line 1517 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 188 "mipl.y" /* yacc.c:1646  */
    {
            			  prRule("N_ADDOP", "N_ADDOP_ARITH");
            			  (yyval.num) = (yyvsp[0].num);
                  }
#line 1526 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 194 "mipl.y" /* yacc.c:1646  */
    {
          printf("or ");
				  (yyval.num) = OR_OP;
			    prRule("N_ADDOP_LOGICAL", "T_OR");
			  }
#line 1536 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 201 "mipl.y" /* yacc.c:1646  */
    {
          printf("+ ");
				  (yyval.num) = ADD_OP;
			  prRule("N_ADDOP_ARITH", "T_PLUS");
			  }
#line 1546 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 207 "mipl.y" /* yacc.c:1646  */
    {
          printf("- ");
				  (yyval.num) = SUB_OP;
			  prRule("N_ADDOP_ARITH", "T_MINUS");
			  }
#line 1556 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 214 "mipl.y" /* yacc.c:1646  */
    {
        			    prRule("N_ADDOPLST", "epsilon");
        			  }
#line 1564 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 218 "mipl.y" /* yacc.c:1646  */
    {
        				  prRule("N_ADDOPLST",
        						 "N_ADDOP N_TERM N_ADDOPLST");
        				  if (((yyvsp[-2].num) > LOGICAL_OP) && ((yyvsp[-1].typeInfo).type != BOOL))
        				  {
        					semanticError(ERR_EXPR_MUST_BE_BOOL);
        					return(0);
        				  }
        				  else if (((yyvsp[-2].num) < ARITHMETIC_OP) &&
        						  ((yyvsp[-1].typeInfo).type != INT))
        				  {
        					semanticError(ERR_EXPR_MUST_BE_INT);
        					return(0);
        				  }
        			  }
#line 1584 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 235 "mipl.y" /* yacc.c:1646  */
    {
                  // printf(" = [0 for i in range()]");
			            prRule("N_ARRAY",
            	    "T_ARRAY T_LBRACK N_IDXRANGE T_RBRACK T_OF N_SIMPLE");
			            (yyval.typeInfo).type = ARRAY;
            	    (yyval.typeInfo).startIndex = (yyvsp[-3].typeInfo).startIndex;
			            (yyval.typeInfo).endIndex = (yyvsp[-3].typeInfo).endIndex;
			            (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).type;
                }
#line 1598 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 245 "mipl.y" /* yacc.c:1646  */
    {
                  printf("[0 for i in range(");
                }
#line 1606 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 250 "mipl.y" /* yacc.c:1646  */
    {
                    printf("[");
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
#line 1626 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 267 "mipl.y" /* yacc.c:1646  */
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
#line 1650 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 287 "mipl.y" /* yacc.c:1646  */
    {
                  printf("= ");
                }
#line 1658 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 290 "mipl.y" /* yacc.c:1646  */
    {
					//print bss + (20+numVars)
					// if(firstTime) {
					// 	firstTime = false;
				  //   }
					// level++;
				  }
#line 1670 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 296 "mipl.y" /* yacc.c:1646  */
    {
					//PRINT PROCEDURE OAL CODE, ELSEWHERE
				  //   level--;
					// if(level == 0) {
				  //   }
				  }
#line 1681 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 303 "mipl.y" /* yacc.c:1646  */
    {
					  if(level != 0) {
					  }
                	  prRule("N_BLOCK",
                         "N_VARDECPART N_PROCDECPART N_STMTPART");
                	  endScope();
                  }
#line 1693 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 312 "mipl.y" /* yacc.c:1646  */
    {
                    printf("True");
        					  prRule("N_BOOLCONST", "T_TRUE");
        					  (yyval.typeInfo).offset = 1;
        					  (yyval.typeInfo).isVar = false;
        					  (yyval.typeInfo).type = BOOL;
        					  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
        					  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
        					  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1708 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 323 "mipl.y" /* yacc.c:1646  */
    {
                    printf("False ");
        					  (yyval.typeInfo).offset = 0;
        					  (yyval.typeInfo).isVar = false;
        					  prRule("N_BOOLCONST", "T_FALSE");
        					  (yyval.typeInfo).type = BOOL;
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
					          (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1723 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 334 "mipl.y" /* yacc.c:1646  */
    {
                  for(int i=0; i<numTabs; i++) {
                    printf("\t");
                  }
                }
#line 1733 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 338 "mipl.y" /* yacc.c:1646  */
    {

                  printf("\n");
                }
#line 1742 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 341 "mipl.y" /* yacc.c:1646  */
    {
        					prRule("N_COMPOUND",
        					       "T_BEGIN N_STMT N_STMTLST T_END");
                }
#line 1751 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 346 "mipl.y" /* yacc.c:1646  */
    {
        					printf(":\n");
                  numTabs++;
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
        				  if ((yyvsp[0].typeInfo).type != BOOL)
        				  {
          					semanticError(ERR_EXPR_MUST_BE_BOOL);
          					return(0);
        				  }
        				}
#line 1767 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 356 "mipl.y" /* yacc.c:1646  */
    {
                  numTabs--;
                  printf("\n");
                  for(int i=0; i<numTabs; i++)
                    printf("\t");

                }
#line 1779 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 362 "mipl.y" /* yacc.c:1646  */
    {}
#line 1785 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 364 "mipl.y" /* yacc.c:1646  */
    {
                  printf("if ");
                }
#line 1793 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 368 "mipl.y" /* yacc.c:1646  */
    {
                  printf("else:\n");
                  numTabs++;
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
                }
#line 1804 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 373 "mipl.y" /* yacc.c:1646  */
    {
                  numTabs--;
                  printf("\n");
                  for(int i=0; i<numTabs; i++)
                    printf("\t");

                  prRule("N_CONDITION",
                    "T_IF N_EXPR T_THEN N_STMT T_ELSE N_STMT");
                }
#line 1818 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 382 "mipl.y" /* yacc.c:1646  */
    {}
#line 1824 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 385 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_CONST", "N_INTCONST");
        					  (yyval.typeInfo).offset = int((yyvsp[0].num));
        					  (yyval.typeInfo).isVar = false;
        					  (yyval.typeInfo).type = INT;
        					  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
        					  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
        					  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1838 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 395 "mipl.y" /* yacc.c:1646  */
    {
                    if((yyvsp[0].ch) == '\\') {
                      (yyvsp[0].ch) = '\n';
                      printf("'\\n'");
                    } else {
                      printf("'%c' ", (yyvsp[0].ch));
                    }
        					  (yyval.typeInfo).offset = int((yyvsp[0].ch));
        					  (yyval.typeInfo).isVar = false;
                    prRule("N_CONST", "T_CHARCONST");
        					  (yyval.typeInfo).type = CHAR;
                    (yyval.typeInfo).startIndex = NOT_APPLICABLE;
        					  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
        					  (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	  }
#line 1858 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 411 "mipl.y" /* yacc.c:1646  */
    {
        					  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
        					  (yyval.typeInfo).isVar = false;
        					  prRule("N_CONST", "N_BOOLCONST");
        					  (yyval.typeInfo).type = BOOL;
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
        					  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
        					  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 1872 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 422 "mipl.y" /* yacc.c:1646  */
    {
        					  prRule("N_ENTIREVAR", "N_VARIDENT");
        					  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
        					  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
        					  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
        					  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
        					  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                  }
#line 1886 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 433 "mipl.y" /* yacc.c:1646  */
    {
        					  prRule("N_EXPR", "N_SIMPLEEXPR");
        					  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
        					  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
        					  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
        					  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
        					  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
        					  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                  }
#line 1900 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 443 "mipl.y" /* yacc.c:1646  */
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
#line 1921 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 461 "mipl.y" /* yacc.c:1646  */
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
#line 1940 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 476 "mipl.y" /* yacc.c:1646  */
    {
					  prRule("N_FACTOR", "N_CONST");
					  (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
					  (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
					  (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
					  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
					  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
					  (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
				  }
#line 1954 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 486 "mipl.y" /* yacc.c:1646  */
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
#line 1969 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 497 "mipl.y" /* yacc.c:1646  */
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
#line 1988 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 513 "mipl.y" /* yacc.c:1646  */
    {
                  printf("not ");
                }
#line 1996 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 518 "mipl.y" /* yacc.c:1646  */
    {
                  // for(int i=0; i<numTabs; i++)
                  //   printf("\t");

                  printf("%s ", (yyvsp[0].text));
        				  prRule("N_IDENT", "T_IDENT");
        				  (yyval.text) = (yyvsp[0].text);
              	}
#line 2009 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 528 "mipl.y" /* yacc.c:1646  */
    {
                    printf("= ");
					  prRule("N_IDENTLST", "epsilon");
               	  }
#line 2018 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 533 "mipl.y" /* yacc.c:1646  */
    {
					  prRule("N_IDENTLST",
                	         "T_COMMA N_IDENT N_IDENTLST");
					  string varName = string((yyvsp[-1].text));
					  variableNames.push_front(varName);
              	  }
#line 2029 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 540 "mipl.y" /* yacc.c:1646  */
    {
                  printf("= ");
                }
#line 2037 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 545 "mipl.y" /* yacc.c:1646  */
    {
        					  prRule("N_IDX", "N_INTCONST");
        					  (yyval.num) = (yyvsp[0].num);
               	}
#line 2046 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 551 "mipl.y" /* yacc.c:1646  */
    {
                  printf("+1)]");
               	  prRule("N_IDXRANGE", "N_IDX T_DOTDOT N_IDX");
		     	        (yyval.typeInfo).type = INDEX_RANGE;
                	(yyval.typeInfo).startIndex = (yyvsp[-2].num);
               	  (yyval.typeInfo).endIndex = (yyvsp[0].num);
		    	        (yyval.typeInfo).baseType = NOT_APPLICABLE;
               	}
#line 2059 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 560 "mipl.y" /* yacc.c:1646  */
    {
                  printf(", ");
                }
#line 2067 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 565 "mipl.y" /* yacc.c:1646  */
    {
                  printf("- %d]", (yyvsp[-3].typeInfo).startIndex);
      					  prRule("N_IDXVAR",
      							 "N_ARRAYVAR T_LBRACK N_EXPR T_RBRACK");
      					  if ((yyvsp[-1].typeInfo).type != INT)
      					  {
        						semanticError(ERR_INDEX_EXPR_MUST_BE_INT);
        						return(0);
      					  }
      					  (yyval.typeInfo).isVar = (yyvsp[-3].typeInfo).isVar;
      					  (yyval.typeInfo).offset = (yyvsp[-3].typeInfo).offset - (yyvsp[-3].typeInfo).startIndex - 1;
      					  (yyval.typeInfo).type = (yyvsp[-3].typeInfo).baseType;
      					  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
      					  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
      					  (yyval.typeInfo).baseType = NOT_APPLICABLE;
            	  }
#line 2088 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 583 "mipl.y" /* yacc.c:1646  */
    {
           	      prRule("N_INPUTLST", "epsilon");
             	  }
#line 2096 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 587 "mipl.y" /* yacc.c:1646  */
    {
             	    prRule("N_INPUTLST",
              	         "T_COMMA N_INPUTVAR N_INPUTLST");
            	  }
#line 2105 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 593 "mipl.y" /* yacc.c:1646  */
    {
                  if((yyvsp[0].typeInfo).type == INT)
					          printf(" = int(raw_input())\n");
                  else
                    printf(" = raw_input()\n");
                  
                  for(int i=0; i<numTabs; i++)
                    printf("\t");

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
#line 2131 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 616 "mipl.y" /* yacc.c:1646  */
    {
                    printf("%d ", (yyvsp[0].num));
               	    prRule("N_INTCONST", "N_SIGN T_INTCONST");
          			    if ((yyvsp[-1].num) == NO_SIGN)
          			    (yyval.num) = (yyvsp[0].num);
          			    else (yyval.num) = (yyvsp[-1].num) * (yyvsp[0].num);
               	  }
#line 2143 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 625 "mipl.y" /* yacc.c:1646  */
    {
             	    prRule("N_MULTOP", "N_MULTOP_LOGICAL");
			            (yyval.num) = (yyvsp[0].num);
                }
#line 2152 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 630 "mipl.y" /* yacc.c:1646  */
    {
             	    prRule("N_MULTOP", "N_MULTOP_ARITH");
			            (yyval.num) = (yyvsp[0].num);
              	}
#line 2161 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 636 "mipl.y" /* yacc.c:1646  */
    {
                    printf("and ");
        					  (yyval.num) = AND_OP;
        					  prRule("N_MULTOP_LOGICAL", "T_AND");
                  }
#line 2171 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 643 "mipl.y" /* yacc.c:1646  */
    {
                    printf("* ");
        					  (yyval.num) = MULT_OP;
        					  prRule("N_MULTOP_ARITH", "T_MULT");
               	  }
#line 2181 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 649 "mipl.y" /* yacc.c:1646  */
    {
                    printf("/");
        					  (yyval.num) = DIV_OP;
        					  prRule("N_MULTOP_ARITH", "T_DIV");
                  }
#line 2191 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 656 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_MULTOPLST", "epsilon");
               	}
#line 2199 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 660 "mipl.y" /* yacc.c:1646  */
    {
      					  prRule("N_MULTOPLST",
      							 "N_MULTOP N_FACTOR N_MULTOPLST");
      					  if (((yyvsp[-2].num) > LOGICAL_OP) && ((yyvsp[-1].typeInfo).type != BOOL))
      					  {
      						semanticError(ERR_EXPR_MUST_BE_BOOL);
      						return(0);
      					  }
      					  else if (((yyvsp[-2].num) < ARITHMETIC_OP) &&
      							   ((yyvsp[-1].typeInfo).type != INT))
      					  {
      						semanticError(ERR_EXPR_MUST_BE_INT);
      						return(0);
      					  }
             	  }
#line 2219 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 677 "mipl.y" /* yacc.c:1646  */
    {
                  // if(char($1.offset) == '\\') {
                  //   printf("\n");
                  //   for(int i=0; i<numTabs; i++) {
                  //     printf("\t");
                  //   }
                  //   printf("print ");
                  // }
              	  prRule("N_OUTPUT", "N_EXPR");
          			  if (((yyvsp[0].typeInfo).type != INT) && ((yyvsp[0].typeInfo).type != CHAR))
          			  {
              	    semanticError(ERR_OUTPUT_VAR_MUST_BE_INT_OR_CHAR);
             	      return(0);
               	  }
              	}
#line 2239 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 694 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_OUTPUTLST", "epsilon");
               	  }
#line 2247 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 697 "mipl.y" /* yacc.c:1646  */
    {
                  printf(", ");
                }
#line 2255 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 700 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_OUTPUTLST",
			         "T_COMMA N_OUTPUT N_OUTPUTLST");
            	  }
#line 2264 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 705 "mipl.y" /* yacc.c:1646  */
    {
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
      					  printf("def %s():\n", (yyvsp[0].text));
                  numTabs++;
      				  }
#line 2275 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 710 "mipl.y" /* yacc.c:1646  */
    {
      					  // $$ = $1;
                  numTabs--;
      					  prRule("N_PROCDEC", "N_PROCHDR N_BLOCK");
             	  }
#line 2285 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 717 "mipl.y" /* yacc.c:1646  */
    {
					        (yyval.text) = (yyvsp[-1].text);

                	prRule("N_PROCHDR",
			                   "T_PROC T_IDENT T_SCOLON");
      					  string lexeme = string((yyvsp[-1].text));
      					  TYPE_INFO info = {PROCEDURE, NOT_APPLICABLE,
      		                          NOT_APPLICABLE,
      		                          NOT_APPLICABLE, countLabel, true};
      					  prSymbolTableAddition(lexeme, info);
      					  bool success = scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(lexeme, info));
      					  countLabel++;
      					  if (! success)
      					  {
        						semanticError(ERR_MULTIPLY_DEFINED_IDENT);
        						return(0);
      					  }

      					  beginScope();
                }
#line 2310 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 739 "mipl.y" /* yacc.c:1646  */
    {
					(yyval.num) = 0;
					prRule("N_PROCDECPART", "epsilon");
               	  }
#line 2319 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 744 "mipl.y" /* yacc.c:1646  */
    {

					prRule("N_PROCDECPART",
               	           "N_PROCDEC T_SCOLON N_PROCDECPART");
              	  }
#line 2329 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 751 "mipl.y" /* yacc.c:1646  */
    {
                    printf("%s", (yyvsp[0].text));
          					prRule("N_PROCIDENT", "T_IDENT");
          					string ident = string((yyvsp[0].text));
                    TYPE_INFO typeInfo = findEntryInAnyScope(ident);
          					if (typeInfo.type == UNDEFINED)
          					{
                	    semanticError(ERR_MULTIPLY_DEFINED_IDENT);
                	    return(0);
          					}
          					(yyval.typeInfo).offset = typeInfo.offset;
        				    (yyval.typeInfo).type = typeInfo.type;
        				    (yyval.typeInfo).startIndex = typeInfo.startIndex;
        				    (yyval.typeInfo).endIndex = typeInfo.endIndex;
        				    (yyval.typeInfo).baseType = typeInfo.baseType;
               	  }
#line 2350 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 769 "mipl.y" /* yacc.c:1646  */
    {
        					  printf("()");
        					  prRule("N_PROCSTMT", "N_PROCIDENT");
        					  if ((yyvsp[0].typeInfo).type != PROCEDURE)
        					  {
        						semanticError(ERR_PROCEDURE_VAR_MISMATCH);
        						return(0);
        					  }
              	}
#line 2364 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 780 "mipl.y" /* yacc.c:1646  */
    {
                  printf("from __future__ import print_function\n");

             	  prRule("N_PROG",
                     "N_PROGLBL T_IDENT T_SCOLON N_BLOCK T_DOT");
			  string lexeme = string((yyvsp[-1].text));
			  TYPE_INFO info = {PROGRAM, NOT_APPLICABLE,
			                    NOT_APPLICABLE,
			                    NOT_APPLICABLE, countLabel, true};
					  countLabel++;
			  prSymbolTableAddition(lexeme, info);
               	  bool success = scopeStack.top().addEntry
                               (SYMBOL_TABLE_ENTRY(lexeme, info));
			  }
#line 2383 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 795 "mipl.y" /* yacc.c:1646  */
    { }
#line 2389 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 798 "mipl.y" /* yacc.c:1646  */
    {
            	  prRule("N_PROGLBL", "T_PROG");
			  beginScope();
               	  }
#line 2398 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 804 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_READ",
               "T_READ T_LPAREN N_INPUTVAR N_INPUTLST T_RPAREN");
			  }
#line 2407 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 810 "mipl.y" /* yacc.c:1646  */
    {
                    printf("< ");
					          (yyval.num) = LT_OP;
                	  prRule("N_RELOP", "T_LT");
                  }
#line 2417 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 816 "mipl.y" /* yacc.c:1646  */
    {
                    printf("> ");
					          (yyval.num) = GT_OP;
                	  prRule("N_RELOP", "T_GT");
                  }
#line 2427 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 822 "mipl.y" /* yacc.c:1646  */
    {
                    printf("<= ");
        					  (yyval.num) = LE_OP;
        					  prRule("N_RELOP", "T_LE");
               	  }
#line 2437 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 828 "mipl.y" /* yacc.c:1646  */
    {
                    printf(">= ");
					          (yyval.num) = GE_OP;
               	    prRule("N_RELOP", "T_GE");
                  }
#line 2447 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 834 "mipl.y" /* yacc.c:1646  */
    {
                    printf("== ");
					          (yyval.num) = EQ_OP;
                	  prRule("N_RELOP", "T_EQ");
                  }
#line 2457 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 840 "mipl.y" /* yacc.c:1646  */
    {
                    printf("!= ");
					          (yyval.num) = NE_OP;
                	  prRule("N_RELOP", "T_NE");
               	  }
#line 2467 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 847 "mipl.y" /* yacc.c:1646  */
    {
               	    prRule("N_SIGN", "epsilon");
					(yyval.num) = NO_SIGN;
               	  }
#line 2476 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 852 "mipl.y" /* yacc.c:1646  */
    {
                    printf("+");
					prRule("N_SIGN", "T_PLUS");
					(yyval.num) = POSITIVE;
               	  }
#line 2486 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 858 "mipl.y" /* yacc.c:1646  */
    {
                    printf("-");
					prRule("N_SIGN", "T_MINUS");
					(yyval.num) = NEGATIVE;
               	  }
#line 2496 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 865 "mipl.y" /* yacc.c:1646  */
    {
					prRule("N_SIMPLE", "T_INT");
					(yyval.typeInfo).type = INT;
                	(yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	(yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	    (yyval.typeInfo).baseType = NOT_APPLICABLE;
                  }
#line 2508 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 873 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_SIMPLE", "T_CHAR");
			  (yyval.typeInfo).type = CHAR;
               	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		     	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 2520 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 881 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_SIMPLE", "T_BOOL");
			  (yyval.typeInfo).type = BOOL;
                	  (yyval.typeInfo).startIndex = NOT_APPLICABLE;
                	  (yyval.typeInfo).endIndex = NOT_APPLICABLE;
		    	  (yyval.typeInfo).baseType = NOT_APPLICABLE;
                	  }
#line 2532 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 890 "mipl.y" /* yacc.c:1646  */
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
#line 2547 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 902 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_ASSIGN");
               	  }
#line 2555 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 906 "mipl.y" /* yacc.c:1646  */
    {
               	  prRule("N_STMT", "N_PROCSTMT");
                	  }
#line 2563 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 910 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_READ");
                	  }
#line 2571 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 914 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_WRITE");
                	  }
#line 2579 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 918 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_CONDITION");
                	  }
#line 2587 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 922 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_WHILE");
                	}
#line 2595 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 926 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMT", "N_COMPOUND");
                	}
#line 2603 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 931 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_STMTLST", "epsilon");
                	  }
#line 2611 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 934 "mipl.y" /* yacc.c:1646  */
    {
                  for(int i=0; i<numTabs; i++) {
                    printf("\t");
                  }
                }
#line 2621 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 938 "mipl.y" /* yacc.c:1646  */
    {
                  printf("\n");
                }
#line 2629 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 940 "mipl.y" /* yacc.c:1646  */
    {
                   prRule("N_STMTLST",
			                    "T_SCOLON N_STMT N_STMTLST");
               	  }
#line 2638 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 946 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_STMTPART", "N_COMPOUND");
               	  }
#line 2646 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 951 "mipl.y" /* yacc.c:1646  */
    {
        					  prRule("N_TERM", "N_FACTOR N_MULTOPLST");
        					  (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
        					  (yyval.typeInfo).isVar = (yyvsp[-1].typeInfo).isVar;
        					  (yyval.typeInfo).offset = (yyvsp[-1].typeInfo).offset;
                	  (yyval.typeInfo).startIndex = (yyvsp[-1].typeInfo).startIndex;
                	  (yyval.typeInfo).endIndex = (yyvsp[-1].typeInfo).endIndex;
		     	          (yyval.typeInfo).baseType = (yyvsp[-1].typeInfo).baseType;
               	  }
#line 2660 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 962 "mipl.y" /* yacc.c:1646  */
    {
                  printf("0");
             	    prRule("N_TYPE", "N_SIMPLE");
		              (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
             	    (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
             	    (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
	    	          (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
            	  }
#line 2673 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 971 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_TYPE", "N_ARRAY");
			            (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
               	  (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
               	  (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
		     	        (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
                }
#line 2685 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 980 "mipl.y" /* yacc.c:1646  */
    {
                    printf("\n");
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
#line 2739 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1031 "mipl.y" /* yacc.c:1646  */
    {
             	  prRule("N_VARDECLST", "epsilon");
             	  }
#line 2747 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1034 "mipl.y" /* yacc.c:1646  */
    {
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
                }
#line 2756 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1038 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARDECLST",
              	         "N_VARDEC T_SCOLON N_VARDECLST");
            	  }
#line 2765 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1044 "mipl.y" /* yacc.c:1646  */
    {
                	  prRule("N_VARDECPART", "epsilon");
               	  }
#line 2773 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1047 "mipl.y" /* yacc.c:1646  */
    {
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
                }
#line 2782 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1051 "mipl.y" /* yacc.c:1646  */
    {
              	  prRule("N_VARDECPART",
                        "T_VAR N_VARDEC T_SCOLON N_VARDECLST");
               	  }
#line 2791 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1057 "mipl.y" /* yacc.c:1646  */
    {
          					int offset = (yyvsp[0].typeInfo).offset;
               	    prRule("N_VARIABLE", "N_ENTIREVAR");
        				    (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
        				    (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
        				    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
        				    (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
        				    (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
        				    (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
               	  }
#line 2806 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1068 "mipl.y" /* yacc.c:1646  */
    {
					          int offset = (yyvsp[0].typeInfo).offset;
              	    prRule("N_VARIABLE", "N_IDXVAR");
        				    (yyval.typeInfo).isVar = (yyvsp[0].typeInfo).isVar;
        				    (yyval.typeInfo).offset = (yyvsp[0].typeInfo).offset;
        				    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
        				    (yyval.typeInfo).startIndex = (yyvsp[0].typeInfo).startIndex;
        				    (yyval.typeInfo).endIndex = (yyvsp[0].typeInfo).endIndex;
        				    (yyval.typeInfo).baseType = (yyvsp[0].typeInfo).baseType;
               	  }
#line 2821 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1080 "mipl.y" /* yacc.c:1646  */
    {
                    printf("%s ", (yyvsp[0].text));
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
#line 2850 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1106 "mipl.y" /* yacc.c:1646  */
    {
                    printf(":\n");
                    numTabs++;
                    // for(int i=0; i<numTabs; i++)
                    //   printf("\t");
               	    prRule("N_WHILE",
                	         "T_WHILE N_EXPR T_DO N_STMT");
            			  if ((yyvsp[0].typeInfo).type != BOOL)
            			  {
            			    semanticError(ERR_EXPR_MUST_BE_BOOL);
            			    return(0);
            			  }
               	  }
#line 2868 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1118 "mipl.y" /* yacc.c:1646  */
    {
                    numTabs--;
                    printf("\n");
                    for(int i=0; i<numTabs; i++)
                      printf("\t");
                  }
#line 2879 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1125 "mipl.y" /* yacc.c:1646  */
    {
                  printf("while ");
                }
#line 2887 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1129 "mipl.y" /* yacc.c:1646  */
    {
                    printf("print(");
                  }
#line 2895 "mipl.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1132 "mipl.y" /* yacc.c:1646  */
    {
                    printf(", sep='', end='')" );
                	  prRule("N_WRITE",
                          "T_WRITE T_LPAREN N_OUTPUT N_OUTPUTLST T_RPAREN");
               	  }
#line 2905 "mipl.tab.c" /* yacc.c:1646  */
    break;


#line 2909 "mipl.tab.c" /* yacc.c:1646  */
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
#line 1138 "mipl.y" /* yacc.c:1906  */


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
