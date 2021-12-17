#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int nm;
    struct node *next;;
}nodetype;
nodetype* insert(nodetype *top)
{
    int num;
    printf("\nEnter the number you want to insert:");
    scanf("%d",&num);
    nodetype *p=NULL;
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p==NULL)
        printf("\nMemory is full.");
    else{
        p->nm=num;
        p->next=top;
        top=p;
    }
    return top;
}

void display(nodetype *top)
 {
     printf("The Stack is:\n");
    while(top!=NULL)
    {
        printf("%d -> ",top->nm);
        top=top->next;
    }
    printf("NULL");
 }

 void displays(nodetype *front)
 {
    if(front!=NULL)
    {
        displays(front->next);
        printf("%d --> ",front->nm);
    }
 }

int main()
{
    nodetype *f=NULL,*r=NULL,*tp1=NULL;
    nodetype *p=NULL,*top=NULL;
    int n;
    while(1){
        start:
        printf("\nEnter:\n1. Insert\n2. Display\n3. Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:{
            top=insert(top);
            break;
        }
        case 2:{
            if(top==NULL)
                printf("It's Empty.");
            else{
                display(top);
                printf("\nThe Queue is:\n");
                displays(top);
                printf("NULL");
            }
            break;
        }
        case 3:{
            exit(0);
        }
        default:{
            printf("\nYou have entered something wrong.\n");
            goto start;
        }
        }
    }

    return 0;
}