%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "jiegou.h"
#define YYSTYPE val
extern val yylval;
#include "minipy-lab.tab.h"



/*  any C declaration  */
%}

letter    [a-zA-Z]

digit     [0-9]

number   {digit}+

id       {letter}({letter}|{digit})*

real     {number}"."{number}?|{number}?"."{number}

%%
[ \t]+      {/*do nothing , just skip */}
{number}    { 
              yylval.type=INt;
              yylval.i=atoi(yytext);
              return INT;
            }
{real}      {
              yylval.type=REAl;
              yylval.r=atof(yytext);
              return REAL;
            }
{id}        {
              yylval.type=Id;
              strcpy(yylval.id,yytext);
              strcpy(yylval.func,yytext);
              return ID; 
            }
\"(\\.|[^\\"])*\"	{
             yylval.type=STRING;
             strcpy(yylval.str,yytext);
             return(STRING_LITERAL); 
                  }
.|\n        { return yytext[0];}
%%
