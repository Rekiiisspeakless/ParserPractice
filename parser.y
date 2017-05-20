%{
#include <stdio.h>
#include <stdlib.h>
extern int lineCount;
extern char curString[2000];
extern char* yytext;
int function_main_flag = 0;
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
	   | program function {function_main_flag = 1;}
       |
	   ;
function: type ID '(' para ')' '{' full_stats '}'
		| KVOID ID '(' para ')' '{' full_stats '}'
		;
function_var: ID '(' lots_of_expression_var ')'
			| ID '(' ')'
		    ;
			
full_stats: stats full_stats
		  | S full_stats
          | 
		  ;
nf : stats nf
   |
   ;
stats: stat ';' 
	 | if_stat 
	 | for_loop 
	 | while_stat 
	 | do_while_stat 
	 | switch_stat
	 ;
stat: ID '=' expression 
	| ID '[' expression_var ']' stat_element_dim '=' expression 
	| ID '=' function_var 
	| function_var 
	| KBREAK  
	| KCONTINUE 
	| KRETURN expression 
	;


switch_stat: KSWITCH '(' ID ')' '{' default_stat '}'
		   | KSWITCH '(' ID ')' '{' non_default_stat '}'
		   ;
default_stat: KCASE const ':' nf default_stat
			| KDEFAULT ':' nf
			;
non_default_stat: KCASE const ':' nf non_default_case_stat 
			    ;
non_default_case_stat: KCASE const ':' nf non_default_case_stat
					 |
					 ;
const: CHAR
     | INT
	 ;

while_stat: KWHILE '(' expression ')' '{' full_stats '}'
		  ;
do_while_stat: KDO '{' full_stats '}' KWHILE '(' expression')' ';'
			 ;
if_stat: KIF '(' expression  ')'  '{' full_stats '}'
	   | KIF '(' expression  ')'  '{' full_stats '}' KELSE '{' full_stats '}' 
       ;
for_loop: KFOR '('for_loop_para ';' for_loop_para ';' for_loop_para')''{' full_stats '}'
		;
for_loop_para: expression
			 | 
			 ;
stat_element_dim: '[' expression_var ']'
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
		  | ID '['expression_var']' stat_element_dim
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
	if(function_main_flag == 0){
		curString[0] = '\0';
		yyerror(" ");
	}
	
	fprintf(stdout, "No syntax error!\n");
	return 0;
}
int yyerror(char* msg){
	fprintf(stderr, "***Error at line %d: %s\n",lineCount + 1, curString);
	fprintf(stderr,"\n");
	fprintf(stderr, "Unmatched token: %s\n", yytext);
	fprintf(stderr, "***syntax error\n");
	exit(-1);
}

