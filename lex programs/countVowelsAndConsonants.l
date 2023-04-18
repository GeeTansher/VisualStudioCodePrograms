%{
    #include<stdio.h>
    int v=0,c=0;
%}

%%
[aeiouAEIOU]    {v++;}
[a-zA-Z^(aeiouAEIOU)]   {c++;}
%%

int main(){
    printf("Enter the string:");
    yylex();
    printf("\nThe count of vowel and consonant is: %d, %d",v,c);
    return 0;   
}

int yywrap(){
    return 1;
}