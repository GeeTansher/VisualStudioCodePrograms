%{
    #include<stdio.h>
    int num,flag=0;
%}

%%
[0-9]{4}+   {
                num=atoi(yytext);
                if(num%4==0){
                    if(num%100==0){
                        if(num%400!=0){
                            flag=1;
                        }
                        else{
                            flag=0;
                        }
                    }
                    else{
                        flag=0;
                    }
                }
                else{
                    flag=1;
                }

                if(flag==1){
                    printf("\nNot a leap year.");
                }
                else{
                    printf("\nLeap year.");
                }
            }
. {printf("Invalid");}
%%

int main(){
    printf("Enter the string:");
    yylex();
    return 0;   
}

int yywrap(){
    return 1;
}