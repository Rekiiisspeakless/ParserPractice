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
    5,    5,    5,    5,    5,    5,    5,    5,    5,   12,
   13,   10,   10,   11,   14,   14,    9,    9,    4,    4,
    4,   15,   15,    1,    1,   16,   16,   19,   19,   20,
   20,   20,   17,   17,   18,   18,   22,   22,   21,   21,
   21,    3,    3,    3,    3,    7,    7,   23,   23,   23,
   23,   23,   23,   23,   23,   23,   23,   23,   23,   23,
   23,   23,   23,   23,   23,   23,   23,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,   24,   24,   24,   25,   25,
};
static const short yylen[] = {                            2,
    2,    2,    0,    8,    8,    4,    3,    5,    9,    0,
    5,    3,    2,    2,    2,    2,    2,    2,    2,    7,
    9,    7,   11,   11,    1,    0,    3,    0,    3,    1,
    0,    2,    6,    3,    4,    4,    0,    4,    0,    3,
    0,    1,    3,    1,    3,    1,    3,    1,    3,    1,
    6,    1,    1,    1,    1,    3,    1,    3,    2,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    2,    1,
    1,    1,    1,    1,    1,    5,    1,    3,    2,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    2,    1,
    1,    1,    1,    1,    1,    2,    2,    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,    0,   52,   53,   55,   54,    0,    1,    2,    0,
    0,    0,    0,    0,   44,    0,    0,    0,   46,    0,
    0,    0,   34,    0,    0,    0,   30,    0,   35,    0,
    0,    0,   93,   92,   95,   99,  100,   90,   91,    0,
    0,    0,    0,    0,   94,   98,    0,   43,    0,    0,
    0,    0,   45,    0,    0,    0,   96,   97,    0,    0,
   80,   79,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   29,    0,    0,    0,   78,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   51,    0,    0,    0,    0,    0,    0,   18,
   19,    0,    0,    0,   13,    5,    0,   14,   15,   16,
   17,    0,    0,    4,   33,    0,    0,    0,    0,    0,
    0,   73,   72,    0,   70,   71,    0,    0,    7,   77,
    0,    0,   74,    0,    0,    0,   12,   36,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    6,    0,
   60,   59,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   38,    0,    0,    0,    0,    0,    0,    0,
    0,   58,    0,    0,    0,    0,    0,    0,    0,    0,
   56,   11,    8,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   20,    0,    0,   27,    0,   76,    0,    0,
    0,    0,    0,   21,    0,    9,    0,    0,   24,   23,
};
static const short yydgoto[] = {                          1,
   93,    9,   94,   26,   95,   96,  141,  126,  180,   97,
   98,   99,  100,  127,   27,   74,   14,   18,  103,  150,
   15,   19,  142,   45,   46,
};
static const short yysindex[] = {                         0,
  255, -274,    0,    0,    0,    0,   89,    0,    0, -265,
  -25, -252,  -20,  -43,    0,   89,  -19,  -42,    0, -162,
   89,  -22,    0, -152, -141,  -38,    0,  -22,    0, -252,
   58,  195,    0,    0,    0,    0,    0,    0,    0,  -22,
 -117, -117,  -22,  164,    0,    0,    8,    0,   53,   35,
   89,  164,    0,   80,   46,  442,    0,    0,   60,  -22,
    0,    0,  -22,  -22,  -22,  -22,  -22,  -22,  -22, -105,
  549,    0,  -94,  131,  549,    0,  -12,  442,  424,  -23,
  -23,  -46,  -46,  -46,  104,  159,  163,   92,  168,  158,
  167,   -2,  549, -152,  119,  196,  549,  549,  549,  549,
  171,  152,    0,  141,   80,  -22,  -22,  549,  -22,    0,
    0,  -22,  -33,  -11,    0,    0,  549,    0,    0,    0,
    0,   80,  -22,    0,    0,  164,  220,   69,  165,   78,
   85,    0,    0,  -31,    0,    0,    4,    4,    0,    0,
  253,   96,    0,  261,  240,  105,    0,    0,  164,  -39,
  -22,  192,   55,  198,  237,  -22,  449,  112,    0,    4,
    0,    0,    4,    4,    4,    4,    4,    4,    4,    4,
  549,  549,    0,  -22,  273,  549,  300,  549,  -22,  296,
  123,    0,  456,  449,  435,    3,    3,  -10,  -10,  -10,
    0,    0,    0,  164,  -22,  233,  -22,  241,  130,  -22,
  237,  324,    0,  139,  116,    0,  146,    0,  262,  325,
  263,  549,  549,    0,  549,    0,  268,  275,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    7,    0,    0,  209,  135,    0,    0,    0,
  209,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  183,    0,    0,    7,    0,  254,    0,
    0,  184,    0,  143,    0,  333,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  279,    0,    0,  190,  279,    0,  248,  416,  466,  358,
  461,   11,   20,   31,    0,    0,    0,    0,    0,    0,
    0,    0,  279,    0,    0,    0,  279,  279,  279,  279,
    0,    0,    0,    0,  315,  351,    0,  279,    0,    0,
    0,    0,    0,    0,    0,    0,  279,    0,    0,    0,
    0,  259,  -17,    0,    0,   59,    0,    0,    0,    0,
    0,    0,    0,   40,    0,    0,    0,    0,    0,    0,
    0,  370,    0,  153,    0,    0,    0,    0,  -16,    0,
  351,    0,    0,    0,  -19,    0,   -5,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  279,  279,    0,    0,    0,  279,    0,  279,    0,    0,
    0,    0,   90,  169,    2,  286,  399,  177,  188,  267,
    0,    0,    0,   36,  377,    0,    0,    0,    0,    0,
   51,    0,    0,    0,  339,    0,    0,    0,    0,    0,
    0,  279,  279,    0,  279,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  418,    0,  510,  406,  558,  590,  250,  515,  232,    0,
    0,    0,    0,  -60,  383,   24,    0,    0,    0,    0,
  417,  415,  637,  624,  297,
};
#define YYTABLESIZE 827
static const short yytable[] = {                        137,
   24,   30,   50,   11,  174,   51,  138,  139,  113,   41,
   40,   42,   13,   69,   16,   23,   29,   43,   67,   21,
   41,   40,   42,   68,   69,   17,   41,   42,   43,   67,
   65,   41,   66,   42,   68,   69,  137,  113,   69,  169,
   22,   28,   68,  138,  167,   68,   41,   83,   42,  168,
   50,   83,   83,   83,   83,   83,   84,   83,  114,  156,
   84,   84,   84,   84,   84,   50,   84,   85,   22,   83,
   20,   85,   85,   85,   85,   85,   75,   85,   84,   40,
   75,   75,   75,   75,   75,  173,   75,   28,  112,   85,
  175,   28,   28,   28,   28,   28,   69,   28,   20,   25,
   76,   67,   65,   83,   66,   69,   68,   41,   42,  152,
   67,   65,   84,   66,   69,   68,   31,   25,  154,   67,
   65,   69,   66,   85,   68,   47,   67,   65,  125,   66,
   66,   68,  169,   66,  202,   83,   49,  167,  165,  170,
  166,   69,  168,   70,   84,  148,   67,   65,  169,   66,
   54,   68,  182,  167,  165,   85,  166,   71,  168,   69,
   40,   36,   37,  172,   67,   65,   69,   66,   75,   68,
   73,   67,   65,   85,   66,   69,   68,  155,   48,  210,
   67,   65,   69,   66,  101,   68,   37,   67,   65,   95,
   66,  102,   68,   48,   95,   95,  105,   95,  106,   95,
   69,   37,  107,   37,  212,   67,   65,  109,   66,   67,
   68,   95,   67,   63,  108,  201,  110,   63,   63,   63,
   63,   63,  206,   63,   64,  111,   49,   47,   64,   64,
   64,   64,   64,   39,   64,   55,   61,   62,   51,  132,
  133,   49,   47,  116,  134,   36,   37,  135,   39,   31,
   33,   34,   31,  136,  117,   35,   36,   37,   38,   61,
   62,   33,   34,  122,   39,  124,  144,   36,   37,   38,
   61,   62,  161,  162,  123,   39,  132,  133,  151,   69,
   69,  134,   36,   37,  135,  161,  162,   68,   86,  153,
  136,   86,   83,  159,   32,   83,   83,   32,  171,   37,
  113,   84,   37,   65,   84,   84,   86,   65,   65,   65,
   65,   65,   85,   65,  176,   85,   85,   37,  177,   37,
  178,   75,   75,   75,   75,   75,   61,  179,   61,   61,
   61,  195,   28,   28,   28,   28,   28,   57,   58,  197,
   86,   60,   61,   62,   63,   64,    3,    4,    5,    6,
   60,   61,   62,   63,   64,   37,  200,  203,   37,   60,
   61,   62,   63,   64,  209,  205,   60,   61,   62,   63,
   64,   66,   86,   89,   66,   66,   89,  160,  161,  162,
  163,  164,  211,  214,  213,  215,   60,   61,   62,   63,
   64,   89,  219,  160,  161,  162,  163,  164,   81,  220,
   81,   81,   81,   10,   60,   61,   62,   63,   64,   26,
   57,   60,   61,   62,   63,   64,   81,   26,    8,  191,
   60,   61,   62,   63,   64,   89,   32,   60,   61,   62,
   63,   64,  208,   72,   95,   95,   95,   95,   95,   62,
   48,   62,   62,   62,   53,   60,   61,   62,   63,   64,
   81,    0,    0,   67,   67,    0,   87,   89,   63,   87,
   69,   63,   63,   22,    0,   67,   65,    0,   66,   64,
   68,  169,   64,   64,   87,    0,  167,  165,   69,  166,
    0,  168,   81,   67,   65,  169,   66,    0,   68,    0,
  167,  165,  169,  166,    0,  168,    0,  167,  165,    0,
  166,   82,  168,   82,   82,   82,   88,    0,   87,   88,
   10,    2,    3,    4,    5,    6,   12,    0,    0,   82,
    0,    0,    0,    0,   88,   25,    7,    0,    0,   86,
   25,    0,   86,   86,    0,    0,   44,    0,    0,    0,
   87,    0,   52,    0,    0,    0,    0,    0,   65,    0,
    0,   65,   65,   82,   56,    0,    0,   59,   88,    0,
   25,    0,    0,    0,    0,    0,    0,   61,    0,    0,
   61,   61,    0,    0,   77,    0,    0,   78,   79,   80,
   81,   82,   83,   84,    0,   82,    0,    0,    0,    0,
   88,    0,    0,    0,    0,    0,   22,   22,   22,   22,
    0,   22,   22,   22,   22,    0,    0,    0,   22,   22,
   22,    0,    0,    0,    0,    0,   22,   89,   89,    0,
    0,  128,    0,  130,    0,    0,  131,    0,  146,    0,
    0,    0,  104,    0,    0,    0,    0,  149,    0,   81,
    0,    0,   81,   81,    0,    0,    0,    0,    0,    0,
  115,    0,    0,    0,  118,  119,  120,  121,    0,    0,
    0,    0,    0,    0,    0,  129,    0,    0,    0,    0,
  181,    0,    0,    0,  147,    0,    0,    0,    0,    0,
   62,    0,    0,   62,   62,    0,    0,    0,  194,    0,
    0,    0,    0,  199,    0,    0,    0,    0,    0,    0,
   87,   87,  140,  145,    0,   60,   61,   62,   63,    0,
    0,  204,    0,    0,  207,    0,  160,  161,  162,  163,
    0,    0,    0,   60,   61,   62,  140,  140,  192,  193,
  160,  161,  162,  196,    0,  198,  143,    0,  161,  162,
    0,    0,   82,    0,    0,   82,   82,    0,    0,  140,
    0,   88,  140,  140,  140,  140,  140,  140,  140,  140,
  143,  143,    0,    0,    0,    0,    0,    0,    0,  216,
  217,    0,  218,  157,  158,    0,    0,    0,    0,    0,
    0,    0,    0,  143,    0,    0,  143,  143,  143,  143,
  143,  143,  143,  143,    0,    0,  183,    0,    0,  184,
  185,  186,  187,  188,  189,  190,    3,    4,    5,    6,
    0,   86,   87,   88,   89,    0,    0,    0,   90,   91,
    7,    0,    0,    0,    0,    0,   92,
};
static const short yycheck[] = {                         33,
   44,   44,   41,  278,   44,   44,   40,   41,   40,   43,
   33,   45,  278,   37,   40,   59,   59,   40,   42,   40,
   43,   33,   45,   47,   37,  278,   44,   44,   40,   42,
   43,   43,   45,   45,   47,   41,   33,   40,   44,   37,
   61,   61,   41,   40,   42,   44,   43,   37,   45,   47,
   44,   41,   42,   43,   44,   45,   37,   47,   61,   91,
   41,   42,   43,   44,   45,   59,   47,   37,   61,   59,
   91,   41,   42,   43,   44,   45,   37,   47,   59,   44,
   41,   42,   43,   44,   45,  125,   47,   37,   91,   59,
  151,   41,   42,   43,   44,   45,   37,   47,   91,   41,
   41,   42,   43,   93,   45,   37,   47,  125,  125,   41,
   42,   43,   93,   45,   37,   47,  279,   59,   41,   42,
   43,   37,   45,   93,   47,  278,   42,   43,  105,   45,
   41,   47,   37,   44,  195,  125,  278,   42,   43,   44,
   45,   37,   47,   91,  125,  122,   42,   43,   37,   45,
   93,   47,   41,   42,   43,  125,   45,  123,   47,   37,
  125,  279,  280,   59,   42,   43,   37,   45,  123,   47,
   91,   42,   43,  279,   45,   37,   47,   93,   44,   41,
   42,   43,   37,   45,  279,   47,   44,   42,   43,   37,
   45,   61,   47,   59,   42,   43,   93,   45,   40,   47,
   37,   59,   40,   61,   59,   42,   43,   40,   45,   41,
   47,   59,   44,   37,  123,   93,   59,   41,   42,   43,
   44,   45,   93,   47,   37,   59,   44,   44,   41,   42,
   43,   44,   45,   44,   47,   41,  283,  284,   44,  273,
  274,   59,   59,  125,  278,  279,  280,  281,   59,   41,
  273,  274,   44,  287,   59,  278,  279,  280,  281,  283,
  284,  273,  274,   93,  287,  125,  278,  279,  280,  281,
  283,  284,  283,  284,  123,  287,  273,  274,   59,  285,
  286,  278,  279,  280,  281,  283,  284,  286,   41,  125,
  287,   44,  282,   41,   41,  285,  286,   44,   59,   41,
   40,  282,   44,   37,  285,  286,   59,   41,   42,   43,
   44,   45,  282,   47,  123,  285,  286,   59,  264,   61,
  123,  282,  283,  284,  285,  286,   41,   91,   43,   44,
   45,   59,  282,  283,  284,  285,  286,   41,   42,   40,
   93,  282,  283,  284,  285,  286,  258,  259,  260,  261,
  282,  283,  284,  285,  286,   41,   61,  125,   44,  282,
  283,  284,  285,  286,   41,  125,  282,  283,  284,  285,
  286,  282,  125,   41,  285,  286,   44,  282,  283,  284,
  285,  286,  267,   59,  123,  123,  282,  283,  284,  285,
  286,   59,  125,  282,  283,  284,  285,  286,   41,  125,
   43,   44,   45,  125,  282,  283,  284,  285,  286,   59,
   41,  282,  283,  284,  285,  286,   59,   41,    1,  170,
  282,  283,  284,  285,  286,   93,   21,  282,  283,  284,
  285,  286,  201,   51,  282,  283,  284,  285,  286,   41,
   24,   43,   44,   45,   30,  282,  283,  284,  285,  286,
   93,   -1,   -1,  285,  286,   -1,   41,  125,  282,   44,
   37,  285,  286,  125,   -1,   42,   43,   -1,   45,  282,
   47,   37,  285,  286,   59,   -1,   42,   43,   37,   45,
   -1,   47,  125,   42,   43,   37,   45,   -1,   47,   -1,
   42,   43,   37,   45,   -1,   47,   -1,   42,   43,   -1,
   45,   41,   47,   43,   44,   45,   41,   -1,   93,   44,
    1,  257,  258,  259,  260,  261,    7,   -1,   -1,   59,
   -1,   -1,   -1,   -1,   59,   16,  272,   -1,   -1,  282,
   21,   -1,  285,  286,   -1,   -1,   22,   -1,   -1,   -1,
  125,   -1,   28,   -1,   -1,   -1,   -1,   -1,  282,   -1,
   -1,  285,  286,   93,   40,   -1,   -1,   43,   93,   -1,
   51,   -1,   -1,   -1,   -1,   -1,   -1,  282,   -1,   -1,
  285,  286,   -1,   -1,   60,   -1,   -1,   63,   64,   65,
   66,   67,   68,   69,   -1,  125,   -1,   -1,   -1,   -1,
  125,   -1,   -1,   -1,   -1,   -1,  258,  259,  260,  261,
   -1,  263,  264,  265,  266,   -1,   -1,   -1,  270,  271,
  272,   -1,   -1,   -1,   -1,   -1,  278,  285,  286,   -1,
   -1,  107,   -1,  109,   -1,   -1,  112,   -1,  114,   -1,
   -1,   -1,   75,   -1,   -1,   -1,   -1,  123,   -1,  282,
   -1,   -1,  285,  286,   -1,   -1,   -1,   -1,   -1,   -1,
   93,   -1,   -1,   -1,   97,   98,   99,  100,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  108,   -1,   -1,   -1,   -1,
  156,   -1,   -1,   -1,  117,   -1,   -1,   -1,   -1,   -1,
  282,   -1,   -1,  285,  286,   -1,   -1,   -1,  174,   -1,
   -1,   -1,   -1,  179,   -1,   -1,   -1,   -1,   -1,   -1,
  285,  286,  113,  114,   -1,  282,  283,  284,  285,   -1,
   -1,  197,   -1,   -1,  200,   -1,  282,  283,  284,  285,
   -1,   -1,   -1,  282,  283,  284,  137,  138,  171,  172,
  282,  283,  284,  176,   -1,  178,  113,   -1,  283,  284,
   -1,   -1,  282,   -1,   -1,  285,  286,   -1,   -1,  160,
   -1,  286,  163,  164,  165,  166,  167,  168,  169,  170,
  137,  138,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  212,
  213,   -1,  215,  137,  138,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  160,   -1,   -1,  163,  164,  165,  166,
  167,  168,  169,  170,   -1,   -1,  160,   -1,   -1,  163,
  164,  165,  166,  167,  168,  169,  258,  259,  260,  261,
   -1,  263,  264,  265,  266,   -1,   -1,   -1,  270,  271,
  272,   -1,   -1,   -1,   -1,   -1,  278,
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
"function_var : ID '(' lots_of_expression_var ')'",
"function_var : ID '(' ')'",
"stat : ID '=' expression ';' stat",
"stat : ID '[' expression ']' stat_element_dim '=' expression ';' stat",
"stat :",
"stat : ID '=' function_var ';' stat",
"stat : function_var ';' stat",
"stat : S stat",
"stat : if_stat stat",
"stat : for_loop stat",
"stat : while_stat stat",
"stat : do_while_stat stat",
"stat : KBREAK ';'",
"stat : KCONTINUE ';'",
"while_stat : KWHILE '(' expression ')' '{' stat '}'",
"do_while_stat : KDO '{' stat '}' KWHILE '(' expression ')' ';'",
"if_stat : KIF '(' expression ')' '{' stat '}'",
"if_stat : KIF '(' expression ')' '{' stat '}' KELSE '{' stat '}'",
"for_loop : KFOR '(' for_loop_para ';' for_loop_para ';' for_loop_para ')' '{' stat '}'",
"for_loop_para : expression",
"for_loop_para :",
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
"lots_of_expression_var : expression_var ',' lots_of_expression_var",
"lots_of_expression_var : expression_var",
"expression_var : '(' expression_var ')'",
"expression_var : expression_var DOUBLE_PLUS",
"expression_var : expression_var DOUBLE_MINUS",
"expression_var : expression_var '+' expression_var",
"expression_var : expression_var '-' expression_var",
"expression_var : expression_var '*' expression_var",
"expression_var : expression_var '/' expression_var",
"expression_var : expression_var '%' expression_var",
"expression_var : expression_var COMPARE expression_var",
"expression_var : expression_var AND expression_var",
"expression_var : expression_var OR expression_var",
"expression_var : '!' expression_var",
"expression_var : CHAR",
"expression_var : STRING",
"expression_var : KFALSE",
"expression_var : KTRUE",
"expression_var : UNUM",
"expression_var : ID",
"expression_var : ID '[' expression ']' stat_element_dim",
"expression_var : function_var",
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
#line 157 "parser.y"
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

#line 546 "y.tab.c"

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
