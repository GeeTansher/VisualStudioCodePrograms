#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("  ");
        }
        while(k<2*i+1)
        {
            if(k==0||k==2*i)
                printf("1 ");
            else
                printf("* ");
            k++;
        }
        k=0;
        printf("\n");
    }
    return 0;
}