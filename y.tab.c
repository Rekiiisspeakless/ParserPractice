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
    5,    5,    5,    5,    5,    5,   12,   10,   10,   11,
   13,   13,    9,    9,    4,    4,    4,   14,   14,    1,
    1,   15,   15,   18,   18,   19,   19,   19,   16,   16,
   17,   17,   21,   21,   20,   20,   20,    3,    3,    3,
    3,    7,    7,   22,   22,   22,   22,   22,   22,   22,
   22,   22,   22,   22,   22,   22,   22,   22,   22,   22,
   22,   22,   22,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,   23,   23,   23,   24,   24,
};
static const short yylen[] = {                            2,
    2,    2,    0,    8,    8,    4,    3,    5,    9,    0,
    5,    3,    2,    2,    2,    2,    7,    7,   11,   11,
    1,    0,    3,    0,    3,    1,    0,    2,    6,    3,
    4,    4,    0,    4,    0,    3,    0,    1,    3,    1,
    3,    1,    3,    1,    3,    1,    6,    1,    1,    1,
    1,    3,    1,    3,    2,    2,    3,    3,    3,    3,
    3,    3,    3,    3,    2,    1,    1,    1,    1,    1,
    1,    5,    1,    3,    2,    2,    3,    3,    3,    3,
    3,    3,    3,    3,    2,    1,    1,    1,    1,    1,
    1,    2,    2,    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,    0,   48,   49,   51,   50,    0,    1,    2,    0,
    0,    0,    0,    0,   40,    0,    0,    0,   42,    0,
    0,    0,   30,    0,    0,    0,   26,    0,   31,    0,
    0,    0,   89,   88,   91,   95,   96,   86,   87,    0,
    0,    0,    0,    0,   90,   94,    0,   39,    0,    0,
    0,    0,   41,    0,    0,    0,   92,   93,    0,    0,
   76,   75,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   25,    0,    0,    0,   74,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   47,    0,
    0,    0,    0,    0,    0,    0,    0,   13,    5,    0,
   14,   15,   16,    0,    0,    4,   29,    0,    0,    0,
    0,    0,   69,   68,    0,   66,   67,    0,    0,    7,
   73,    0,    0,   70,    0,    0,    0,   12,   32,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    6,    0,
   56,   55,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   34,    0,    0,    0,    0,    0,    0,    0,
   54,    0,    0,    0,    0,    0,    0,    0,    0,   52,
   11,    8,    0,    0,    0,    0,    0,    0,    0,    0,
   17,    0,   23,    0,   72,    0,    0,    0,    0,    0,
    9,    0,    0,   20,   19,
};
static const short yydgoto[] = {                          1,
   90,    9,   91,   26,   92,   93,  132,  118,  169,   94,
   95,   96,  119,   27,   74,   14,   18,   99,  141,   15,
   19,  133,   45,   46,
};
static const short yysindex[] = {                         0,
 -256, -272,    0,    0,    0,    0,   89,    0,    0, -263,
   -2, -236,  -20,    7,    0,   89,   30,   87,    0, -179,
   89,  -22,    0, -152, -149,  149,    0,  -22,    0, -236,
   41,  195,    0,    0,    0,    0,    0,    0,    0,  -22,
 -117, -117,  -22,  155,    0,    0,    8,    0,   53,   28,
   89,  155,    0,   80,   46,  424,    0,    0,   60,  -22,
    0,    0,  -22,  -22,  -22,  -22,  -22,  -22,  -22, -103,
  407,    0,  -96,  124,  407,    0,  -12,  424,  267,  -23,
  -23,  -40,  -40,  -40,  101,  175,  186,  197,   97,  407,
 -152,   79,  158,  407,  407,  407,  157,  132,    0,  141,
   80,  -22,  -22,  -22,  -22,  -33,  -11,    0,    0,  407,
    0,    0,    0,   80,  -22,    0,    0,  155,  216,   69,
   78,   85,    0,    0,  -31,    0,    0,    4,    4,    0,
    0,  249,   96,    0,  268,  240,  105,    0,    0,  155,
  -17,  -22,  192,  196,  230,  -22,  435,  112,    0,    4,
    0,    0,    4,    4,    4,    4,    4,    4,    4,    4,
  407,  407,    0,  -22,  252,  407,  407,  -22,  277,  123,
    0,  442,  435,  410,    3,    3,  -10,  -10,  -10,    0,
    0,    0,  155,  -22,  203,  214,  130,  -22,  230,  299,
    0,   90,    0,  137,    0,  235,  242,  407,  407,  407,
    0,  241,  260,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  169,    0,    0,  288,  183,    0,    0,    0,
  288,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  190,    0,    0,  169,    0,  315,    0,
    0,  194,    0,  151,    0,  401,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  275,    0,    0,  220,  275,    0,  248,  452,  454,  358,
  447,   11,   20,   31,    0,    0,    0,    0,    0,  275,
    0,    0,    0,  275,  275,  275,    0,    0,    0,    0,
  342,  318,    0,    0,    0,    0,    0,    0,    0,  275,
    0,    0,    0,  259,  -16,    0,    0,   76,    0,    0,
    0,    0,    0,    0,   40,    0,    0,    0,    0,    0,
    0,    0,  343,    0,  144,    0,    0,    0,    0,   36,
    0,  318,    0,    0,  332,    0,   -5,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  275,  275,    0,    0,    0,  275,  275,    0,    0,    0,
    0,   45,  257,    2,  331,  390,  164,  177,  188,    0,
    0,    0,   74,  351,    0,    0,    0,    0,   51,    0,
    0,  323,    0,    0,    0,    0,    0,  275,  275,  275,
    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  403,    0,  503,  389,  536,  593,  251,  495,  229,    0,
    0,    0, -125,  373,  -88,    0,    0,    0,    0,  408,
  395,  499,  465,  253,
};
#define YYTABLESIZE 753
static const short yytable[] = {                        128,
    2,    3,    4,    5,    6,   11,  129,  130,  106,   41,
   40,   42,  117,   69,   13,    7,  165,   43,   67,   21,
   41,   40,   42,   68,   69,  139,  164,   37,   43,   67,
   65,   41,   66,   42,   68,   65,  128,   16,   65,  159,
   22,   17,   64,  129,  157,   64,   41,   79,   42,  158,
   24,   79,   79,   79,   79,   79,   80,   79,  190,  146,
   80,   80,   80,   80,   80,   23,   80,   81,   22,   79,
   20,   81,   81,   81,   81,   81,   71,   81,   80,   38,
   71,   71,   71,   71,   71,   62,   71,   24,   62,   81,
   28,   24,   24,   24,   24,   24,   69,   24,   20,   31,
   76,   67,   65,   79,   66,   69,   68,  163,   37,  143,
   67,   65,   80,   66,   69,   68,   21,   36,  144,   67,
   65,   69,   66,   81,   68,   47,   67,   65,   49,   66,
   30,   68,  159,   54,   21,   79,  106,  157,  155,  160,
  156,   69,  158,   70,   80,   29,   67,   65,  159,   66,
   71,   68,  171,  157,  155,   81,  156,  107,  158,   69,
   38,   36,   37,  162,   67,   65,   69,   66,   75,   68,
   73,   67,   65,   69,   66,   85,   68,  145,   67,   65,
   91,   66,   97,   68,   98,   91,   91,  105,   91,   50,
   91,   69,   51,  101,   33,  198,   67,   65,   36,   66,
   59,   68,   91,  109,   59,   59,   59,   59,   59,   33,
   59,   33,   46,   60,  102,  189,  110,   60,   60,   60,
   60,   60,  193,   60,   61,  103,   44,   46,   61,   61,
   61,   61,   61,   45,   61,   55,  104,   43,   51,  123,
  124,   44,   61,   62,  125,   36,   37,  126,   45,  114,
   33,   34,   43,  127,  115,   35,   36,   37,   38,   61,
   62,   33,   34,   35,   39,  116,  135,   36,   37,   38,
   61,   62,  151,  152,  142,   39,  123,  124,   35,   65,
   65,  125,   36,   37,  126,  151,  152,   64,   82,  149,
  127,   82,   79,   57,   58,   79,   79,   63,  161,   33,
   63,   80,   33,   69,   80,   80,   82,  106,   67,   65,
  184,   66,   81,   68,  166,   81,   81,   33,  167,   33,
  168,   71,   71,   71,   71,   71,   62,  191,   27,   62,
   62,   27,   24,   24,   24,   24,   24,  188,  192,  196,
   82,   60,   61,   62,   63,   64,    3,    4,    5,    6,
   60,   61,   62,   63,   64,   28,  197,  199,   28,   60,
   61,   62,   63,   64,  200,  204,   60,   61,   62,   63,
   64,   57,   82,   57,   57,   57,   22,  150,  151,  152,
  153,  154,   33,   53,  205,   33,   60,   61,   62,   63,
   64,   22,   24,  150,  151,  152,  153,  154,   77,   10,
   77,   77,   77,    8,   60,   61,   62,   63,   64,   32,
  180,   60,   61,   62,   63,   64,   77,  195,   60,   61,
   62,   63,   64,   72,   53,   91,   91,   91,   91,   91,
   58,   48,   58,   58,   58,    0,   60,   61,   62,   63,
   64,   85,    0,    0,   85,   59,  159,   18,   59,   59,
   77,  157,  155,    0,  156,    0,  158,    0,   60,   85,
   69,   60,   60,    0,    0,   67,   65,    0,   66,   61,
   68,  159,   61,   61,    0,    0,  157,  155,  159,  156,
    0,  158,   77,  157,  155,    0,  156,   78,  158,   78,
   78,   78,   83,   85,   84,   83,    0,   84,    0,    0,
    0,    0,    0,   10,    0,   78,    0,    0,    0,   12,
   83,    0,   84,    0,    0,    0,   44,    0,   25,    0,
    0,    0,   52,   25,    0,   85,    0,    0,    0,   82,
    0,    0,   82,   82,   56,    0,    0,   59,    0,   78,
    0,   63,   63,    0,   83,    0,   84,    0,   60,   61,
   62,   63,    0,   25,   77,    0,    0,   78,   79,   80,
   81,   82,   83,   84,    0,    0,    0,    0,    0,    0,
  134,   78,    0,    0,    0,    0,   83,    0,   84,    0,
   18,   18,   18,   18,    0,   18,   18,    0,   18,    0,
    0,    0,  134,  134,   18,    0,    0,  120,  121,  122,
   18,  137,    0,    0,    0,    0,    0,    0,    0,  140,
  100,    0,   57,    0,  134,   57,   57,  134,  134,  134,
  134,  134,  134,  134,  134,  108,  147,  148,    0,  111,
  112,  113,    0,    0,    0,    0,    0,    0,    0,   77,
  170,    0,   77,   77,    0,  138,    0,    0,  172,    0,
    0,  173,  174,  175,  176,  177,  178,  179,  183,    0,
    0,    0,  187,    0,    3,    4,    5,    6,    0,   86,
   87,   58,   88,    0,   58,   58,    0,    0,    7,    0,
    0,    0,  194,    0,   89,   85,   85,    0,    0,    0,
    0,  150,  151,  152,  153,    0,  181,  182,  131,  136,
    0,  185,  186,    0,    0,   60,   61,   62,    0,    0,
    0,    0,    0,    0,    0,    0,  150,  151,  152,    0,
  131,  131,    0,    0,  151,  152,    0,    0,   78,    0,
    0,   78,   78,  201,  202,  203,   83,   83,    0,   84,
    0,    0,  131,    0,    0,  131,  131,  131,  131,  131,
  131,  131,  131,
};
static const short yycheck[] = {                         33,
  257,  258,  259,  260,  261,  278,   40,   41,   40,   43,
   33,   45,  101,   37,  278,  272,  142,   40,   42,   40,
   43,   33,   45,   47,   37,  114,   44,   44,   40,   42,
   43,   43,   45,   45,   47,   41,   33,   40,   44,   37,
   61,  278,   41,   40,   42,   44,   43,   37,   45,   47,
   44,   41,   42,   43,   44,   45,   37,   47,  184,   91,
   41,   42,   43,   44,   45,   59,   47,   37,   61,   59,
   91,   41,   42,   43,   44,   45,   37,   47,   59,   44,
   41,   42,   43,   44,   45,   41,   47,   37,   44,   59,
   61,   41,   42,   43,   44,   45,   37,   47,   91,  279,
   41,   42,   43,   93,   45,   37,   47,  125,  125,   41,
   42,   43,   93,   45,   37,   47,   41,   44,   41,   42,
   43,   37,   45,   93,   47,  278,   42,   43,  278,   45,
   44,   47,   37,   93,   59,  125,   40,   42,   43,   44,
   45,   37,   47,   91,  125,   59,   42,   43,   37,   45,
  123,   47,   41,   42,   43,  125,   45,   61,   47,   37,
  125,  279,  280,   59,   42,   43,   37,   45,  123,   47,
   91,   42,   43,   37,   45,  279,   47,   93,   42,   43,
   37,   45,  279,   47,   61,   42,   43,   91,   45,   41,
   47,   37,   44,   93,   44,   59,   42,   43,  125,   45,
   37,   47,   59,  125,   41,   42,   43,   44,   45,   59,
   47,   61,   44,   37,   40,   93,   59,   41,   42,   43,
   44,   45,   93,   47,   37,   40,   44,   59,   41,   42,
   43,   44,   45,   44,   47,   41,   40,   44,   44,  273,
  274,   59,  283,  284,  278,  279,  280,  281,   59,   93,
  273,  274,   59,  287,  123,  278,  279,  280,  281,  283,
  284,  273,  274,   44,  287,  125,  278,  279,  280,  281,
  283,  284,  283,  284,   59,  287,  273,  274,   59,  285,
  286,  278,  279,  280,  281,  283,  284,  286,   41,   41,
  287,   44,  282,   41,   42,  285,  286,   41,   59,   41,
   44,  282,   44,   37,  285,  286,   59,   40,   42,   43,
   59,   45,  282,   47,  123,  285,  286,   59,  123,   61,
   91,  282,  283,  284,  285,  286,  282,  125,   41,  285,
  286,   44,  282,  283,  284,  285,  286,   61,  125,   41,
   93,  282,  283,  284,  285,  286,  258,  259,  260,  261,
  282,  283,  284,  285,  286,   41,  267,  123,   44,  282,
  283,  284,  285,  286,  123,  125,  282,  283,  284,  285,
  286,   41,  125,   43,   44,   45,   59,  282,  283,  284,
  285,  286,   41,   41,  125,   44,  282,  283,  284,  285,
  286,   41,   61,  282,  283,  284,  285,  286,   41,  125,
   43,   44,   45,    1,  282,  283,  284,  285,  286,   21,
  160,  282,  283,  284,  285,  286,   59,  189,  282,  283,
  284,  285,  286,   51,   30,  282,  283,  284,  285,  286,
   41,   24,   43,   44,   45,   -1,  282,  283,  284,  285,
  286,   41,   -1,   -1,   44,  282,   37,  125,  285,  286,
   93,   42,   43,   -1,   45,   -1,   47,   -1,  282,   59,
   37,  285,  286,   -1,   -1,   42,   43,   -1,   45,  282,
   47,   37,  285,  286,   -1,   -1,   42,   43,   37,   45,
   -1,   47,  125,   42,   43,   -1,   45,   41,   47,   43,
   44,   45,   41,   93,   41,   44,   -1,   44,   -1,   -1,
   -1,   -1,   -1,    1,   -1,   59,   -1,   -1,   -1,    7,
   59,   -1,   59,   -1,   -1,   -1,   22,   -1,   16,   -1,
   -1,   -1,   28,   21,   -1,  125,   -1,   -1,   -1,  282,
   -1,   -1,  285,  286,   40,   -1,   -1,   43,   -1,   93,
   -1,  285,  286,   -1,   93,   -1,   93,   -1,  282,  283,
  284,  285,   -1,   51,   60,   -1,   -1,   63,   64,   65,
   66,   67,   68,   69,   -1,   -1,   -1,   -1,   -1,   -1,
  106,  125,   -1,   -1,   -1,   -1,  125,   -1,  125,   -1,
  258,  259,  260,  261,   -1,  263,  264,   -1,  266,   -1,
   -1,   -1,  128,  129,  272,   -1,   -1,  103,  104,  105,
  278,  107,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  115,
   75,   -1,  282,   -1,  150,  285,  286,  153,  154,  155,
  156,  157,  158,  159,  160,   90,  128,  129,   -1,   94,
   95,   96,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  282,
  146,   -1,  285,  286,   -1,  110,   -1,   -1,  150,   -1,
   -1,  153,  154,  155,  156,  157,  158,  159,  164,   -1,
   -1,   -1,  168,   -1,  258,  259,  260,  261,   -1,  263,
  264,  282,  266,   -1,  285,  286,   -1,   -1,  272,   -1,
   -1,   -1,  188,   -1,  278,  285,  286,   -1,   -1,   -1,
   -1,  282,  283,  284,  285,   -1,  161,  162,  106,  107,
   -1,  166,  167,   -1,   -1,  282,  283,  284,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,  284,   -1,
  128,  129,   -1,   -1,  283,  284,   -1,   -1,  282,   -1,
   -1,  285,  286,  198,  199,  200,  285,  286,   -1,  286,
   -1,   -1,  150,   -1,   -1,  153,  154,  155,  156,  157,
  158,  159,  160,
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
"while_stat : KWHILE '(' expression ')' '{' stat '}'",
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
#line 152 "parser.y"
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

#line 525 "y.tab.c"

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
