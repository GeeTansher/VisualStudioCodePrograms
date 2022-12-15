#include<stdio.h>
#include<stdlib.h>
 typedef struct Node{
    int nm;
    struct Node *next;

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
    printf("The Linked list is:\n");
    while(top!=NULL)
    {
        printf("%d -> ",top->nm);
        top=top->next;
    }
    printf("NULL");
}

nodetype* deletekey(nodetype *top,int n)
{
    nodetype *pre=NULL,*p=NULL,*tp=top;
    while(top!=NULL&&top->nm==n)
    {
        p=top;
        top=top->next;
        free(p);
    }
    while(tp!=NULL)
    {
        while(tp!=NULL&&tp->nm!=n)
        {
            pre=tp;
            tp=tp->next;
        }
        if(tp==NULL)
            return top;
        pre->next=tp->next;
        free(tp);
        tp=pre->next;
    }
    return top;    
}

int main()
{
    nodetype *top=NULL;
    int n;
    while(1){
        start:
        printf("\nEnter:\n1. Insert\n2. Display\n3. Delete\n4. Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:{
             top=insert(top);
            break;
        }
        case 2:{
            display(top);
            break;
        }
        case 3:
        {
            printf("Enter the info of node you want to delete:\n");
            scanf("%d",&n);
            top=deletekey(top,n);
            break;
        }
        case 4:{
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