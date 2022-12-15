#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}node;

node* insert(node **f,node *r)
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
    q=*f;
    if((*f)->data>=p->data)
    {
        p->next=*f;
        p->prev=NULL;
        (*f)->prev=p;
        *f=p;
        return r;
    }
    else if(r->data<=p->data)
    {
        r->next=p;
        p->prev=r;
        p->next=NULL;
        r=p;
        return r;
    }
    while(q->next->data<=p->data && q->next!=NULL)
    {
        q=q->next;
    }
    p->next=q->next;
    q->next->prev=p;
    q->next=p;
    p->prev=q;
    return r;
}

void display(node *f,node *r)
{
    while (f != NULL)
    {
        printf("%d <-> ", f->data);
        f = f->next;
    }
    printf("NULL");
    printf("\nReverse order:");
    while(r!=NULL)
    {
        printf("%d <-> ", r->data);
        r = r->prev;
    }
    printf("NULL");
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
            r = insert(&f,r);
            if (f == NULL)
                f = r;
            break;
        case 2:
            display(f,r);
            break;
        case 3:
            exit(0);
        default:
            printf("\nYou have entered something wrong.Enter again...\n");
        }
    }

    return 0;
}