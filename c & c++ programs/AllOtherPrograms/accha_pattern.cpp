#include<bits/stdc++.h>
int main()
{
    int n,i,j,a,k,m,l;
    printf("Enter the number:");
    scanf("%d",&n);
    k=n;
    for(i=0;i<n;i++)
    {
        for(j=0,a=n;j<i;j++,a--)
        {
            printf("%d ",a);
        }
        for(j=0;j<2*k-1;j++)
        {
            printf("%d ",k);
        }
        k--;
        for(j=0,a=n-i+1;j<i;j++,a++)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
    k=2;
    for(i=0;i<n;i++)
    {
        for(j=0,a=n;j<n-i-1;j++,a--)
        {
            printf("%d ",a);
        }
        for(j=0;j<2*i+2;j++)
        {
            if(k<=n)
                printf("%d ",k);
        }
        k++;
        for(j=0,a=i+3;j<n-1;j++,a++)
        {
            if(a<=n)
                printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}