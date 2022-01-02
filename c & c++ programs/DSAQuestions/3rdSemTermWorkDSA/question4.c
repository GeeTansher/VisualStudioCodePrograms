#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int nm;
    struct node *next;
} nodetype;

nodetype *insert(nodetype *r)
{
    int num;
    nodetype *p = NULL,*q=NULL;
    printf("\nEnter the number you want to insert:");
    scanf("%d", &num);
    p = (nodetype *)malloc(sizeof(nodetype));
    if (p == NULL)
        printf("\nMemory is full.");
    else
    {
        p->nm = num;
        if (r == NULL)
        {
            r = p;
            r->prev = NULL;
        }
        else
        {
            q=r;
            r->next = p;
            r = p;
            r->prev=q;
        }
        r->next = NULL;
    }
    return r;
}

nodetype *delete (nodetype *f)
{
    nodetype *p = f;
    if (f == NULL)
    {
        printf("\nNothing to dequeue.\n");
        return f;
    }
    f = f->next;
    f->prev=NULL;
    free(p);
    printf("\nDequeued successfully.\n");
    return f;
}

void display(nodetype *f)
{
    while (f != NULL)
    {
        printf("%d -> ", f->nm);
        f = f->next;
    }
    printf("NULL");
}

int main()
{
    nodetype *f = NULL, *r = NULL;
    int choice;
    while (1)
    {
        printf("\nEnter:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            r = insert(r);
            if (f == NULL)
                f = r;
            break;
        case 2:
            f = delete (f);
            if (f == NULL)
                r = f;
            break;
        case 3:
            display(f);
            break;
        case 4:
            exit(0);
        default:
            printf("\nYou have entered something wrong.Enter again...\n");
        }
    }

    return 0;
}