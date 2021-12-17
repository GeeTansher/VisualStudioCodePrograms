#include<stdio.h>
#include<conio.h>
int main()
{
    float p;
    printf("Enter the percentage:");
    scanf("%f",&p);
    if (p>80)
        printf("The grade is: A");
    else if (p>=61 && p<=80)
        printf("The grade is: B");
    else if (p>=51 && p<61)
        printf("The grade is: C");
    else if (p>=41 && p<50)
        printf("The grade is: D");
    else if (p>=35 && p<40)
        printf("The grade is: E");
    else if (p<35)
        printf("The grade is: F");
    else
        printf("invalid input");
    getch();
    return 0;
}