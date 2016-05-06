/*
 *  bison specifications for the MIPL language.
 *  Written to meet requirements for CS 5500, Spring 2016.
 */

/*
 *  Declaration section.
 */
%{

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


%}

%union {
  char* text;
  char ch;
  int num;
  bool boolean;
  TYPE_INFO typeInfo;
};

/*
 *  Token declaration. 'N_...' for rules, 'T_...' for tokens.
 *  Note: tokens are also used in the lex specification file.
 */
%token      T_LPAREN    T_RPAREN    T_MULT	    T_PLUS
%token      T_COMMA     T_MINUS     T_DOT       T_DOTDOT
%token      T_COLON     T_ASSIGN    T_SCOLON    T_LT
%token      T_LE        T_NE        T_EQ        T_GT
%token      T_GE        T_LBRACK    T_RBRACK    T_DO
%token      T_AND       T_ARRAY     T_BEGIN     T_BOOL
%token      T_CHAR      T_CHARCONST T_DIV 	     T_END
%token      T_FALSE     T_IDENT	    T_IF        T_INT
%token 	 T_INTCONST
%token      T_NOT       T_OF        T_OR        T_PROC
%token      T_PROG      T_READ      T_TRUE
%token      T_VAR       T_WHILE     T_WRITE     T_UNKNOWN

%token      ST_EOF

%type <ch> T_CHARCONST
%type <num> N_IDX T_INTCONST N_ADDOP N_ADDOP_ARITH N_ADDOP_LOGICAL N_RELOP
%type <num> N_MULTOP_ARITH N_MULTOP_LOGICAL N_MULTOP N_SIGN N_INTCONST
%type <num> N_PROCDEC N_PROCDECPART
%type <text> T_IDENT N_IDENT N_PROCHDR
%type <typeInfo> N_ARRAY N_BOOLCONST N_CONST
%type <typeInfo> N_ENTIREVAR N_ARRAYVAR
%type <typeInfo> N_VARIDENT N_FACTOR N_TERM N_VARIABLE N_INPUTVAR
%type <typeInfo> N_IDXRANGE N_EXPR N_SIMPLE N_SIMPLEEXPR N_TYPE
%type <typeInfo> N_PROCIDENT N_IDXVAR

/*
 *  To eliminate ambiguities.
 */
%nonassoc   T_THEN
%nonassoc   T_ELSE

/*
 *  Starting point.
 */
%start      N_START

/*
 *  Translation rules.
 */
%%
N_START         : N_PROG
                  {
                    printf("print()\n");
            			  prRule("N_START", "N_PROG");
            			  //printf("\n---- Completed parsing ----\n\n");
            			  return 0;
                  }
                ;
N_ADDOP         : N_ADDOP_LOGICAL
                  {
            			  prRule("N_ADDOP", "N_ADDOP_LOGICAL");
            			  $$ = $1;
                  }
                | N_ADDOP_ARITH
                  {
            			  prRule("N_ADDOP", "N_ADDOP_ARITH");
            			  $$ = $1;
                  }
                ;
N_ADDOP_LOGICAL : T_OR
			  {
          printf("or ");
				  $$ = OR_OP;
			    prRule("N_ADDOP_LOGICAL", "T_OR");
			  }
                ;
N_ADDOP_ARITH   : T_PLUS
			  {
          printf("+ ");
				  $$ = ADD_OP;
			  prRule("N_ADDOP_ARITH", "T_PLUS");
			  }
                | T_MINUS
			  {
          printf("- ");
				  $$ = SUB_OP;
			  prRule("N_ADDOP_ARITH", "T_MINUS");
			  }
                ;
N_ADDOPLST      : /* epsilon */
        			  {
        			    prRule("N_ADDOPLST", "epsilon");
        			  }
                | N_ADDOP N_TERM N_ADDOPLST
        			  {
        				  prRule("N_ADDOPLST",
        						 "N_ADDOP N_TERM N_ADDOPLST");
        				  if (($1 > LOGICAL_OP) && ($2.type != BOOL))
        				  {
        					semanticError(ERR_EXPR_MUST_BE_BOOL);
        					return(0);
        				  }
        				  else if (($1 < ARITHMETIC_OP) &&
        						  ($2.type != INT))
        				  {
        					semanticError(ERR_EXPR_MUST_BE_INT);
        					return(0);
        				  }
        			  };

