#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        while(k<=i)
        {
            printf("* ");
            k++;
        }
        k=0;
        printf("\n");
    }
    return 0;
}