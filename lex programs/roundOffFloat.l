%{
    #include<stdio.h>
    int ans; float num;
%}

%%
[-][0-9]+[.][0-9]+      {
                            num=atof(yytext);
                            ans=(int)(num-0.5);
                            printf("The nearest int is: %d", ans);
                        }


[+]?[0-9]+[.][0-9]+     {
                            num=atof(yytext);
                            ans=(int)(num+0.5);
                            printf("The nearest int is: %d", ans);
                        }

. {printf("Invalid");}
%%

int main(){
    printf("Enter the number:");
    yylex();
    return 0;   
}

int yywrap(){
    return 1;
}