N_ARRAY         : N_ARRAYSYMBOL T_LBRACK N_IDXRANGE T_RBRACK T_OF N_SIMPLE
                {
                  // printf(" = [0 for i in range()]");
			            prRule("N_ARRAY",
            	    "T_ARRAY T_LBRACK N_IDXRANGE T_RBRACK T_OF N_SIMPLE");
			            $$.type = ARRAY;
            	    $$.startIndex = $3.startIndex;
			            $$.endIndex = $3.endIndex;
			            $$.baseType = $6.type;
                };

N_ARRAYSYMBOL   : T_ARRAY {
                  printf("[0 for i in range(");
                };

N_ARRAYVAR      : N_ENTIREVAR
                  {
                    printf("[");
                	  prRule("N_ARRAYVAR", "N_ENTIREVAR");
        					  $$.offset = $1.offset;
        					  $$.isVar = $1.isVar;
        					  $$.type = $1.type;
                        	  $$.startIndex = $1.startIndex;
                        	  $$.endIndex = $1.endIndex;
        					  $$.baseType = $1.baseType;
        					  if ($1.type != ARRAY)
        					  {
          						semanticError(ERR_INDEX_VAR_MUST_BE_ARRAY);
          						return(0);
        					  }
                  }
                ;
N_ASSIGN        : N_VARIABLE N_ASSIGNCHAR N_EXPR
               	{
                	  prRule("N_ASSIGN",
                         "N_VARIABLE T_ASSIGN N_EXPR");
        					  if ($1.type == ARRAY)
        					  {
                      semanticError(ERR_CANNOT_ASSIGN_TO_ARRAY);
        						  return(0);
                    }
        					  if ($1.type == PROCEDURE)
        					  {
        						  semanticError(ERR_PROCEDURE_VAR_MISMATCH);
        						  return(0);
        					  }
        					  if ($3.type != $1.type)
        					  {
        					    semanticError(ERR_EXPR_MUST_BE_SAME_AS_VAR);
        						  return(0);
                    }
             	  };

N_ASSIGNCHAR    : T_ASSIGN {
                  printf("= ");
                }
N_BLOCK         : N_VARDECPART {
					//print bss + (20+numVars)
					// if(firstTime) {
					// 	firstTime = false;
				  //   }
					// level++;
				  } N_PROCDECPART {
					//PRINT PROCEDURE OAL CODE, ELSEWHERE
				  //   level--;
					// if(level == 0) {
				  //   }
				  }
				  N_STMTPART
                  {
					  if(level != 0) {
					  }
                	  prRule("N_BLOCK",
                         "N_VARDECPART N_PROCDECPART N_STMTPART");
                	  endScope();
                  }
                ;
N_BOOLCONST     : T_TRUE
               	  {
                    printf("True");
        					  prRule("N_BOOLCONST", "T_TRUE");
        					  $$.offset = 1;
        					  $$.isVar = false;
        					  $$.type = BOOL;
        					  $$.startIndex = NOT_APPLICABLE;
        					  $$.endIndex = NOT_APPLICABLE;
        					  $$.baseType = NOT_APPLICABLE;
                  }
                | T_FALSE
                  {
                    printf("False ");
        					  $$.offset = 0;
        					  $$.isVar = false;
        					  prRule("N_BOOLCONST", "T_FALSE");
        					  $$.type = BOOL;
                	  $$.startIndex = NOT_APPLICABLE;
                	  $$.endIndex = NOT_APPLICABLE;
					          $$.baseType = NOT_APPLICABLE;
                  }
                ;
N_COMPOUND      : T_BEGIN {
                  for(int i=0; i<numTabs; i++) {
                    printf("\t");
                  }
                } N_STMT {

                  printf("\n");
                } N_STMTLST T_END {
        					prRule("N_COMPOUND",
        					       "T_BEGIN N_STMT N_STMTLST T_END");
                }
                ;
