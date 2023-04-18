%{
    #include<stdio.h>
    int num,ans=0,original,lastD;
%}

%%
[0-9]+   {
                num=atoi(yytext);
                original=num;
                while(num){
                    lastD=num%10;
                    ans += (lastD*lastD*lastD);
                    num/=10;
                }

                if(ans==original){
                    printf("\nIt is an armstrong number. %d",ans);
                }
                else{
                    printf("\nIt is not an armstrong number. %d",ans);
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