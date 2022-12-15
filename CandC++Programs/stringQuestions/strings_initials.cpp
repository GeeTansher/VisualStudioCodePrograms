#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[200];int i;
    printf("Enter name:");
    gets(a);
    int l;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(i==0)
        {
            printf("%c",toupper(a[i]));
        }
        else if(a[i]==' ' && a[i+1]!=' ')
        {
            //toupper(a[i+1]);
            printf("%c",toupper(a[i+1]));
        }

    }
    return 0;
}