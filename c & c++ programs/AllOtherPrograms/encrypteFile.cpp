#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Encryte.txt","w");
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=((str[i]-65+26-3)%26)+65;
            fputc(str[i],ptr);
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=((str[i]-97+26-3)%26)+97;
            fputc(str[i],ptr);
        }
        else
            fputc(str[i],ptr);
    }
    fclose(ptr);
    printf("The string is encrypted successfully.");
    char f='n';
    printf("Want to see decrypted string (y/n)??");
    scanf("%c",&f);
    if(f=='y'|| 'Y')
    {
        printf("The decrypted string is: ");
        ptr = fopen("Encryte.txt","r");
        char c;
        c=fgetc(ptr);
        for(int i=0;c!=EOF;i++)
        {
            if(c>='A'&&c<='Z')
            {
                c=((c-65+3)%26)+65;
                printf("%c",c);
            }
            else if(c>='a'&&c<='z')
            {
                c=((c-97+3)%26)+97;
                printf("%c",c);
            }
            else 
                printf("%c",c);
            c=fgetc(ptr);
        }
    }
    else
    {
        printf("Thank you.");
    }
    fclose(ptr);
    return 0;

}