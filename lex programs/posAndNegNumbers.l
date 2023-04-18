%{
    #include<stdio.h>
    int neg=0,pos=0;
%}

%%
[-+]?[0-9]+[.]  {printf("Invalid");}
[-][0-9]+[.]?[0-9]*   {neg++; printf("\nNeg: %s",yytext);}
[+]?[0-9]+[.]?[0-9]*  {pos++; printf("\nPos: %s",yytext);}
. {printf("Invalid");}
%%

int main(){
    printf("Enter the string:");
    yylex();
    printf("\nThe count of negative and positive numbers is: %d, %d", neg, pos);
    return 0;   
}

int yywrap(){
    return 1;
}