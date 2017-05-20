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
    0,    0,    0,    2,    5,    5,    4,    4,    4,    1,
    1,    8,    8,    9,    9,   10,   10,   10,    6,    6,
    7,    7,   13,   13,   12,   12,   12,    3,    3,    3,
    3,   11,   11,   11,   11,   11,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   11,   11,   11,   14,   14,
   14,   15,   15,
};
static const short yylen[] = {                            2,
    2,    2,    0,    8,    1,    0,    4,    2,    0,    3,
    4,    4,    0,    4,    0,    3,    0,    1,    3,    1,
    3,    1,    3,    1,    3,    1,    6,    1,    1,    1,
    1,    3,    2,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    2,    1,    1,    1,    1,    1,    2,    2,
    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,   28,   29,   31,   30,    0,    1,    2,    0,    0,
    0,    0,   20,    0,    0,   22,    0,    0,    0,    0,
   10,    0,    0,   11,    0,    0,    0,   47,   46,   52,
   53,   44,   45,    0,    0,    0,    0,    0,   48,   51,
    0,   19,    0,   21,    0,    8,    0,    0,    0,   49,
   50,    0,    0,   34,   33,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   32,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   27,    5,    0,
    0,    7,    0,    0,    4,   12,    0,    0,   14,    0,
    0,
};
static const short yydgoto[] = {                          1,
    7,    8,    9,   27,   81,   12,   15,   64,   78,   87,
   38,   13,   16,   39,   40,
};
static const short yysindex[] = {                         0,
 -121,    0,    0,    0,    0, -125,    0,    0, -277, -272,
   37,    8,    0,  -38,   57,    0, -245, -125,  -33, -227,
    0,  -33, -272,    0,  -28, -206,  -39,    0,    0,    0,
    0,    0,    0,  -33, -127, -127,  -33,   12,    0,    0,
   13,    0,   12,    0,   27,    0,    1, -125,   26,    0,
    0,    3,  -33,    0,    0,  -33,  -33,  -33,  -33,  -33,
  -33,  -33, -152,   97, -121, -147,    0,   33,   26,   19,
  -34,  -34, -129, -129, -129,   67,   20,    0,    0, -227,
   36,    0,   27,  -33,    0,    0,  -40,   12,    0,  -33,
   12,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   61,    0,    0,   62,    0,    0,    0,   82,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   70,    0,    0,
   61,    0,   71,    0,   -1,    0,    0,    0,   48,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   73,   39,    0,    0,  -12,   50,   52,
   38,   43,  -26,  -17,   -6,    0,    0,    0,    0,    0,
    0,    0,   -1,  -35,    0,    0,    0,  -30,    0,    0,
  -22,
};
static const short yygindex[] = {                         0,
  100,    0,   94,    0,    0,    0,    0,   79,    0,    0,
   88,  146,  144,    0,  121,
};
#define YYTABLESIZE 338
static const short yytable[] = {                         34,
   11,   47,   62,   90,   48,   14,   37,   60,   17,   35,
   37,   36,   61,   18,   37,   37,   37,   37,   37,   38,
   37,   16,   22,   38,   38,   38,   38,   38,   40,   38,
   39,   40,   37,   25,   39,   39,   39,   39,   39,   62,
   39,   38,   13,   67,   60,   58,   40,   59,   62,   61,
   41,   20,   39,   60,   58,   62,   59,   13,   61,   13,
   60,   58,   62,   59,   45,   61,   21,   60,   58,   62,
   59,   46,   61,   19,   60,   58,   18,   59,   35,   61,
   35,   35,   35,   36,   89,   36,   36,   36,   43,   17,
   41,   43,   42,   41,   18,   42,   35,   19,   37,   10,
   23,   36,   16,   17,   26,   24,   43,   38,   41,   43,
   42,   26,   40,   25,   23,   24,   15,   63,   39,   26,
   24,   49,    9,   65,   52,    9,   76,   17,   25,   23,
   82,   15,    2,    3,    4,    5,    2,    3,    4,    5,
   68,   66,   84,   69,   70,   71,   72,   73,   74,   75,
    6,   30,   31,   54,   55,   50,   51,   77,   80,   83,
   85,   86,   35,    6,   79,   42,   44,   36,    0,    0,
    0,   88,   43,    0,   41,    0,   42,   91,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   28,
   29,    0,    0,    0,    0,   30,   31,   32,   54,   55,
    0,    0,    0,   33,    0,   37,    0,    0,   37,   37,
    0,    0,    0,    0,   38,    0,    0,   38,   38,   40,
    0,    0,   40,   40,    0,   39,    0,    0,   39,   39,
    0,    0,    0,    0,   53,   54,   55,   56,   57,    0,
    0,    0,    0,   53,   54,   55,   56,   57,    0,    0,
   53,   54,   55,   56,    0,    0,    0,   53,   54,   55,
    0,    0,    0,    0,    0,   54,   55,    0,    0,   35,
    0,    0,   35,   35,   36,    0,    0,   36,   36,    0,
    0,    0,   43,   43,   41,   41,    0,   42,
};
static const short yycheck[] = {                         33,
  278,   41,   37,   44,   44,  278,   40,   42,   44,   43,
   37,   45,   47,   44,   41,   42,   43,   44,   45,   37,
   47,   44,   61,   41,   42,   43,   44,   45,   41,   47,
   37,   44,   59,  279,   41,   42,   43,   44,   45,   37,
   47,   59,   44,   41,   42,   43,   59,   45,   37,   47,
  278,   44,   59,   42,   43,   37,   45,   59,   47,   61,
   42,   43,   37,   45,   93,   47,   59,   42,   43,   37,
   45,  278,   47,   61,   42,   43,   40,   45,   41,   47,
   43,   44,   45,   41,  125,   43,   44,   45,   41,  125,
   41,   44,   41,   44,  125,   44,   59,   61,  125,    6,
   44,   59,  125,   91,   44,   44,   59,  125,   59,   22,
   59,   18,  125,   44,   44,   59,   44,   91,  125,   59,
   59,   34,   41,  123,   37,   44,  279,   91,   59,   59,
  278,   59,  258,  259,  260,  261,  258,  259,  260,  261,
   53,   48,  123,   56,   57,   58,   59,   60,   61,   62,
  272,  279,  280,  283,  284,   35,   36,   61,   65,   93,
  125,   83,  125,  125,   65,   20,   23,  125,   -1,   -1,
   -1,   84,  125,   -1,  125,   -1,  125,   90,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  273,
  274,   -1,   -1,   -1,   -1,  279,  280,  281,  283,  284,
   -1,   -1,   -1,  287,   -1,  282,   -1,   -1,  285,  286,
   -1,   -1,   -1,   -1,  282,   -1,   -1,  285,  286,  282,
   -1,   -1,  285,  286,   -1,  282,   -1,   -1,  285,  286,
   -1,   -1,   -1,   -1,  282,  283,  284,  285,  286,   -1,
   -1,   -1,   -1,  282,  283,  284,  285,  286,   -1,   -1,
  282,  283,  284,  285,   -1,   -1,   -1,  282,  283,  284,
   -1,   -1,   -1,   -1,   -1,  283,  284,   -1,   -1,  282,
   -1,   -1,  285,  286,  282,   -1,   -1,  285,  286,   -1,
   -1,   -1,  285,  286,  285,  286,   -1,  286,
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
"stat : S",
"stat :",
"para : para ',' type ID",
"para : type ID",
"para :",
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
#line 100 "parser.y"
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

#line 355 "y.tab.c"

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
