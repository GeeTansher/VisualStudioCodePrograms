%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    int maxi=0;
%}

%%
[a-zA-Z]+   {if(yyleng>maxi)
            {
                maxi=yyleng;
            }
        }
%%

int main(){
    printf("Enter the string:");
    yylex();
    printf("\nThe max length is: %d",maxi);
    return 0;   
}

int yywrap(){
    return 1;
}