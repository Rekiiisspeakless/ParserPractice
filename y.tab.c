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
int function_main_flag = 0;
#line 26 "y.tab.c"

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
    9,    9,    8,    8,    8,    8,    8,    8,   10,   10,
   10,   10,   10,   10,   10,   15,   15,   19,   19,   20,
   22,   22,   21,   21,   13,   14,   11,   11,   12,   23,
   23,   18,   18,    4,    4,    4,   24,   24,    1,    1,
   25,   25,   28,   28,   29,   29,   29,   26,   26,   27,
   27,   31,   30,   30,   30,    3,    3,    3,    3,    7,
    7,   17,   17,   17,   17,   17,   17,   17,   17,   17,
   17,   17,   17,   17,   17,   17,   17,   17,   17,   17,
   17,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   32,
   32,   32,   33,   33,
};
static const short yylen[] = {                            2,
    2,    2,    0,    8,    8,    4,    3,    2,    2,    0,
    2,    0,    2,    1,    1,    1,    1,    1,    3,    7,
    3,    1,    1,    1,    2,    7,    7,    5,    3,    5,
    5,    0,    1,    1,    7,    9,    7,   11,   11,    1,
    0,    3,    0,    3,    1,    0,    2,    6,    3,    4,
    4,    0,    4,    0,    3,    0,    1,    3,    1,    3,
    1,    3,    3,    1,    6,    1,    1,    1,    1,    3,
    1,    3,    2,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    2,    1,    1,    1,    1,    1,    1,    5,
    1,    3,    2,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    2,    1,    1,    1,    1,    1,    1,    2,
    2,    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,    0,   66,   67,   69,   68,    0,    1,    2,    0,
    0,    0,    0,    0,   59,    0,    0,    0,   61,    0,
    0,    0,   49,    0,    0,    0,   45,    0,   50,    0,
    0,    0,  107,  106,  109,  113,  114,  104,  105,    0,
    0,    0,    0,    0,  108,  112,    0,   58,    0,    0,
    0,    0,   60,    0,    0,    0,  110,  111,    0,    0,
   94,   93,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   44,    0,    0,    0,   92,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   23,   24,    0,    0,    0,    0,   22,    0,    0,
   14,   15,   16,   17,   18,    0,    0,   65,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    9,
    5,    8,   13,    0,    0,    4,   48,    0,    0,    0,
    0,    0,    0,   87,   86,    0,   84,   85,    0,    0,
   91,    0,   88,    7,    0,    0,    0,   21,    0,   51,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   74,   73,    0,    0,    0,    0,    0,    0,    0,
    0,    6,    0,   53,    0,    0,    0,    0,    0,    0,
    0,   72,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   70,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   35,    0,    0,   34,
   33,    0,    0,   26,   27,   90,   42,    0,    0,    0,
    0,    0,    0,   29,    0,   36,    0,    0,   11,    0,
    0,    0,   28,   30,   39,   38,    0,    0,    0,   31,
};
static const short yydgoto[] = {                          1,
   95,    9,   96,   26,   97,  141,  145,   99,  224,  100,
  101,  102,  103,  104,  105,  128,  146,  192,  233,  202,
  212,  234,  129,   27,   74,   14,   18,  108,  152,   15,
   19,   45,   46,
};
static const short yysindex[] = {                         0,
  388, -263,    0,    0,    0,    0, -255,    0,    0, -227,
   84, -119,   -2,   74,    0, -255,  111,  105,    0, -100,
 -255,  -22,    0,  -94,  -78,  129,    0,  -22,    0, -119,
  109,  154,    0,    0,    0,    0,    0,    0,    0,  -22,
 -211, -211,  -22,  182,    0,    0,  -45,    0,  121,  100,
 -255,  182,    0,  139,  110,  391,    0,    0,   58,  -22,
    0,    0,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -35,
  522,    0,  -26,  214,  522,    0,  -12,  391,  189,  -23,
  -23, -206, -206, -206,  188,  250,  279,  165,  293,  297,
  -22,    0,    0,   86,  522,  -94,  183,    0,  522,  258,
    0,    0,    0,    0,    0,  245,  216,    0,  220,  139,
  -22,  -22,  522,  -22,   68,  182,  -11,  -33,    4,    0,
    0,    0,    0,  139,  -22,    0,    0,  182,  288,   69,
  223,   78,  308,    0,    0,  -31,    0,    0,  -11,  -11,
    0,   85,    0,    0,  309,   92,  316,    0,  182,    0,
  182,  -27,  -22,  234,   94,  236,  242,  -11,  398,  101,
  -11,    0,    0,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
  275,    0,  -11,    0,  -22,  313,  522,  339,  522,   -3,
  108,    0,  409,  398,  285,    3,    3,   -4,   -4,   -4,
  -11,  319,    0,  182,  -22,  256,  -22,  263, -240,  331,
  270,  271,  275,  115,  -22,  362,    0,  124,  137,    0,
    0,  347,  365,    0,    0,    0,    0,  182,  289,  357,
  294,  365,  365,    0,  522,    0,  522,   23,    0,  300,
  301, -240,    0,    0,    0,    0,  360,  365,   23,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  132,    0,    0,  198,    0,    0,    0,    0,
  198,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  184,    0,    0,  132,    0,  268,    0,
    0,  191,    0,  152,    0,  257,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  307,    0,    0,  205,  307,    0,  248,  277,   43,  370,
  434,   29,   38,   49,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  307,    0,    0,    0,  307,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  269,
  378,    0,  307,    0,    0,  380,    0,    0,    0,    0,
    0,    0,    0,  459,  -18,    0,    0,  -39,    0,    0,
    0,    0,    0,    0,    0,   11,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  401,  138,    0,  390,    0,
  -16,    0,  378,    0,    0,    0,    0,    0,  453,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  358,    0,    0,    0,    0,    0,  307,    0,  307,    0,
    0,    0,  416,  455,  457,  439,  444,  145,  162,  173,
    0,    0,    0,   -8,  412,    0,    0,    0,    0,    0,
    0,    0,   20,    0,    0,    0,    0,    0,  325,    0,
    0,    0,  336,    0,    0,    0,    0,  403,    0,    0,
    0,  -83,  -83,    0,  307,    0,  307,  338,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -83,  338,    0,
};
static const short yygindex[] = {                         0,
  468,    0,  501,  449,  432,  441,  303,  -82,   -1,    0,
    0,    0,    0,    0,    0,  513,  605,  278,  306,    0,
  259,  251, -152,  454,  -97,    0,    0,    0,    0,  480,
  462,  588,  284,
};
#define YYTABLESIZE 800
static const short yytable[] = {                        139,
  176,   40,    3,    4,    5,    6,  140,  144,  118,   41,
   40,   42,  127,   69,   11,   22,  175,   43,   67,   40,
   41,  139,   42,   68,   69,   56,  150,   57,  140,   67,
   65,   41,   66,   42,   68,   55,   40,   21,  210,  170,
  211,   12,  206,   43,  168,   20,   41,   89,   42,  169,
   13,   89,   89,   89,   89,   89,   43,   89,   22,  158,
   43,   43,   43,   43,   43,   97,   43,   36,   37,   97,
   97,   97,   97,   97,   98,   97,   61,   62,   98,   98,
   98,   98,   98,  102,   98,   99,  102,   97,   20,   99,
   99,   99,   99,   99,   69,   99,   98,  174,   76,   67,
   65,  102,   66,   89,   68,   69,   56,   99,   57,  154,
   67,   65,   43,   66,   69,   68,   55,   24,  156,   67,
   65,  170,   66,   16,   68,  118,  168,  166,  170,  167,
  223,  169,   23,  168,  166,  173,  167,  170,  169,  223,
  223,  182,  168,  166,  170,  167,  119,  169,   30,  168,
  166,  170,  167,   97,  169,  223,  168,  166,   17,  167,
   69,  169,   98,   29,  220,   67,   65,  102,   66,   50,
   68,   28,   51,   99,  109,   64,  117,  171,   31,  109,
  109,   77,  109,   47,  109,   77,   77,   77,   77,   77,
   64,   77,   12,   12,   55,   52,  109,   51,   78,   49,
  203,   54,   78,   78,   78,   78,   78,  217,   78,   79,
   52,   70,   52,   79,   79,   79,   79,   79,   69,   79,
  228,  229,   71,   67,   65,   69,   66,   63,   68,   73,
   67,   65,   75,   66,   62,   68,  239,   77,   46,  134,
  135,   46,   63,   85,  136,   36,   37,  137,   54,   62,
   33,   34,  106,  138,   78,   35,   36,   37,   38,   61,
   62,  134,  135,   54,   39,   79,  136,   36,   37,  137,
   61,   62,  199,  200,  107,  138,   33,   34,  162,  163,
  110,  147,   36,   37,   38,  162,  163,  113,  100,  111,
   39,  100,   89,   89,   89,   89,   89,  103,  232,  200,
  103,   43,   43,   43,   43,   43,  100,  121,   47,   52,
   97,   47,   52,   97,   97,  103,  123,  101,  112,   98,
  101,  170,   98,   98,   57,   58,  168,  166,  102,  167,
   99,  169,  114,   99,   99,  101,  115,  124,  125,   60,
   61,   62,   63,   64,  126,  133,  153,  155,  157,  172,
   60,   61,   62,   63,   64,  118,  177,  178,  179,   60,
   61,   62,   63,   64,  180,  191,  161,  162,  163,  164,
  165,  195,  100,  161,  162,  163,  164,  165,  197,  205,
  207,  103,  161,  162,  163,  164,  165,  209,  213,  161,
  162,  163,  164,  165,  214,  215,  161,  162,  163,  164,
  165,  101,  219,  221,  222,   60,   61,   62,   63,   64,
   95,  225,   95,   95,   95,  226,  227,  238,   43,  109,
  109,  109,  109,  109,  235,  236,   77,   69,   95,   77,
   77,   10,   67,   65,  170,   66,   41,   68,   25,  168,
  166,   71,  167,   78,  169,  170,   78,   78,   19,   37,
  168,  166,   41,  167,   79,  169,   80,   79,   79,   80,
   12,   20,   32,   60,   61,   62,   63,   64,    8,   32,
   60,   61,   62,   63,   96,  193,   96,   96,   96,   75,
  216,   75,   75,   75,   76,  201,   76,   76,   76,  240,
  237,   53,   96,   83,   95,   81,   83,   82,   81,   52,
   82,   10,   52,   48,   72,    0,  109,   12,   80,    0,
    0,   98,    0,    0,    0,   98,   25,   52,    0,   52,
    0,   25,    0,    0,    0,    0,  120,    0,    0,  100,
  122,   75,  100,  100,   44,   98,   76,    0,    0,   98,
   52,  103,  103,    0,  131,   83,    0,   81,    0,   82,
    0,   25,   56,   98,    0,   59,    0,    0,   96,  148,
    0,  101,  101,    0,    0,    0,  161,  162,  163,  164,
    0,    0,   77,    0,    0,   78,   79,   80,   81,   82,
   83,   84,   37,   37,   37,   37,    0,   37,   37,   37,
   37,    0,   37,   37,   37,   37,   37,    0,    0,    0,
   37,   37,   37,  116,    0,    0,    0,    0,  196,    0,
  198,    0,    0,    0,    0,    0,    0,   98,    0,   98,
    0,    0,    0,    0,  130,    0,  132,   86,   87,   88,
   89,  149,   90,   91,   92,   93,    0,  151,    0,    0,
    0,    0,   94,    0,    2,    3,    4,    5,    6,    0,
    0,   95,    0,   98,   95,   95,  230,    0,  231,    7,
    0,    0,   98,   98,    0,   98,    0,   98,    0,    0,
    0,    0,   60,   61,   62,    0,    0,    0,   98,  161,
  162,  163,    0,    0,    0,    0,    0,  194,    0,    0,
    0,  162,  163,    0,    0,    0,    0,   80,    0,    0,
   80,   80,    0,    0,  143,  143,    0,    0,    0,  208,
    0,    0,    0,    0,    0,   96,    0,  218,   96,   96,
   75,  142,    0,   75,   75,   76,  143,  143,   76,   76,
    0,    0,    0,    0,    0,    0,    0,   83,   83,   81,
   81,    0,   82,  159,  160,  143,    0,    0,  143,    0,
    0,  143,  143,  143,  143,  143,  143,  143,    0,    0,
  143,    0,  181,    0,    0,  183,    0,    0,  184,  185,
  186,  187,  188,  189,  190,    0,    0,    0,  143,    3,
    4,    5,    6,    0,   86,   87,   88,   89,    0,   90,
   91,   92,   93,    7,    0,  204,    0,    0,    0,   94,
};
static const short yycheck[] = {                         33,
  153,   41,  258,  259,  260,  261,   40,   41,   40,   43,
   33,   45,  110,   37,  278,   61,   44,   40,   42,   59,
   43,   33,   45,   47,   37,   44,  124,   44,   40,   42,
   43,   43,   45,   45,   47,   44,   33,   40,  279,   37,
  281,  125,  195,   40,   42,   91,   43,   37,   45,   47,
  278,   41,   42,   43,   44,   45,   37,   47,   61,   91,
   41,   42,   43,   44,   45,   37,   47,  279,  280,   41,
   42,   43,   44,   45,   37,   47,  283,  284,   41,   42,
   43,   44,   45,   41,   47,   37,   44,   59,   91,   41,
   42,   43,   44,   45,   37,   47,   59,  125,   41,   42,
   43,   59,   45,   93,   47,   37,  125,   59,  125,   41,
   42,   43,   93,   45,   37,   47,  125,   44,   41,   42,
   43,   37,   45,   40,   47,   40,   42,   43,   37,   45,
  213,   47,   59,   42,   43,   44,   45,   37,   47,  222,
  223,   41,   42,   43,   37,   45,   61,   47,   44,   42,
   43,   37,   45,  125,   47,  238,   42,   43,  278,   45,
   37,   47,  125,   59,   41,   42,   43,  125,   45,   41,
   47,   61,   44,  125,   37,   44,   91,   93,  279,   42,
   43,   37,   45,  278,   47,   41,   42,   43,   44,   45,
   59,   47,  276,  277,   41,   44,   59,   44,   37,  278,
   93,   93,   41,   42,   43,   44,   45,   93,   47,   37,
   59,   91,   61,   41,   42,   43,   44,   45,   37,   47,
  222,  223,  123,   42,   43,   37,   45,   44,   47,   91,
   42,   43,  123,   45,   44,   47,  238,   93,   41,  273,
  274,   44,   59,  279,  278,  279,  280,  281,   44,   59,
  273,  274,  279,  287,   93,  278,  279,  280,  281,  283,
  284,  273,  274,   59,  287,   93,  278,  279,  280,  281,
  283,  284,  276,  277,   61,  287,  273,  274,  283,  284,
   93,  278,  279,  280,  281,  283,  284,  123,   41,   40,
  287,   44,  282,  283,  284,  285,  286,   41,  276,  277,
   44,  282,  283,  284,  285,  286,   59,  125,   41,   41,
  282,   44,   44,  285,  286,   59,   59,   41,   40,  282,
   44,   37,  285,  286,   41,   42,   42,   43,  286,   45,
  282,   47,   40,  285,  286,   59,   40,   93,  123,  282,
  283,  284,  285,  286,  125,  278,   59,  125,   41,   41,
  282,  283,  284,  285,  286,   40,  123,  264,  123,  282,
  283,  284,  285,  286,  123,   91,  282,  283,  284,  285,
  286,   59,  125,  282,  283,  284,  285,  286,   40,   61,
  125,  125,  282,  283,  284,  285,  286,  125,   58,  282,
  283,  284,  285,  286,  125,  125,  282,  283,  284,  285,
  286,  125,   41,  267,   58,  282,  283,  284,  285,  286,
   41,  123,   43,   44,   45,   59,  123,   58,   61,  282,
  283,  284,  285,  286,  125,  125,  282,   37,   59,  285,
  286,  125,   42,   43,   37,   45,   59,   47,   59,   42,
   43,   41,   45,  282,   47,   37,  285,  286,   59,  125,
   42,   43,   41,   45,  282,   47,   41,  285,  286,   44,
  125,   59,  125,  282,  283,  284,  285,  286,    1,   21,
  282,  283,  284,  285,   41,  173,   43,   44,   45,   41,
  203,   43,   44,   45,   41,  180,   43,   44,   45,  239,
  232,   30,   59,   41,  125,   41,   44,   41,   44,   41,
   44,    1,   44,   24,   51,   -1,   75,    7,   93,   -1,
   -1,   71,   -1,   -1,   -1,   75,   16,   59,   -1,   61,
   -1,   21,   -1,   -1,   -1,   -1,   95,   -1,   -1,  282,
   99,   93,  285,  286,   22,   95,   93,   -1,   -1,   99,
   28,  285,  286,   -1,  113,   93,   -1,   93,   -1,   93,
   -1,   51,   40,  113,   -1,   43,   -1,   -1,  125,  119,
   -1,  285,  286,   -1,   -1,   -1,  282,  283,  284,  285,
   -1,   -1,   60,   -1,   -1,   63,   64,   65,   66,   67,
   68,   69,  258,  259,  260,  261,   -1,  263,  264,  265,
  266,   -1,  268,  269,  270,  271,  272,   -1,   -1,   -1,
  276,  277,  278,   91,   -1,   -1,   -1,   -1,  177,   -1,
  179,   -1,   -1,   -1,   -1,   -1,   -1,  177,   -1,  179,
   -1,   -1,   -1,   -1,  112,   -1,  114,  263,  264,  265,
  266,  119,  268,  269,  270,  271,   -1,  125,   -1,   -1,
   -1,   -1,  278,   -1,  257,  258,  259,  260,  261,   -1,
   -1,  282,   -1,  213,  285,  286,  225,   -1,  227,  272,
   -1,   -1,  222,  223,   -1,  225,   -1,  227,   -1,   -1,
   -1,   -1,  282,  283,  284,   -1,   -1,   -1,  238,  282,
  283,  284,   -1,   -1,   -1,   -1,   -1,  175,   -1,   -1,
   -1,  283,  284,   -1,   -1,   -1,   -1,  282,   -1,   -1,
  285,  286,   -1,   -1,  117,  118,   -1,   -1,   -1,  197,
   -1,   -1,   -1,   -1,   -1,  282,   -1,  205,  285,  286,
  282,  117,   -1,  285,  286,  282,  139,  140,  285,  286,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  285,  286,  285,
  286,   -1,  286,  139,  140,  158,   -1,   -1,  161,   -1,
   -1,  164,  165,  166,  167,  168,  169,  170,   -1,   -1,
  173,   -1,  158,   -1,   -1,  161,   -1,   -1,  164,  165,
  166,  167,  168,  169,  170,   -1,   -1,   -1,  191,  258,
  259,  260,  261,   -1,  263,  264,  265,  266,   -1,  268,
  269,  270,  271,  272,   -1,  191,   -1,   -1,   -1,  278,
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
0,0,0,"':'","';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"KVOID","KINT","KDOUBLE","KBOOL","KCHAR",
"KNULL","KFOR","KWHILE","KDO","KIF","KELSE","KSWITCH","KRETURN","KBREAK",
"KCONTINUE","KCONST","KTRUE","KFALSE","KSTRUCT","KCASE","KDEFAULT","ID","INT",
"DOUBLE","CHAR","COMPARE","DOUBLE_MINUS","DOUBLE_PLUS","AND","OR","STRING",
"unary","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program : program S",
"program : program function",
"program :",
"function : type ID '(' para ')' '{' full_stats '}'",
"function : KVOID ID '(' para ')' '{' full_stats '}'",
"function_var : ID '(' lots_of_expression_var ')'",
"function_var : ID '(' ')'",
"full_stats : stats full_stats",
"full_stats : S full_stats",
"full_stats :",
"nf : stats nf",
"nf :",
"stats : stat ';'",
"stats : if_stat",
"stats : for_loop",
"stats : while_stat",
"stats : do_while_stat",
"stats : switch_stat",
"stat : ID '=' expression",
"stat : ID '[' expression_var ']' stat_element_dim '=' expression",
"stat : ID '=' function_var",
"stat : function_var",
"stat : KBREAK",
"stat : KCONTINUE",
"stat : KRETURN expression",
"switch_stat : KSWITCH '(' ID ')' '{' default_stat '}'",
"switch_stat : KSWITCH '(' ID ')' '{' non_default_stat '}'",
"default_stat : KCASE const ':' nf default_stat",
"default_stat : KDEFAULT ':' nf",
"non_default_stat : KCASE const ':' nf non_default_case_stat",
"non_default_case_stat : KCASE const ':' nf non_default_case_stat",
"non_default_case_stat :",
"const : CHAR",
"const : INT",
"while_stat : KWHILE '(' expression ')' '{' full_stats '}'",
"do_while_stat : KDO '{' full_stats '}' KWHILE '(' expression ')' ';'",
"if_stat : KIF '(' expression ')' '{' full_stats '}'",
"if_stat : KIF '(' expression ')' '{' full_stats '}' KELSE '{' full_stats '}'",
"for_loop : KFOR '(' for_loop_para ';' for_loop_para ';' for_loop_para ')' '{' full_stats '}'",
"for_loop_para : expression",
"for_loop_para :",
"stat_element_dim : '[' expression_var ']'",
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
"expression_var : ID '[' expression_var ']' stat_element_dim",
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
#line 184 "parser.y"
int main(void)
{
	yyparse();
	if(function_main_flag == 0){
		yyerror(" ");
	}
	fprintf(stdout, "No syntax error!\n");
	return 0;
}
int yyerror(char* msg){
	fprintf(stderr, "***Error at line %d: %s\n",lineCount, curString);
	fprintf(stderr,"\n");
	fprintf(stderr, "Unmatched token: %s\n", yytext);
	fprintf(stderr, "***syntax error\n");
	exit(-1);
}

#line 571 "y.tab.c"

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
case 2:
#line 31 "parser.y"
	{function_main_flag = 1;}
break;
#line 777 "y.tab.c"
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
