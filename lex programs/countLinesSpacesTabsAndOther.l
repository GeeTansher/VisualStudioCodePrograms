%{
    #include<stdio.h>
    int l=0,s=0,t=0,o=0;
%}

%%
[\n]    {l++;}
[^(\t\n ) ]   {o++;}
['\t']  {t++;}
.   {s++;}
%%

int main(){
    printf("Enter the string:");
    yylex();
    printf("\nThe count of lines, spaces, tabs and other chars is: %d, %d, %d, %d",l,s,t,o);
    return 0;   
}

int yywrap(){
    return 1;
}