N_CONDITION     : N_IF N_EXPR {
        					printf(":\n");
                  numTabs++;
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
        				  if ($2.type != BOOL)
        				  {
          					semanticError(ERR_EXPR_MUST_BE_BOOL);
          					return(0);
        				  }
        				} T_THEN N_STMT {
                  numTabs--;
                  printf("\n");
                  for(int i=0; i<numTabs; i++)
                    printf("\t");

                } N_ELSE {};

N_IF            : T_IF {
                  printf("if ");
                };

N_ELSE			    :	T_ELSE {
                  printf("else:\n");
                  numTabs++;
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
                } N_STMT {
                  numTabs--;
                  printf("\n");
                  for(int i=0; i<numTabs; i++)
                    printf("\t");

                  prRule("N_CONDITION",
                    "T_IF N_EXPR T_THEN N_STMT T_ELSE N_STMT");
                }
        				| /* epsilon */ {};

N_CONST         : N_INTCONST
                  {
                	  prRule("N_CONST", "N_INTCONST");
        					  $$.offset = int($1);
        					  $$.isVar = false;
        					  $$.type = INT;
        					  $$.startIndex = NOT_APPLICABLE;
        					  $$.endIndex = NOT_APPLICABLE;
        					  $$.baseType = NOT_APPLICABLE;
                  }
                | T_CHARCONST
               	  {
                    if($1 == '\\') {
                      $1 = '\n';
                      printf("'\\n'");
                    } else {
                      printf("'%c' ", $1);
                    }
        					  $$.offset = int($1);
        					  $$.isVar = false;
                    prRule("N_CONST", "T_CHARCONST");
        					  $$.type = CHAR;
                    $$.startIndex = NOT_APPLICABLE;
        					  $$.endIndex = NOT_APPLICABLE;
        					  $$.baseType = NOT_APPLICABLE;
               	  }
                | N_BOOLCONST
                  {
        					  $$.offset = $1.offset;
        					  $$.isVar = false;
        					  prRule("N_CONST", "N_BOOLCONST");
        					  $$.type = BOOL;
                	  $$.startIndex = NOT_APPLICABLE;
        					  $$.endIndex = NOT_APPLICABLE;
        					  $$.baseType = NOT_APPLICABLE;
                  }
                ;
N_ENTIREVAR     : N_VARIDENT
                  {
        					  prRule("N_ENTIREVAR", "N_VARIDENT");
        					  $$.offset = $1.offset;
        					  $$.isVar = $1.isVar;
        					  $$.type = $1.type;
                	  $$.startIndex = $1.startIndex;
        					  $$.endIndex = $1.endIndex;
        					  $$.baseType = $1.baseType;
                  }
                ;
N_EXPR          : N_SIMPLEEXPR
                  {
        					  prRule("N_EXPR", "N_SIMPLEEXPR");
        					  $$.type = $1.type;
        					  $$.isVar = $1.isVar;
        					  $$.offset = $1.offset;
        					  $$.startIndex = $1.startIndex;
        					  $$.endIndex = $1.endIndex;
        					  $$.baseType = $1.baseType;
                  }
                | N_SIMPLEEXPR N_RELOP N_SIMPLEEXPR
                  {
        					  prRule("N_EXPR",
        							 "N_SIMPLEEXPR N_RELOP N_SIMPLEEXPR");
        					  if ($1.type != $3.type)
        					  {
        						semanticError(
        						   ERR_EXPRS_MUST_BOTH_BE_SAME_TYPE);
        						return(0);
        					  }
        					  $$.isVar = $1.isVar;
        					  $$.offset = $1.offset;
        					  $$.type = BOOL;
        					  $$.startIndex = NOT_APPLICABLE;
        					  $$.endIndex = NOT_APPLICABLE;
        					  $$.baseType = NOT_APPLICABLE;
               	  }
                ;
