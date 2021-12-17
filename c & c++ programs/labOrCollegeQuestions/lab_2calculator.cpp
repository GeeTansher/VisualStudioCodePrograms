#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;char c;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("what do you want to do?");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        printf("the sum is %d",a+b);
        break;
        case 's':
        printf("the substraction is %d",a-b);
        break;
        case 'm':
        printf("the multiplication is %d",a*b);
        break;
        case 'd':
        printf("the division is %d",a/b);
        break;
        case 'o':
        printf("the mod is %d",a%b);
        break;
    }
    return 0;
}