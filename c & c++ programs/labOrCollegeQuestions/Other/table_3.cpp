#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a=0,j;
    printf("Enter the number of which you want to print table:");
    scanf("%d",&n);
    printf("\nEnter by the which means you want it to print. (1. do while 2. while 3. for):");
    scanf("%d",&i);
    printf("\nTable of %d is:-",n);
    switch (i)
    {
    case 1:
        do
        {
            j=n*a;
            printf("\n%d x %d = %d",n,a,j);
            a++;
        } while (a<=10);
        
        break;
    case 2:
        while (a<=10)
        {
            j=n*a;
            printf("\n%d x %d = %d",n,a,j);
            a++;
        }
        break;
    case 3:
        for (a = 0; a <= 10; a++)
        {
            j=n*a;
            printf("\n%d x %d = %d",n,a,j);
        }
        break;
    default:
        break;
    }
    getch();
    return 0;
}