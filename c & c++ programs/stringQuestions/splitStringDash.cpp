#include<stdio.h>
void split(char st[100])
{
    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]=='-')
        {
            st[i]=' ';
        }
    }
    printf("The edited the string is: %s",st);
}
int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s",s);
    split(s);
    return 0;
}