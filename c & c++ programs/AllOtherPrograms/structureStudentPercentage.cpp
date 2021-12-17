#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
    int rn;
    char name[30];
    char sec;
    int marks[5];
}st;
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    st nos[n],p;
    for(int i=0;i<n;i++)
    {
        printf("Enter the roll no of %d student: ",i+1);
        scanf("%d",&nos[i].rn);
        fflush(stdin);
        printf("Enter the name of %d student: ",i+1);
        fgets(nos[i].name,30,stdin);
        printf("Enter the section of %d student: ",i+1);
        scanf("%c",&nos[i].sec);
        for(int j=0;j<5;j++)
        {
            printf("Enter the marks of %d student in %d subject: ",i+1,j+1);
            scanf("%d",&nos[i].marks[j]);
        }
    }
    float per[n],sum,temp;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<5;j++) 
        {
            sum+=nos[i].marks[j];
        }
        per[i]=(sum/5);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(per[i]>per[j])
            {
                p=nos[i];
                nos[i]=nos[j];
                nos[j]=p;
                temp=per[i];
                per[i]=per[j];
                per[j]=temp;
            }
        }
    }
    printf("\nThe record in ascending order is: \n");
    for(int i=0;i<n;i++)
    {
        printf("\nThe details of %d student is: \n",i+1);
        printf("Name: %s",nos[i].name);
        printf("Roll no: %d\n",nos[i].rn);
        printf("Section: %c\n",nos[i].sec);
        printf("Percentage: %f\n",per[i]);
    }
    return 0;
}
