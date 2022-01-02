#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}node;

node* insert(node *r)
{
    node *p=NULL,*q=NULL;
    int num;
    printf("\nEnter the value to be entered:");
    scanf("%d",&num);
    p=(node*)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("\nMemory not allocated.");
        return r;
    }
    p->data=num;
    if(r==NULL)
    {
        r=p;
        r->next=NULL;
        r->prev=NULL;
        return r;
    }
    q=r;
    // while()
}

int main()
{
    node *f = NULL, *r = NULL;
    int choice;
    while (1)
    {
        printf("\nEnter your choice:\n1. Insert\n2. Display\n3. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            r = insert(r);
            if (f == NULL)
                f = r;
            break;
        case 2:
            display(f);
            break;
        case 3:
            exit(0);
        default:
            printf("\nYou have entered something wrong.Enter again...\n");
        }
    }

    return 0;
}