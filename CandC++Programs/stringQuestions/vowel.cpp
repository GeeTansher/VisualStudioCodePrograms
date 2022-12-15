#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
        printf("The character is a vowel.");
    else
        printf("The character is a consonent.");
    return 0;
    getch();
    
}