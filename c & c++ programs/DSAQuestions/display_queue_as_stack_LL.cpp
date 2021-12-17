#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int nm;
    struct node *next;
}nodetype;
nodetype* insert(nodetype *r)
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
        if(r==NULL)
            r=p;
        else{
            r->next=p;
            r=p;
        }
        r->next=NULL;
    }
    return r;
}
void displays(nodetype *f)
{
    while(f!=NULL)
    {
        printf("%d -> ",f->nm);
        f=f->next;
    }
    printf("NULL");
}

 void display(nodetype *top)
 {
    if(top!=NULL)
    {
        display(top->next);
        printf("%d --> ",top->nm);
    }
 }

int main()
{
    nodetype *f=NULL,*r=NULL,*f1=NULL;
    nodetype *p=NULL,*top=NULL;
    int n;
    while(1){
        start:
        printf("\nEnter:\n1. Insert\n2. Display\n3. Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:{
            r=insert(r);
            if(f==NULL)
                f=r;
            break;
        }
        case 2:{
            if(f==NULL)
                printf("It's Empty.");
            else{
                f1=f;
                while(f1==r){
                    p=f1;
                    p->next=top;
                    top=p;
                    f1=f1->next;
                }
                printf("\nThe Queue is:\n");
                displays(f);
                printf("\nThe Stack is:\n");
                display(f1);
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