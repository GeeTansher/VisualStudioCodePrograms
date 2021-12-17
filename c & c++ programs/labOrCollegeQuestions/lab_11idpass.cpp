#include<stdio.h>
int main()
{
    int i_d=500,id,pas,pass=1234;
    printf("Enter your id:");
    scanf("%d",&id);
    if(id==i_d)
    {
        printf("Enter your password:");
        scanf("%d",&pas);
        if(pas==pass)
        {
            printf("Hello!!!\nYour name is Geetansh");
        }
        else
            printf("Your password is incorrect.");
    }
    else
        printf("You have entered incorrect id.");
    return 0;
}