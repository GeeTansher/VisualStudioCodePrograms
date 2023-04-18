%{
    #include<stdio.h>
    int ctr=0;
%}

%%
[aeiouAEIOU]{2}   {ctr++; printf("%s, ",yytext);}
. ;
%%

int main(){
    printf("Enter the string:");
    yylex();
    printf("\nThe count of vowel pairs is: %d", ctr);
    return 0;   
}

int yywrap(){
    return 1;
}