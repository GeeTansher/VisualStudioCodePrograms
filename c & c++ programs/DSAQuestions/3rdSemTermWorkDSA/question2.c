#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *prev;
    int nm;
    struct node *next;
}nodetype;

nodetype* push(nodetype *top)
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
        if(top==NULL)
        {
            top=p;
            top->prev=NULL;
            top->next=NULL;
        }
        else
        {
            top->prev=p;
            p->next=top;
            top=p;
            top->prev=NULL;
        }
    }
    return top;
}

nodetype* pop(nodetype *top)
{
    nodetype *p=NULL;
    if(top==NULL)
    {
        printf("\nNothing to pop. Stack is empty.\n");
    }
    else
    {
        p=top;
        top=top->next;
        top->prev=NULL;
        free(p);
        printf("\nPop successful.\n");
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

int main()
{
    nodetype *top=NULL;
    int choice;
    while(1)
    {
        printf("\nEnter your choice:\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            top=push(top);
            break;
        case 2:
            top=pop(top);
            break;
        case 3:
            display(top);
            break;
        case 4:
            exit(0);
        default:
            printf("\nYou have entered something wrong.Enter again...\n");
        }
    }

    return 0;
}