N_FACTOR        : N_SIGN N_VARIABLE
              	  {
        					  prRule("N_FACTOR", "N_SIGN N_VARIABLE");
        					  if (($1 != NO_SIGN) && ($2.type != INT))
        					  {
        						semanticError(ERR_EXPR_MUST_BE_INT);
        						return(0);
        					  }
        					  $$.isVar = $2.isVar;
        					  $$.offset = $2.offset;
        					  $$.type = $2.type;
                        	  $$.startIndex = $2.startIndex;
        					  $$.endIndex = $2.endIndex;
        					  $$.baseType = $2.baseType;
                  }
                | N_CONST
             	  {
					  prRule("N_FACTOR", "N_CONST");
					  $$.offset = $1.offset;
					  $$.isVar = $1.isVar;
					  $$.type = $1.type;
					  $$.startIndex = $1.startIndex;
					  $$.endIndex = $1.endIndex;
					  $$.baseType = $1.baseType;
				  }
                | T_LPAREN N_EXPR T_RPAREN
            	  {
					  prRule("N_FACTOR",
							 "T_LPAREN N_EXPR T_RPAREN");
					  $$.offset = $2.offset;
					  $$.isVar = $2.isVar;
					  $$.type = $2.type;
					  $$.startIndex = $2.startIndex;
					  $$.endIndex = $2.endIndex;
					  $$.baseType = $2.baseType;
             	  }
                | N_NOT N_FACTOR
            	  {
					  $$.isVar = $2.isVar;
					  $$.offset = $2.offset;
					  prRule("N_FACTOR", "T_NOT N_FACTOR");
					  if ($2.type != BOOL)
					  {
						semanticError(ERR_EXPR_MUST_BE_BOOL);
						return(0);
					  }
					  $$.type = BOOL;
                	  $$.startIndex = NOT_APPLICABLE;
                	  $$.endIndex = NOT_APPLICABLE;
					  $$.baseType = NOT_APPLICABLE;
               	  }
                ;

N_NOT           : T_NOT {
                  printf("not ");
                };

N_IDENT         : T_IDENT
              	{
                  // for(int i=0; i<numTabs; i++)
                  //   printf("\t");

                  printf("%s ", $1);
        				  prRule("N_IDENT", "T_IDENT");
        				  $$ = $1;
              	}
                ;
N_IDENTLST      : /* epsilon */
              	  {
                    printf("= ");
					  prRule("N_IDENTLST", "epsilon");
               	  }
                | N_COMMA N_IDENT N_IDENTLST
               	  {
					  prRule("N_IDENTLST",
                	         "T_COMMA N_IDENT N_IDENTLST");
					  string varName = string($2);
					  variableNames.push_front(varName);
              	  }
                ;
N_COMMA         : T_COMMA {
                  printf("= ");
                };

N_IDX           : N_INTCONST
              	{
        					  prRule("N_IDX", "N_INTCONST");
        					  $$ = $1;
               	}
                ;
N_IDXRANGE      : N_IDX N_DOTDOT N_IDX
             	  {
                  printf("+1)]");
               	  prRule("N_IDXRANGE", "N_IDX T_DOTDOT N_IDX");
		     	        $$.type = INDEX_RANGE;
                	$$.startIndex = $1;
               	  $$.endIndex = $3;
		    	        $$.baseType = NOT_APPLICABLE;
               	};

N_DOTDOT        : T_DOTDOT {
                  printf(", ");
                };

N_IDXVAR        : N_ARRAYVAR T_LBRACK N_EXPR T_RBRACK
             	  {
                  printf("- %d]", $1.startIndex);
      					  prRule("N_IDXVAR",
      							 "N_ARRAYVAR T_LBRACK N_EXPR T_RBRACK");
      					  if ($3.type != INT)
      					  {
        						semanticError(ERR_INDEX_EXPR_MUST_BE_INT);
        						return(0);
      					  }
      					  $$.isVar = $1.isVar;
      					  $$.offset = $1.offset - $1.startIndex - 1;
      					  $$.type = $1.baseType;
      					  $$.startIndex = NOT_APPLICABLE;
      					  $$.endIndex = NOT_APPLICABLE;
      					  $$.baseType = NOT_APPLICABLE;
            	  };

N_INPUTLST      : /* epsilon */
             	  {
           	      prRule("N_INPUTLST", "epsilon");
             	  }
                | T_COMMA N_INPUTVAR N_INPUTLST
            	  {
             	    prRule("N_INPUTLST",
              	         "T_COMMA N_INPUTVAR N_INPUTLST");
            	  };

