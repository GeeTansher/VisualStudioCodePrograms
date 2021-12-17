#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char c,f;char e;
    start:
    printf("Enter a character:");
    scanf("%c%*c",&c);
    printf("You want it into lower case (type l) or upper case (type u):");
    scanf("%c%*c",&e);
    switch (e)
    {
    case 'l':
        c=tolower(c);
        printf("The character in lower case is:%c",c);
        break;
    case 'u':
        c=toupper(c);
        printf("The character in lower case is:%c",c);
        break;
    default:
        printf("You have entered something wrong , please enter again.");
        goto start;
        break;
    }
    return 0;
}