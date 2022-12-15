#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("  ");
        }
        while(k<2*(n-i)-1)
        {
            printf("* ");
            k++;
        }
        k=0;
        printf("\n");
    }
    return 0;
}