N_INPUTVAR      : N_VARIABLE
              	{
                  if($1.type == INT)
					          printf(" = int(raw_input())\n");
                  else
                    printf(" = raw_input()\n");
                  
                  for(int i=0; i<numTabs; i++)
                    printf("\t");

      					  prRule("N_INPUTVAR", "N_VARIABLE");
      					  if (($1.type != INT) && ($1.type != CHAR))
      					  {
        						semanticError(
        						ERR_INPUT_VAR_MUST_BE_INT_OR_CHAR);
        						return(0);
                  }
      					  $$.type = $1.type;
              	  $$.startIndex = $1.startIndex;
              	  $$.endIndex = $1.endIndex;
      					  $$.baseType = $1.baseType;
             	  }
                ;
N_INTCONST      : N_SIGN T_INTCONST
              	  {
                    printf("%d ", $2);
               	    prRule("N_INTCONST", "N_SIGN T_INTCONST");
          			    if ($1 == NO_SIGN)
          			    $$ = $2;
          			    else $$ = $1 * $2;
               	  }
                ;
N_MULTOP        : N_MULTOP_LOGICAL
             	  {
             	    prRule("N_MULTOP", "N_MULTOP_LOGICAL");
			            $$ = $1;
                }
                | N_MULTOP_ARITH
             	  {
             	    prRule("N_MULTOP", "N_MULTOP_ARITH");
			            $$ = $1;
              	}
                ;
N_MULTOP_LOGICAL : T_AND
              	  {
                    printf("and ");
        					  $$ = AND_OP;
        					  prRule("N_MULTOP_LOGICAL", "T_AND");
                  }
                ;
N_MULTOP_ARITH  : T_MULT
                  {
                    printf("* ");
        					  $$ = MULT_OP;
        					  prRule("N_MULTOP_ARITH", "T_MULT");
               	  }
                | T_DIV
               	  {
                    printf("/");
        					  $$ = DIV_OP;
        					  prRule("N_MULTOP_ARITH", "T_DIV");
                  }
                ;
N_MULTOPLST     : /* epsilon */
             	  {
              	  prRule("N_MULTOPLST", "epsilon");
               	}
                | N_MULTOP N_FACTOR N_MULTOPLST
              	{
      					  prRule("N_MULTOPLST",
      							 "N_MULTOP N_FACTOR N_MULTOPLST");
      					  if (($1 > LOGICAL_OP) && ($2.type != BOOL))
      					  {
      						semanticError(ERR_EXPR_MUST_BE_BOOL);
      						return(0);
      					  }
      					  else if (($1 < ARITHMETIC_OP) &&
      							   ($2.type != INT))
      					  {
      						semanticError(ERR_EXPR_MUST_BE_INT);
      						return(0);
      					  }
             	  }
                ;
N_OUTPUT        : N_EXPR
             	  {
                  // if(char($1.offset) == '\\') {
                  //   printf("\n");
                  //   for(int i=0; i<numTabs; i++) {
                  //     printf("\t");
                  //   }
                  //   printf("print ");
                  // }
              	  prRule("N_OUTPUT", "N_EXPR");
          			  if (($1.type != INT) && ($1.type != CHAR))
          			  {
              	    semanticError(ERR_OUTPUT_VAR_MUST_BE_INT_OR_CHAR);
             	      return(0);
               	  }
              	}
                ;
N_OUTPUTLST     : /* epsilon */
              	  {
              	  prRule("N_OUTPUTLST", "epsilon");
               	  }
                | T_COMMA {
                  printf(", ");
                } N_OUTPUT N_OUTPUTLST
             	  {
              	  prRule("N_OUTPUTLST",
			         "T_COMMA N_OUTPUT N_OUTPUTLST");
            	  };

N_PROCDEC       : N_PROCHDR {
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
      					  printf("def %s():\n", $1);
                  numTabs++;
      				  } N_BLOCK {
      					  // $$ = $1;
                  numTabs--;
      					  prRule("N_PROCDEC", "N_PROCHDR N_BLOCK");
             	  };

N_PROCHDR       : T_PROC T_IDENT T_SCOLON
             	  {
					        $$ = $2;

                	prRule("N_PROCHDR",
			                   "T_PROC T_IDENT T_SCOLON");
      					  string lexeme = string($2);
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
                };

