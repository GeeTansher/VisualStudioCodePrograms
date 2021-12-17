#include<stdio.h>
#include<conio.h>
int main()
{
    int a ,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
            printf("%d is the smallest number.",a);
        else
            printf("%d is the smallest number.",c);
    }
    if(b<a)
    {
        if(b<c)
            printf("%d is the smallest number.",b);
        else
        {
            printf("%d is the smallest number.",c);
        }
        
    }
    return 0;
}