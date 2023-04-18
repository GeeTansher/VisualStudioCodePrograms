%{
    #include<stdio.h>
    int c=0;
%}

%% 
and|but|because {c++;}
. ;
%%

int main(){
    printf("Enter the string:");
    yylex();
    if(c>0){
        printf("The sentence is compound");
    }
    else{
        printf("The sentence is simple");
    }
    return 0;   
}

int yywrap(){
    return 1;
}