N_PROCDECPART   : /* epsilon */
             	  {
					$$ = 0;
					prRule("N_PROCDECPART", "epsilon");
               	  }
                  | N_PROCDEC T_SCOLON N_PROCDECPART
               	  {

					prRule("N_PROCDECPART",
               	           "N_PROCDEC T_SCOLON N_PROCDECPART");
              	  }
                ;
N_PROCIDENT     : T_IDENT
              	  {
                    printf("%s", $1);
          					prRule("N_PROCIDENT", "T_IDENT");
          					string ident = string($1);
                    TYPE_INFO typeInfo = findEntryInAnyScope(ident);
          					if (typeInfo.type == UNDEFINED)
          					{
                	    semanticError(ERR_MULTIPLY_DEFINED_IDENT);
                	    return(0);
          					}
          					$$.offset = typeInfo.offset;
        				    $$.type = typeInfo.type;
        				    $$.startIndex = typeInfo.startIndex;
        				    $$.endIndex = typeInfo.endIndex;
        				    $$.baseType = typeInfo.baseType;
               	  }
                ;
N_PROCSTMT      : N_PROCIDENT
               	{
        					  printf("()");
        					  prRule("N_PROCSTMT", "N_PROCIDENT");
        					  if ($1.type != PROCEDURE)
        					  {
        						semanticError(ERR_PROCEDURE_VAR_MISMATCH);
        						return(0);
        					  }
              	}
                ;
N_PROG          : N_PROGLBL T_IDENT T_SCOLON
             	  {
                  printf("from __future__ import print_function\n");

             	  prRule("N_PROG",
                     "N_PROGLBL T_IDENT T_SCOLON N_BLOCK T_DOT");
			  string lexeme = string($2);
			  TYPE_INFO info = {PROGRAM, NOT_APPLICABLE,
			                    NOT_APPLICABLE,
			                    NOT_APPLICABLE, countLabel, true};
					  countLabel++;
			  prSymbolTableAddition(lexeme, info);
               	  bool success = scopeStack.top().addEntry
                               (SYMBOL_TABLE_ENTRY(lexeme, info));
			  }
			  N_BLOCK T_DOT
		    	  { }
                ;
N_PROGLBL       : T_PROG
            	  {
            	  prRule("N_PROGLBL", "T_PROG");
			  beginScope();
               	  }
                ;
N_READ          : T_READ T_LPAREN N_INPUTVAR N_INPUTLST T_RPAREN
              	  {
               	  prRule("N_READ",
               "T_READ T_LPAREN N_INPUTVAR N_INPUTLST T_RPAREN");
			  }
                ;
N_RELOP         : T_LT
                  {
                    printf("< ");
					          $$ = LT_OP;
                	  prRule("N_RELOP", "T_LT");
                  }
                | T_GT
               	  {
                    printf("> ");
					          $$ = GT_OP;
                	  prRule("N_RELOP", "T_GT");
                  }
                | T_LE
                  {
                    printf("<= ");
        					  $$ = LE_OP;
        					  prRule("N_RELOP", "T_LE");
               	  }
                | T_GE
               	  {
                    printf(">= ");
					          $$ = GE_OP;
               	    prRule("N_RELOP", "T_GE");
                  }
                | T_EQ
               	  {
                    printf("== ");
					          $$ = EQ_OP;
                	  prRule("N_RELOP", "T_EQ");
                  }
                | T_NE
                  {
                    printf("!= ");
					          $$ = NE_OP;
                	  prRule("N_RELOP", "T_NE");
               	  }
                ;
N_SIGN          : /* epsilon */
              	  {
               	    prRule("N_SIGN", "epsilon");
					$$ = NO_SIGN;
               	  }
                | T_PLUS
               	  {
                    printf("+");
					prRule("N_SIGN", "T_PLUS");
					$$ = POSITIVE;
               	  }
                | T_MINUS
              	  {
                    printf("-");
					prRule("N_SIGN", "T_MINUS");
					$$ = NEGATIVE;
               	  }
                ;
