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
    5,    5,    5,    5,    5,    5,    5,    5,    5,    5,
    5,   15,   15,   16,   16,   17,   19,   19,   18,   18,
   13,   14,   11,   11,   12,   20,   20,   10,   10,    4,
    4,    4,   21,   21,    1,    1,   22,   22,   25,   25,
   26,   26,   26,   23,   23,   24,   24,   28,   27,   27,
   27,    3,    3,    3,    3,    7,    7,    9,    9,    9,
    9,    9,    9,    9,    9,    9,    9,    9,    9,    9,
    9,    9,    9,    9,    9,    9,    9,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,   29,   29,   29,   30,   30,
};
static const short yylen[] = {                            2,
    2,    2,    0,    8,    8,    4,    3,    5,    9,    0,
    5,    3,    2,    2,    2,    2,    2,    3,    3,    4,
    2,    7,    7,    5,    3,    5,    5,    0,    1,    1,
    7,    9,    7,   11,   11,    1,    0,    3,    0,    3,
    1,    0,    2,    6,    3,    4,    4,    0,    4,    0,
    3,    0,    1,    3,    1,    3,    1,    3,    3,    1,
    6,    1,    1,    1,    1,    3,    1,    3,    2,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    2,    1,
    1,    1,    1,    1,    1,    5,    1,    3,    2,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    2,    1,
    1,    1,    1,    1,    1,    2,    2,    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,    0,   62,   63,   65,   64,    0,    1,    2,    0,
    0,    0,    0,    0,   55,    0,    0,    0,   57,    0,
    0,    0,   45,    0,    0,    0,   41,    0,   46,    0,
    0,    0,  103,  102,  105,  109,  110,  100,  101,    0,
    0,    0,    0,    0,  104,  108,    0,   54,    0,    0,
    0,    0,   56,    0,    0,    0,  106,  107,    0,    0,
   90,   89,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   40,    0,    0,    0,   88,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   61,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   13,
    5,    0,   14,   15,   16,   17,   21,    0,    0,    4,
   44,    0,    0,    0,    0,    0,    0,    0,   18,   19,
   83,   82,    0,   80,   81,    0,    0,   87,    0,   84,
    7,    0,    0,    0,    0,    0,   12,   47,    0,    0,
    0,    0,    0,    0,    0,   20,    0,    0,    0,    0,
   70,   69,    0,    0,    0,    0,    0,    0,    0,    0,
    6,    0,    0,    0,   49,    0,    0,    0,    0,    0,
    0,    0,   68,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   66,   11,    8,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   31,
    0,    0,   30,   29,    0,    0,   22,   23,   86,   38,
    0,    0,    0,    0,    0,   25,    0,    0,   32,    0,
    0,    9,    0,    0,    0,   24,   26,   35,   34,    0,
    0,    0,   27,
};
static const short yydgoto[] = {                          1,
   95,    9,   96,   26,   97,   98,  152,  132,  153,  203,
   99,  100,  101,  102,  103,  246,  215,  225,  247,  133,
   27,   74,   14,   18,  106,  160,   15,   19,   45,   46,
};
static const short yysindex[] = {                         0,
  322, -273,    0,    0,    0,    0,   87,    0,    0, -263,
    6, -250,   -2,  -17,    0,   87,   41,   85,    0, -144,
   87,  -22,    0, -156, -141,  131,    0,  -22,    0, -250,
   56,  173,    0,    0,    0,    0,    0,    0,    0,  -22,
 -211, -211,  -22,  285,    0,    0,  -48,    0,   64,   35,
   87,  285,    0,   71,   44,  457,    0,    0,   58,  -22,
    0,    0,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -99,
  632,    0,  -97,  124,  632,    0,  -12,  457,  443,  -23,
  -23, -206, -206, -206,  110,  156,  165,  119,  170,  172,
  -22,  160,  167,  129,  632, -156,  130,  185,  632,  632,
  632,  632,  632,  182,  143,    0,  163,   71,  -22,  -22,
  632,  -22,   12,   69,  632,  632,  -11,  -33,    4,    0,
    0,  632,    0,    0,    0,    0,    0,   71,  -22,    0,
    0,  285,  240,   78,  175,   89,  267,  632,    0,    0,
    0,    0,  -31,    0,    0,  -11,  -11,    0,   96,    0,
    0,  272,  103,  276,  258,  114,    0,    0,  285,  -41,
  -22,  196,   62,  206,  210,    0,  -11,  466,  123,  -11,
    0,    0,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  246,
    0,  -11,  632,  632,    0,  -22,  279,  632,  299,  632,
 -167,  134,    0,  473,  466,  450,    3,    3, -166, -166,
 -166,  -11,  288,    0,    0,    0,  285,  -22,  231,  -22,
  232, -240,  300,  234,  241,  246,  141,  -22,  326,    0,
  150,  109,    0,    0,  312,  632,    0,    0,    0,    0,
  157,  254,  324,  261,  632,    0,  632,  632,    0,  632,
   -3,    0,  265,  269, -240,    0,    0,    0,    0,  335,
  632,   -3,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  178,    0,    0,  209,    0,    0,    0,    0,
  209,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  180,    0,    0,  178,    0,  248,    0,
    0,  184,    0,  154,    0,  266,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  278,    0,    0,  205,  278,    0,   83,  277,  490,  423,
  478,   29,   38,   49,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -124,    0,    0,    0, -124, -124,
 -124, -124, -124,    0,    0,    0,    0,  268,  352,    0,
  278,    0,    0,    0, -124, -124,    0,    0,    0,    0,
    0, -124,    0,    0,    0,    0,    0,  177,  -38,    0,
    0,  -39,    0,    0,    0,    0,    0, -124,    0,    0,
    0,    0,   11,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  374,  164,    0,    0,    0,    0,  -27,    0,
  352,    0,    0,    0,    0,    0,    0,  351,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  361,
    0,    0, -124, -124,    0,    0,    0,  278,    0,  278,
    0,    0,    0,  257,  360,  491,  369,  485,  188,  414,
  434,    0,    0,    0,    0,    0,  -18,  380,    0,    0,
    0,    0,    0,    0,    0,   20,    0,    0,    0,    0,
    0,  527,    0,    0,    0,  278,    0,    0,    0,    0,
    0,    0,    0,    0, -124,    0, -124,  278,    0,  278,
  303,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -124,  303,    0,
};
static const short yygindex[] = {                         0,
  428,    0,  537,  409,  643,  683,  249,  565,  493,  221,
    0,    0,    0,    0,    0,  247,    0,  200,  202, -157,
  401,  -92,    0,    0,    0,    0,  436,  433,  697,  238,
};
#define YYTABLESIZE 910
static const short yytable[] = {                        146,
   10,   36,  186,  187,   11,   52,  147,  151,  118,   41,
   40,   42,   22,   69,   13,  131,   53,   43,   67,   36,
   41,  146,   42,   68,   69,   51,   24,   17,  147,   67,
   65,   41,   66,   42,   68,  158,   40,   21,  223,  179,
  224,   23,   20,   43,  177,   16,   41,   85,   42,  178,
  219,   85,   85,   85,   85,   85,   39,   85,   22,  167,
   39,   39,   39,   39,   39,   93,   39,   36,   37,   93,
   93,   93,   93,   93,   94,   93,   61,   62,   94,   94,
   94,   94,   94,  185,   94,   95,   52,   93,   20,   95,
   95,   95,   95,   95,   69,   95,   94,   53,   76,   67,
   65,   28,   66,   85,   68,   69,   51,   95,  212,  213,
   67,   65,   39,   66,   69,   68,  171,  172,  162,   67,
   65,   47,   66,   96,   68,   69,   96,  138,   30,  164,
   67,   65,  179,   66,   31,   68,   49,  177,  175,  179,
  176,   96,  178,   29,  177,  175,  182,  176,   54,  178,
   69,   10,   10,   93,   70,   67,   65,   71,   66,  179,
   68,   73,   94,  193,  177,  175,   75,  176,  118,  178,
  179,   50,  184,   95,   51,  177,  175,  179,  176,   85,
  178,  104,  177,  175,  105,  176,   69,  178,  180,  119,
  233,   67,   65,   69,   66,  109,   68,   48,   67,   65,
  105,   66,  108,   68,  110,  105,  105,   96,  105,  112,
  105,  113,   48,   55,   48,  237,   51,   48,  115,  117,
   48,   60,  105,   59,   73,  116,  216,   58,   73,   73,
   73,   73,   73,  230,   73,   48,   60,   48,   59,  141,
  142,  111,   58,  122,  143,   36,   37,  144,   50,   42,
   33,   34,   42,  145,  121,   35,   36,   37,   38,   61,
   62,  141,  142,   50,   39,  129,  143,   36,   37,  144,
   61,   62,  245,  213,  128,  145,   33,   34,   57,   58,
   73,  154,   36,   37,   38,  171,  172,  130,   43,  137,
   39,   43,   85,   85,   85,   85,   85,   76,  161,  163,
   76,   39,   39,   39,   39,   39,   99,  165,   48,   99,
   93,   48,  181,   93,   93,  118,  183,   97,  188,   94,
   97,   69,   94,   94,   99,  189,   67,   65,  190,   66,
   95,   68,  191,   95,   95,   97,  202,  208,  210,   60,
   61,   62,   63,   64,    3,    4,    5,    6,  218,   76,
   60,   61,   62,   63,   64,  220,  222,  226,  227,   60,
   61,   62,   63,   64,   96,  228,  232,   96,   96,  235,
   60,   61,   62,   63,   64,  234,  238,  170,  171,  172,
  173,  174,  239,  240,  170,  171,  172,  173,  174,  248,
   99,   79,  251,  249,   79,   60,   61,   62,   63,   64,
   77,   97,   10,   77,  170,  171,  172,  173,  174,   71,
   37,   71,   71,   71,   67,  170,  171,  172,  173,  174,
   37,   39,  170,  171,  172,  173,  174,   28,    8,   32,
  204,   60,   61,   62,   63,   64,  229,  214,   60,   61,
   62,   63,   64,   79,  250,  105,  105,  105,  105,  105,
   74,   72,   77,  253,   74,   74,   74,   74,   74,   48,
   74,   71,   53,   91,    0,   91,   91,   91,    0,   73,
   75,    0,   73,   73,   75,   75,   75,   75,   75,   69,
   75,   91,    0,    0,   67,   65,  179,   66,    0,   68,
    0,  177,  175,   69,  176,    0,  178,    0,   67,   65,
    0,   66,  179,   68,    0,    0,   74,  177,  175,  179,
  176,    0,  178,    0,  177,  175,    0,  176,   92,  178,
   92,   92,   92,    0,    0,   72,   75,   72,   72,   72,
   98,   78,    0,   98,   78,    0,   92,   10,   76,    0,
    0,   76,   76,   12,    0,    0,    0,   91,   98,    0,
   99,   99,   25,    0,    0,    0,    0,   25,    0,    0,
    0,   97,   97,    0,    0,    0,   60,   61,   62,   63,
   64,    0,    0,    0,    0,    0,    0,   72,    2,    3,
    4,    5,    6,   78,    0,    0,   44,   25,    0,    0,
    0,    0,   52,    7,    0,    0,    0,    0,    0,    0,
    0,    0,   92,    0,   56,    0,    0,   59,    0,  149,
    0,    0,    0,    0,   98,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   77,    0,    0,   78,   79,   80,
   81,   82,   83,   84,    0,   79,   79,    0,  168,  169,
    0,    0,    0,    0,   77,   77,    0,    0,    0,    0,
   71,   33,    0,   71,   71,  114,    0,    0,    0,  192,
    0,    0,  194,    0,    0,  195,  196,  197,  198,  199,
  200,  201,    0,    0,  134,    0,  136,    0,    0,    0,
    0,    0,    0,  156,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  159,  217,   74,    0,    0,   74,   74,
    0,    0,    0,    0,   91,    0,    0,   91,   91,    0,
    0,    0,    0,    0,    0,   75,    0,  107,   75,   75,
    0,    0,    0,    0,   60,   61,   62,   63,    0,    0,
    0,  170,  171,  172,  173,    0,    0,  120,   60,   61,
   62,  123,  124,  125,  126,  127,    0,  170,  171,  172,
  207,    0,    0,  135,    0,  171,  172,  139,  140,   92,
    0,    0,   92,   92,  157,    0,   72,    0,    0,   72,
   72,    0,    0,    0,  221,   98,   78,    0,    0,    0,
  166,    0,  231,    0,   33,   33,   33,   33,    0,   33,
   33,   33,   33,    0,   33,   33,   33,   33,   33,  148,
  148,  155,   33,   33,   33,    0,    0,    0,    0,    0,
    0,    0,    0,  150,  150,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  205,  206,    0,  148,  148,
  209,    0,  211,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  150,  150,    0,    0,    0,    0,    0,  148,
    0,    0,  148,    0,    0,  148,  148,  148,  148,  148,
  148,  148,    0,  150,  148,    0,  150,    0,  236,  150,
  150,  150,  150,  150,  150,  150,    0,  241,  150,  242,
  243,    0,  244,    0,  148,    0,    0,    0,    0,    3,
    4,    5,    6,  252,   86,   87,   88,   89,  150,   90,
   91,   92,   93,    7,    0,    0,    0,    0,    0,   94,
};
static const short yycheck[] = {                         33,
  125,   41,   44,  161,  278,   44,   40,   41,   40,   43,
   33,   45,   61,   37,  278,  108,   44,   40,   42,   59,
   43,   33,   45,   47,   37,   44,   44,  278,   40,   42,
   43,   43,   45,   45,   47,  128,   33,   40,  279,   37,
  281,   59,   91,   40,   42,   40,   43,   37,   45,   47,
  208,   41,   42,   43,   44,   45,   37,   47,   61,   91,
   41,   42,   43,   44,   45,   37,   47,  279,  280,   41,
   42,   43,   44,   45,   37,   47,  283,  284,   41,   42,
   43,   44,   45,  125,   47,   37,  125,   59,   91,   41,
   42,   43,   44,   45,   37,   47,   59,  125,   41,   42,
   43,   61,   45,   93,   47,   37,  125,   59,  276,  277,
   42,   43,   93,   45,   37,   47,  283,  284,   41,   42,
   43,  278,   45,   41,   47,   37,   44,   59,   44,   41,
   42,   43,   37,   45,  279,   47,  278,   42,   43,   37,
   45,   59,   47,   59,   42,   43,   44,   45,   93,   47,
   37,  276,  277,  125,   91,   42,   43,  123,   45,   37,
   47,   91,  125,   41,   42,   43,  123,   45,   40,   47,
   37,   41,   59,  125,   44,   42,   43,   37,   45,  279,
   47,  279,   42,   43,   61,   45,   37,   47,   93,   61,
   41,   42,   43,   37,   45,   40,   47,   44,   42,   43,
   37,   45,   93,   47,   40,   42,   43,  125,   45,   40,
   47,   40,   59,   41,   61,   59,   44,   41,   59,   91,
   44,   44,   59,   44,   37,   59,   93,   44,   41,   42,
   43,   44,   45,   93,   47,   59,   59,   61,   59,  273,
  274,  123,   59,   59,  278,  279,  280,  281,   44,   41,
  273,  274,   44,  287,  125,  278,  279,  280,  281,  283,
  284,  273,  274,   59,  287,  123,  278,  279,  280,  281,
  283,  284,  276,  277,   93,  287,  273,  274,   41,   42,
   93,  278,  279,  280,  281,  283,  284,  125,   41,  278,
  287,   44,  282,  283,  284,  285,  286,   41,   59,  125,
   44,  282,  283,  284,  285,  286,   41,   41,   41,   44,
  282,   44,   41,  285,  286,   40,   59,   41,  123,  282,
   44,   37,  285,  286,   59,  264,   42,   43,  123,   45,
  282,   47,  123,  285,  286,   59,   91,   59,   40,  282,
  283,  284,  285,  286,  258,  259,  260,  261,   61,   93,
  282,  283,  284,  285,  286,  125,  125,   58,  125,  282,
  283,  284,  285,  286,  282,  125,   41,  285,  286,   58,
  282,  283,  284,  285,  286,  267,  123,  282,  283,  284,
  285,  286,   59,  123,  282,  283,  284,  285,  286,  125,
  125,   41,   58,  125,   44,  282,  283,  284,  285,  286,
   41,  125,  125,   44,  282,  283,  284,  285,  286,   41,
   59,   43,   44,   45,   41,  282,  283,  284,  285,  286,
   41,   61,  282,  283,  284,  285,  286,  125,    1,   21,
  182,  282,  283,  284,  285,  286,  216,  191,  282,  283,
  284,  285,  286,   93,  245,  282,  283,  284,  285,  286,
   37,   51,   93,  252,   41,   42,   43,   44,   45,   24,
   47,   93,   30,   41,   -1,   43,   44,   45,   -1,  282,
   37,   -1,  285,  286,   41,   42,   43,   44,   45,   37,
   47,   59,   -1,   -1,   42,   43,   37,   45,   -1,   47,
   -1,   42,   43,   37,   45,   -1,   47,   -1,   42,   43,
   -1,   45,   37,   47,   -1,   -1,   93,   42,   43,   37,
   45,   -1,   47,   -1,   42,   43,   -1,   45,   41,   47,
   43,   44,   45,   -1,   -1,   41,   93,   43,   44,   45,
   41,   41,   -1,   44,   44,   -1,   59,    1,  282,   -1,
   -1,  285,  286,    7,   -1,   -1,   -1,  125,   59,   -1,
  285,  286,   16,   -1,   -1,   -1,   -1,   21,   -1,   -1,
   -1,  285,  286,   -1,   -1,   -1,  282,  283,  284,  285,
  286,   -1,   -1,   -1,   -1,   -1,   -1,   93,  257,  258,
  259,  260,  261,   93,   -1,   -1,   22,   51,   -1,   -1,
   -1,   -1,   28,  272,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  125,   -1,   40,   -1,   -1,   43,   -1,  117,
   -1,   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   60,   -1,   -1,   63,   64,   65,
   66,   67,   68,   69,   -1,  285,  286,   -1,  146,  147,
   -1,   -1,   -1,   -1,  285,  286,   -1,   -1,   -1,   -1,
  282,  125,   -1,  285,  286,   91,   -1,   -1,   -1,  167,
   -1,   -1,  170,   -1,   -1,  173,  174,  175,  176,  177,
  178,  179,   -1,   -1,  110,   -1,  112,   -1,   -1,   -1,
   -1,   -1,   -1,  119,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  129,  202,  282,   -1,   -1,  285,  286,
   -1,   -1,   -1,   -1,  282,   -1,   -1,  285,  286,   -1,
   -1,   -1,   -1,   -1,   -1,  282,   -1,   75,  285,  286,
   -1,   -1,   -1,   -1,  282,  283,  284,  285,   -1,   -1,
   -1,  282,  283,  284,  285,   -1,   -1,   95,  282,  283,
  284,   99,  100,  101,  102,  103,   -1,  282,  283,  284,
  186,   -1,   -1,  111,   -1,  283,  284,  115,  116,  282,
   -1,   -1,  285,  286,  122,   -1,  282,   -1,   -1,  285,
  286,   -1,   -1,   -1,  210,  286,  286,   -1,   -1,   -1,
  138,   -1,  218,   -1,  258,  259,  260,  261,   -1,  263,
  264,  265,  266,   -1,  268,  269,  270,  271,  272,  117,
  118,  119,  276,  277,  278,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  117,  118,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  183,  184,   -1,  146,  147,
  188,   -1,  190,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  146,  147,   -1,   -1,   -1,   -1,   -1,  167,
   -1,   -1,  170,   -1,   -1,  173,  174,  175,  176,  177,
  178,  179,   -1,  167,  182,   -1,  170,   -1,  226,  173,
  174,  175,  176,  177,  178,  179,   -1,  235,  182,  237,
  238,   -1,  240,   -1,  202,   -1,   -1,   -1,   -1,  258,
  259,  260,  261,  251,  263,  264,  265,  266,  202,  268,
  269,  270,  271,  272,   -1,   -1,   -1,   -1,   -1,  278,
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
"function : type ID '(' para ')' '{' stat '}'",
"function : KVOID ID '(' para ')' '{' stat '}'",
"function_var : ID '(' lots_of_expression_var ')'",
"function_var : ID '(' ')'",
"stat : ID '=' expression ';' stat",
"stat : ID '[' expression_var ']' stat_element_dim '=' expression ';' stat",
"stat :",
"stat : ID '=' function_var ';' stat",
"stat : function_var ';' stat",
"stat : S stat",
"stat : if_stat stat",
"stat : for_loop stat",
"stat : while_stat stat",
"stat : do_while_stat stat",
"stat : KBREAK ';' stat",
"stat : KCONTINUE ';' stat",
"stat : KRETURN expression ';' stat",
"stat : switch_stat stat",
"switch_stat : KSWITCH '(' ID ')' '{' default_stat '}'",
"switch_stat : KSWITCH '(' ID ')' '{' non_default_stat '}'",
"default_stat : KCASE const ':' stat default_stat",
"default_stat : KDEFAULT ':' stat",
"non_default_stat : KCASE const ':' stat non_default_case_stat",
"non_default_case_stat : KCASE const ':' stat non_default_case_stat",
"non_default_case_stat :",
"const : CHAR",
"const : INT",
"while_stat : KWHILE '(' expression ')' '{' stat '}'",
"do_while_stat : KDO '{' stat '}' KWHILE '(' expression ')' ';'",
"if_stat : KIF '(' expression ')' '{' stat '}'",
"if_stat : KIF '(' expression ')' '{' stat '}' KELSE '{' stat '}'",
"for_loop : KFOR '(' for_loop_para ';' for_loop_para ';' for_loop_para ')' '{' stat '}'",
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
#line 173 "parser.y"
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

#line 586 "y.tab.c"

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
