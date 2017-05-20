#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include <stdio.h>
#include <stdlib.h>
extern int lineCount;
extern char curString[2000];
extern char* yytext;
#line 25 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define KVOID 257
#define KINT 258
#define KDOUBLE 259
#define KBOOL 260
#define KCHAR 261
#define KNULL 262
#define KFOR 263
#define KWHILE 264
#define KDO 265
#define KIF 266
#define KELSE 267
#define KSWITCH 268
#define KRETURN 269
#define KBREAK 270
#define KCONTINUE 271
#define KCONST 272
#define KTRUE 273
#define KFALSE 274
#define KSTRUCT 275
#define KCASE 276
#define KDEFAULT 277
#define ID 278
#define INT 279
#define DOUBLE 280
#define CHAR 281
#define COMPARE 282
#define DOUBLE_MINUS 283
#define DOUBLE_PLUS 284
#define AND 285
#define OR 286
#define STRING 287
#define unary 288
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    2,    2,    6,    6,    5,    5,    5,
    5,    5,    5,    9,    9,    4,    4,    4,   10,   10,
    1,    1,   11,   11,   14,   14,   15,   15,   15,   12,
   12,   13,   13,   17,   17,   16,   16,   16,    3,    3,
    3,    3,    7,    7,    7,    7,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,   18,   18,   18,   19,   19,
};
static const short yylen[] = {                            2,
    2,    2,    0,    8,    8,    4,    3,    5,    9,    0,
    5,    3,    2,    3,    0,    3,    1,    0,    2,    6,
    3,    4,    4,    0,    4,    0,    3,    0,    1,    3,
    1,    3,    1,    3,    1,    3,    1,    6,    1,    1,
    1,    1,    3,    1,    3,    1,    3,    2,    2,    3,
    3,    3,    3,    3,    3,    3,    3,    2,    1,    1,
    1,    1,    1,    1,    2,    2,    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,    0,   39,   40,   42,   41,    0,    1,    2,    0,
    0,    0,    0,    0,   31,    0,    0,    0,   33,    0,
    0,    0,   21,    0,    0,    0,   17,    0,   22,    0,
    0,    0,   62,   61,   64,   68,   69,   59,   60,    0,
    0,    0,    0,    0,   63,   67,    0,   30,    0,    0,
    0,    0,   32,    0,    0,    0,   65,   66,    0,    0,
   49,   48,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   16,    0,    0,    0,   47,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   38,    0,    0,    0,    0,    0,   13,    5,
    0,    0,    0,    4,   20,    0,    0,    7,    0,    0,
    0,    0,    0,   12,   23,    0,    0,    0,    0,    6,
    0,    0,    0,   25,    0,    0,    0,   45,   43,   11,
    8,    0,    0,    0,   14,    0,    0,    9,
};
static const short yydgoto[] = {                          1,
   87,    9,   88,   26,   89,   90,  110,  111,  127,   27,
   74,   14,   18,   93,  117,   15,   19,   45,   46,
};
static const short yysindex[] = {                         0,
  126, -274,    0,    0,    0,    0,  -39,    0,    0, -263,
  -20, -253,   63,  -42,    0,  -39,   -7,   -8,    0, -214,
  -39,  -22,    0, -204, -178,  -38,    0,  -22,    0, -253,
   23,  147,    0,    0,    0,    0,    0,    0,    0,  -22,
 -235, -235,  -22,   95,    0,    0,  -56,    0,   42,   29,
  -39,   95,    0,   73,   49,  113,    0,    0,   36,  -22,
    0,    0,  -22,  -22,  -22,  -22,  -22,  -22,  -22, -120,
  -29,    0, -102,  118,  -29,    0,  120,  113,  106,  -23,
  -23,  -81,  -81,  -81,   88,  136,  -29, -204,   58,  150,
  133,   90,    0,  103,   73,  -22,  -33,  -11,    0,    0,
  -29,   73,  -22,    0,    0,   43,  193,    0,  191,  196,
   50,  179,   59,    0,    0,   95,  -43,  151,  -11,    0,
  -11,  -29,  -29,    0,  -22,  -22,  192,    0,    0,    0,
    0,   95,   68,  -22,    0,   80,  -29,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   12,    0,    0,  154,   32,    0,    0,    0,
  154,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   55,    0,    0,   12,    0,  163,    0,
    0,   75,    0,  -31,    0,   87,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  119,    0,    0,   76,  119,    0,   85,  141,  146,  125,
  130,   -4,    5,   16,    0,    0,  119,    0,    0,    0,
    0,    0,    0,    0,  167,    0,    0,    0,    0,    0,
  119,  155,  -18,    0,    0,    0,   25,    0,  223,    0,
  231,    0,    0,    0,    0,  -17,    0,  212,    0,    0,
    0,  119,  119,    0,    0,    0,    0,    0,    0,    0,
    0,  -13,    0,    0,    0,    0,  119,    0,
};
static const short yygindex[] = {                         0,
  273,    0,  185,  254,  237,   96,   26,  377,    0,  226,
  -86,    0,    0,    0,    0,  255,  250,    0,  183,
};
#define YYTABLESIZE 511
static const short yytable[] = {                         40,
  125,   24,   50,   11,   22,   51,   43,  108,  105,   41,
   40,   42,   24,   69,   13,  115,   23,   43,   67,   16,
   41,   40,   42,   68,   17,   28,   29,   24,   43,   24,
   27,   41,   52,   42,   20,   30,   52,   52,   52,   52,
   52,   53,   52,   36,   37,   53,   53,   53,   53,   53,
   29,   53,   54,   28,   52,   37,   54,   54,   54,   54,
   54,   64,   54,   53,   31,   64,   64,   64,   64,   64,
   37,   64,   69,   47,   54,   35,   76,   67,   65,   69,
   66,  124,   68,   64,   67,   65,   69,   66,   52,   68,
   35,   67,   65,  121,   66,   69,   68,   53,   36,   49,
   67,   65,   21,   66,   69,   68,   28,   29,   54,   67,
   65,   27,   66,   36,   68,   54,   69,  123,   34,   26,
   52,   67,   65,   22,   66,   55,   68,   58,   55,   53,
   58,   69,   70,   34,   26,  118,   67,   65,  137,   66,
   54,   68,   69,   55,  128,   58,  129,   67,   65,   69,
   66,   71,   68,   20,   67,   65,   69,   66,   85,   68,
  135,   67,   65,   73,   66,   50,   68,   50,   50,   50,
   51,   75,   51,   51,   51,   97,   91,   55,   92,   58,
   95,   56,  100,   50,   56,   10,   57,   55,   51,   57,
   51,   12,  109,  112,   18,   24,   98,   18,   24,   56,
   25,   61,   62,   19,   57,   25,   19,   24,  101,   55,
   24,   58,  103,   24,  109,   24,  109,   50,    3,    4,
    5,    6,   51,   57,   58,  102,   96,  104,    3,    4,
    5,    6,   97,   56,  119,   25,  120,  122,   57,   33,
   34,  126,    7,   10,  107,   36,   37,   38,   86,   50,
   33,   34,  134,   39,   51,   35,   36,   37,   38,   61,
   62,   33,   34,   46,   39,   56,  107,   36,   37,   38,
   57,   44,   15,    8,   32,   39,   72,   52,   48,   53,
   52,   52,    0,    0,    0,    0,   53,    0,    0,   53,
   53,    0,    0,    0,    0,    0,    0,   54,    0,    0,
   54,   54,    0,    0,    0,    0,   64,   64,   64,   64,
   64,   94,    0,    0,    0,    0,    0,   60,   61,   62,
   63,   64,    0,   99,   60,   61,   62,   63,   64,    0,
    0,   60,   61,   62,   63,   64,    0,  114,    0,    0,
   60,   61,   62,   63,   64,    0,    0,    0,    0,   60,
   61,   62,   63,   64,    0,    0,    0,    0,  130,  131,
    0,   60,   61,   62,   63,   64,   55,    0,    0,   55,
   55,   58,   58,  138,    0,    0,   60,   61,   62,   63,
   64,    0,    2,    3,    4,    5,    6,   60,   61,   62,
   63,    0,    0,    0,   60,   61,   62,    7,   44,    0,
    0,    0,   61,   62,   52,    0,   50,    0,    0,   50,
   50,   51,    0,    0,   51,   51,   56,    0,    0,   59,
    0,    0,    0,    0,    0,   56,   56,    0,    0,    0,
    0,   57,    0,    0,    0,    0,   77,    0,    0,   78,
   79,   80,   81,   82,   83,   84,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  106,    0,  113,    0,    0,    0,    0,  116,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  132,  133,    0,    0,    0,    0,    0,    0,    0,
  136,
};
static const short yycheck[] = {                         33,
   44,   44,   41,  278,   61,   44,   40,   41,   95,   43,
   33,   45,   44,   37,  278,  102,   59,   40,   42,   40,
   43,   33,   45,   47,  278,   44,   44,   59,   40,   61,
   44,   43,   37,   45,   91,   44,   41,   42,   43,   44,
   45,   37,   47,  279,  280,   41,   42,   43,   44,   45,
   59,   47,   37,   61,   59,   44,   41,   42,   43,   44,
   45,   37,   47,   59,  279,   41,   42,   43,   44,   45,
   59,   47,   37,  278,   59,   44,   41,   42,   43,   37,
   45,  125,   47,   59,   42,   43,   37,   45,   93,   47,
   59,   42,   43,   44,   45,   37,   47,   93,   44,  278,
   42,   43,   40,   45,   37,   47,  125,  125,   93,   42,
   43,  125,   45,   59,   47,   93,   37,   59,   44,   44,
  125,   42,   43,   61,   45,   41,   47,   41,   44,  125,
   44,   37,   91,   59,   59,   93,   42,   43,   59,   45,
  125,   47,   37,   59,  119,   59,  121,   42,   43,   37,
   45,  123,   47,   91,   42,   43,   37,   45,  279,   47,
   93,   42,   43,   91,   45,   41,   47,   43,   44,   45,
   41,  123,   43,   44,   45,   40,  279,   93,   61,   93,
   93,   41,  125,   59,   44,    1,   41,   41,   59,   44,
   44,    7,   97,   98,   41,   41,   61,   44,   44,   59,
   16,  283,  284,   41,   59,   21,   44,   41,   59,  125,
   44,  125,  123,   59,  119,   61,  121,   93,  258,  259,
  260,  261,   93,   41,   42,   93,   91,  125,  258,  259,
  260,  261,   40,   93,   44,   51,   41,   59,   93,  273,
  274,   91,  272,  125,  278,  279,  280,  281,  278,  125,
  273,  274,   61,  287,  125,  278,  279,  280,  281,  283,
  284,  273,  274,   41,  287,  125,  278,  279,  280,  281,
  125,   41,   61,    1,   21,  287,   51,  282,   24,   30,
  285,  286,   -1,   -1,   -1,   -1,  282,   -1,   -1,  285,
  286,   -1,   -1,   -1,   -1,   -1,   -1,  282,   -1,   -1,
  285,  286,   -1,   -1,   -1,   -1,  282,  283,  284,  285,
  286,   75,   -1,   -1,   -1,   -1,   -1,  282,  283,  284,
  285,  286,   -1,   87,  282,  283,  284,  285,  286,   -1,
   -1,  282,  283,  284,  285,  286,   -1,  101,   -1,   -1,
  282,  283,  284,  285,  286,   -1,   -1,   -1,   -1,  282,
  283,  284,  285,  286,   -1,   -1,   -1,   -1,  122,  123,
   -1,  282,  283,  284,  285,  286,  282,   -1,   -1,  285,
  286,  285,  286,  137,   -1,   -1,  282,  283,  284,  285,
  286,   -1,  257,  258,  259,  260,  261,  282,  283,  284,
  285,   -1,   -1,   -1,  282,  283,  284,  272,   22,   -1,
   -1,   -1,  283,  284,   28,   -1,  282,   -1,   -1,  285,
  286,  282,   -1,   -1,  285,  286,   40,   -1,   -1,   43,
   -1,   -1,   -1,   -1,   -1,  285,  286,   -1,   -1,   -1,
   -1,  286,   -1,   -1,   -1,   -1,   60,   -1,   -1,   63,
   64,   65,   66,   67,   68,   69,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   96,   -1,   98,   -1,   -1,   -1,   -1,  103,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  125,  126,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  134,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 288
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"KVOID","KINT","KDOUBLE","KBOOL","KCHAR","KNULL",
"KFOR","KWHILE","KDO","KIF","KELSE","KSWITCH","KRETURN","KBREAK","KCONTINUE",
"KCONST","KTRUE","KFALSE","KSTRUCT","KCASE","KDEFAULT","ID","INT","DOUBLE",
"CHAR","COMPARE","DOUBLE_MINUS","DOUBLE_PLUS","AND","OR","STRING","unary",
"illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program : program S",
"program : program function",
"program :",
"function : type ID '(' para ')' '{' stat '}'",
"function : KVOID ID '(' para ')' '{' stat '}'",
"function_var : ID '(' lots_of_expression ')'",
"function_var : ID '(' ')'",
"stat : ID '=' expression ';' stat",
"stat : ID '[' expression ']' stat_element_dim '=' expression ';' stat",
"stat :",
"stat : ID '=' function_var ';' stat",
"stat : function_var ';' stat",
"stat : S stat",
"stat_element_dim : '[' expression ']'",
"stat_element_dim :",
"para : para ',' para_style",
"para : para_style",
"para :",
"para_style : type ID",
"para_style : type ID '[' INT ']' dim",
"S : type lots_of_type ';'",
"S : KCONST type lots_of_const_type ';'",
"dim : '[' INT ']' dim",
"dim :",
"array_init : '=' '{' array_element '}'",
"array_init :",
"array_element : array_element ',' expression",
"array_element :",
"array_element : expression",
"lots_of_type : lots_of_type ',' type_init",
"lots_of_type : type_init",
"lots_of_const_type : lots_of_const_type ',' const_type_init",
"lots_of_const_type : const_type_init",
"const_type_init : ID '=' expression",
"const_type_init : ID",
"type_init : ID '=' expression",
"type_init : ID",
"type_init : ID '[' INT ']' dim array_init",
"type : KINT",
"type : KDOUBLE",
"type : KCHAR",
"type : KBOOL",
"lots_of_expression : expression ',' lots_of_expression",
"lots_of_expression : expression",
"lots_of_expression : function_var ',' lots_of_expression",
"lots_of_expression : function_var",
"expression : '(' expression ')'",
"expression : expression DOUBLE_PLUS",
"expression : expression DOUBLE_MINUS",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '%' expression",
"expression : expression COMPARE expression",
"expression : expression AND expression",
"expression : expression OR expression",
"expression : '!' expression",
"expression : CHAR",
"expression : STRING",
"expression : KFALSE",
"expression : KTRUE",
"expression : UNUM",
"expression : ID",
"UNUM : '+' NUM",
"UNUM : '-' NUM",
"UNUM : NUM",
"NUM : INT",
"NUM : DOUBLE",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 120 "parser.y"
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

#line 421 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