N_SIMPLE        : T_INT
               	  {
					prRule("N_SIMPLE", "T_INT");
					$$.type = INT;
                	$$.startIndex = NOT_APPLICABLE;
                	$$.endIndex = NOT_APPLICABLE;
		     	    $$.baseType = NOT_APPLICABLE;
                  }
                | T_CHAR
                	  {
                	  prRule("N_SIMPLE", "T_CHAR");
			  $$.type = CHAR;
               	  $$.startIndex = NOT_APPLICABLE;
                	  $$.endIndex = NOT_APPLICABLE;
		     	  $$.baseType = NOT_APPLICABLE;
                	  }
                | T_BOOL
               	  {
                	  prRule("N_SIMPLE", "T_BOOL");
			  $$.type = BOOL;
                	  $$.startIndex = NOT_APPLICABLE;
                	  $$.endIndex = NOT_APPLICABLE;
		    	  $$.baseType = NOT_APPLICABLE;
                	  }
                ;
N_SIMPLEEXPR    : N_TERM N_ADDOPLST
                	  {
						  prRule("N_SIMPLEEXPR",
							 "N_TERM N_ADDOPLST");
						  $$.type = $1.type;
						  $$.isVar = $1.isVar;
						  $$.offset = $1.offset;
						  $$.startIndex = $1.startIndex;
						  $$.endIndex = $1.endIndex;
						  $$.baseType = $1.baseType;
                	  }
                ;
N_STMT          : N_ASSIGN
              	  {
                	  prRule("N_STMT", "N_ASSIGN");
               	  }
                | N_PROCSTMT
              	  {
               	  prRule("N_STMT", "N_PROCSTMT");
                	  }
                | N_READ
                	  {
                	  prRule("N_STMT", "N_READ");
                	  }
                | N_WRITE
               	  {
                	  prRule("N_STMT", "N_WRITE");
                	  }
                | N_CONDITION
               	  {
                	  prRule("N_STMT", "N_CONDITION");
                	  }
                | N_WHILE
               	  {
                	  prRule("N_STMT", "N_WHILE");
                	}
                | N_COMPOUND
               	  {
                	  prRule("N_STMT", "N_COMPOUND");
                	}
                ;
N_STMTLST       : /* epsilon */
               	  {
                	  prRule("N_STMTLST", "epsilon");
                	  }
                | T_SCOLON {
                  for(int i=0; i<numTabs; i++) {
                    printf("\t");
                  }
                } N_STMT {
                  printf("\n");
                } N_STMTLST {
                   prRule("N_STMTLST",
			                    "T_SCOLON N_STMT N_STMTLST");
               	  }
                ;
N_STMTPART      : N_COMPOUND
			           {
              	  prRule("N_STMTPART", "N_COMPOUND");
               	  }
                ;
N_TERM          : N_FACTOR N_MULTOPLST
               	  {
        					  prRule("N_TERM", "N_FACTOR N_MULTOPLST");
        					  $$.type = $1.type;
        					  $$.isVar = $1.isVar;
        					  $$.offset = $1.offset;
                	  $$.startIndex = $1.startIndex;
                	  $$.endIndex = $1.endIndex;
		     	          $$.baseType = $1.baseType;
               	  }
                ;
N_TYPE          : N_SIMPLE
             	  {
                  printf("0");
             	    prRule("N_TYPE", "N_SIMPLE");
		              $$.type = $1.type;
             	    $$.startIndex = $1.startIndex;
             	    $$.endIndex = $1.endIndex;
	    	          $$.baseType = $1.baseType;
            	  }
                | N_ARRAY
              	{
              	  prRule("N_TYPE", "N_ARRAY");
			            $$.type = $1.type;
               	  $$.startIndex = $1.startIndex;
               	  $$.endIndex = $1.endIndex;
		     	        $$.baseType = $1.baseType;
                }
                ;
