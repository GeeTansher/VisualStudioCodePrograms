#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a,n,guess=0;
    srand(time(0));
    a=rand()%100+1;
    while(n!=a)
    {
        printf("\nEnter the number to guess:");
        scanf("%d",&n);
        guess++;
        if(n==a)
            printf("Your guess is correct and you take %d guesses.",guess);
        else if(n>a)
            printf("too high !! try again");
        else if(n<a)
            printf("too low !! try again");
    }
    return 0;
}