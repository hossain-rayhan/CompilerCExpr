%{
#include "y.tab.h"
%}

%{
    void yyerror(char *);
%}

%%
[0-9]+  { sscanf(yytext, "%d", &yylval.num);
          return NUM; }
[a-z]  { yylval.num = *yytext - 'a';
          return VAR; }
"dump"  { yylval.string=strdup(yytext);
          return DUMP; }
"clear" { return CLEAR; }
"="    	{ return  ASSIGN; }
"+="   	{ return  ADD_ASSIGN; }
"-="    { return  SUB_ASSIGN; }
"*="    { return  MULT_ASSIGN; }
"/="    { return  DIVD_ASSIGN; }
"%="    { return  REM_ASSIGN; }
"<<="   { return  LEFT_SHIFT_ASSIGN; }
">>="   { return  RIGHT_SHIFT_ASSIGN; }
"&="    { return  AND_ASSIGN; }
"^="    { return  XOR_ASSIGN; }
"|="    { return  OR_ASSIGN; }
"|"     { return  BITWISE_OR; }
"^"     { return  BITWISE_XOR; }
"&"     { return  BITWISE_AND; }
"<<"    { return  LEFT_SHIFT; }
">>"    { return  RIGHT_SHIFT; }
"+"     { return  ADD; }
"-"     { return  SUB; }
"*"     { return  MULT; }
"/"     { return  DIVD; }
"%"     { return  REM; }
"-"     { return  NEGAT; }
"~"     { return  BITWISE_NOT; }
"("     { return  OPEN_PAREN; }
")"     { return  CLOSE_PAREN; }
";"     { return  SEMICOLON; }
[ /t]+  {}
[ \t\r\n]      ;
.       { return yytext[0]; }