N_VARDEC        : N_IDENT N_IDENTLST T_COLON N_TYPE
              	  {
                    printf("\n");
              	  prRule("N_VARDEC",
             	         "N_IDENT N_IDENTLST T_COLON N_TYPE");
			  string varName = string($1);
			  variableNames.push_front(varName);

			  for (std::list<string>::iterator
             	       it=variableNames.begin();
			       it != variableNames.end(); it++)
			  {



			    string varName = string(*it);
			    prSymbolTableAddition(varName, $4);

				bool success;
				if($4.type == ARRAY) {
					count++;
					$4.isVar = true;
					$4.offset = count;
					success = scopeStack.top().addEntry
                            (SYMBOL_TABLE_ENTRY(varName, $4));
					count+=($4.endIndex - $4.startIndex);
				} else {
					$4.isVar = true;
					$4.offset = count;
					count++;
					success = scopeStack.top().addEntry
                            (SYMBOL_TABLE_ENTRY(varName, $4));
				}
              	    if (! success)
			    {
               	      semanticError(ERR_MULTIPLY_DEFINED_IDENT);
             	      return(0);
               	    }
               	    if ($4.type == ARRAY)
			    {
              	      if ($4.startIndex > $4.endIndex)
			      {
             	        semanticError(
				   ERR_START_INDEX_MUST_BE_LE_END_INDEX);
                	        return(0);
               	      }
              	    }
			  }
                	  variableNames.clear();
              	  }
                ;
N_VARDECLST     : /* epsilon */
             	  {
             	  prRule("N_VARDECLST", "epsilon");
             	  }
                | {
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
                } N_VARDEC T_SCOLON N_VARDECLST
              	  {
              	  prRule("N_VARDECLST",
              	         "N_VARDEC T_SCOLON N_VARDECLST");
            	  }
                ;
N_VARDECPART    : /* epsilon */
              	  {
                	  prRule("N_VARDECPART", "epsilon");
               	  }
                | T_VAR {
                  for(int i=0; i<numTabs; i++)
                    printf("\t");
                } N_VARDEC T_SCOLON N_VARDECLST
               	  {
              	  prRule("N_VARDECPART",
                        "T_VAR N_VARDEC T_SCOLON N_VARDECLST");
               	  }
                ;
N_VARIABLE      : N_ENTIREVAR
               	  {
          					int offset = $1.offset;
               	    prRule("N_VARIABLE", "N_ENTIREVAR");
        				    $$.offset = $1.offset;
        				    $$.isVar = $1.isVar;
        				    $$.type = $1.type;
        				    $$.startIndex = $1.startIndex;
        				    $$.endIndex = $1.endIndex;
        				    $$.baseType = $1.baseType;
               	  }
                | N_IDXVAR
              	  {
					          int offset = $1.offset;
              	    prRule("N_VARIABLE", "N_IDXVAR");
        				    $$.isVar = $1.isVar;
        				    $$.offset = $1.offset;
        				    $$.type = $1.type;
        				    $$.startIndex = $1.startIndex;
        				    $$.endIndex = $1.endIndex;
        				    $$.baseType = $1.baseType;
               	  }
                ;
N_VARIDENT      : T_IDENT
             	  {
                    printf("%s ", $1);
              	    prRule("N_VARIDENT", "T_IDENT");
			              string ident = string($1);
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

			  $$.offset = findOffsetInAnyScope(ident);
			  $$.isVar = true;
			  $$.type = typeInfo.type;
			  $$.startIndex = typeInfo.startIndex;
			  $$.endIndex = typeInfo.endIndex;
			  $$.baseType = typeInfo.baseType;
			  }
                ;
N_WHILE         : N_WHILESYMBOL N_EXPR
              	  {
                    printf(":\n");
                    numTabs++;
                    // for(int i=0; i<numTabs; i++)
                    //   printf("\t");
               	    prRule("N_WHILE",
                	         "T_WHILE N_EXPR T_DO N_STMT");
            			  if ($2.type != BOOL)
            			  {
            			    semanticError(ERR_EXPR_MUST_BE_BOOL);
            			    return(0);
            			  }
               	  } T_DO N_STMT {
                    numTabs--;
                    printf("\n");
                    for(int i=0; i<numTabs; i++)
                      printf("\t");
                  };

N_WHILESYMBOL   : T_WHILE {
                  printf("while ");
                };

N_WRITE         : T_WRITE T_LPAREN {
                    printf("print(");
                  } N_OUTPUT N_OUTPUTLST T_RPAREN
               	  {
                    printf(", sep='', end='')" );
                	  prRule("N_WRITE",
                          "T_WRITE T_LPAREN N_OUTPUT N_OUTPUTLST T_RPAREN");
               	  }
                ;
%%

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
