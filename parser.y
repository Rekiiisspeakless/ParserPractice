%{
#include <stdio.h>
#include <stdlib.h>
extern int lineCount;
extern char curString[2000];
extern char* yytext;
%}
%token KVOID KINT KDOUBLE KBOOL KCHAR KNULL KFOR KWHILE KDO KIF KELSE KSWITCH KRETURN KBREAK KCONTINUE KCONST KTRUE KFALSE KSTRUCT KCASE KDEFAULT
%token ID
%token INT
%token DOUBLE
%token CHAR
%token COMPARE DOUBLE_MINUS DOUBLE_PLUS AND OR
%token STRING

%left OR 
%left AND
%nonassoc '!'
%left COMPARE
%left '+' '-'
%left '*' '/' '%'
%left unary
%left DOUBLE_MINUS DOUBLE_PLUS
%left '[' ']'
  
%start program

%%
program: program S
	   | program function
       |
	   ;
function: type ID '(' para ')' '{' stat '}'
		| KVOID ID '(' para ')' '{' stat '}'
		;
function_var: ID '(' lots_of_expression_var ')'
			| ID '(' ')'
		    ;
stat: ID '=' expression ';' stat
	| ID '[' expression ']' stat_element_dim '=' expression ';' stat
	|
	| ID '=' function_var ';' stat
	| function_var ';' stat
	|S stat
	;
stat_element_dim: '[' expression ']'
				|
				;
para: para ',' para_style
	| para_style
	|
	;
para_style: type ID
		  | type ID '[' INT ']' dim 
		  ;
S: type lots_of_type  ';'
 | KCONST type lots_of_const_type ';'
 ;
dim: '[' INT ']' dim
   | 
   ;
array_init: '=' '{' array_element '}'
		  |
          ;
array_element: array_element ',' expression
             |
             | expression
			 ;
lots_of_type: lots_of_type ',' type_init
		    | type_init
		    ;
lots_of_const_type: lots_of_const_type ',' const_type_init
				  | const_type_init
				  ;
const_type_init: ID '=' expression
			   | ID
			   ;
type_init: ID '=' expression
	     | ID
		 | ID '[' INT ']' dim array_init
 	     ;
type: KINT
	| KDOUBLE
	| KCHAR
	| KBOOL
	;
lots_of_expression_var: expression_var ',' lots_of_expression_var
				  | expression_var
				  ;
expression_var: '(' expression_var ')'
		  | expression_var DOUBLE_PLUS
		  | expression_var DOUBLE_MINUS
		  | expression_var '+' expression_var
		  | expression_var '-' expression_var
		  | expression_var '*' expression_var
		  | expression_var '/' expression_var
		  | expression_var '%' expression_var
		  | expression_var COMPARE expression_var
		  | expression_var AND expression_var
		  | expression_var OR expression_var
		  | '!' expression_var
		  | CHAR
          | STRING
		  | KFALSE
		  |	KTRUE
		  | UNUM
		  | ID
		  | ID '['expression']' stat_element_dim
		  | function_var
		  ;
expression: '(' expression ')'
		  | expression DOUBLE_PLUS
		  | expression DOUBLE_MINUS
		  | expression '+' expression
		  | expression '-' expression
		  | expression '*' expression
		  | expression '/' expression
		  | expression '%' expression
		  | expression COMPARE expression
		  | expression AND expression
		  | expression OR expression
		  | '!' expression
		  | CHAR
          | STRING
		  | KFALSE
		  |	KTRUE
		  | UNUM
		  | ID
		  ;
UNUM: '+' NUM %prec unary
	| '-' NUM %prec unary
	| NUM
	;
NUM: INT
   | DOUBLE
   ;
	   
%%
int main(void)
{
	yyparse();
	return 0;
}
int yyerror(char* msg){
	fprintf(stderr, "***Error at line %d: %s\n",lineCount, curString);
	fprintf(stderr,"\n");
	fprintf(stderr, "Unmatched token: %s\n", yytext);
	fprintf(stderr, "***syntax error\n");
	exit(-1);
}

