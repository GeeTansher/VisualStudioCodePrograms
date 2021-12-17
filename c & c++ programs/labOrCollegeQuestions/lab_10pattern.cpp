#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=0;i<5;i++)
    {
        for(j=0,a=i+1;j<=i;j++,a--)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}