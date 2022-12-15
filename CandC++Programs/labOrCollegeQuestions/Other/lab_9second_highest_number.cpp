#include<stdio.h>
int main()
{
    int n,i,j,b=-32768,c=-32768;
    printf("Enter numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n>b)
        {
            c=b;
            b=n;
        }
        else if(n>c)
        {
            c=n;
        }
    }
    printf("The second highest number is:%d",c);
    return 0;
}