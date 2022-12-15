#include <stdio.h>
int main()
{
    int m,n,i,j,k,temp;
    printf("Enter row and column:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements in array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the column number to be sorted:");
    scanf("%d",&k);
    k--;
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            if(a[i][k]>a[j][k])
            {
                temp=a[i][k];
                a[i][k]=a[j][k];
                a[j][k]=temp;
            }
        }
    }
    printf("\n The sorted array is:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
