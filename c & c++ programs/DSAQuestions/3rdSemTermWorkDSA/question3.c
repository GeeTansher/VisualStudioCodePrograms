#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int nm;
    struct node *next;
} nodetype;

nodetype *enqueue(nodetype *r)
{
    int num;
    nodetype *p = NULL;
    printf("\nEnter the number you want to insert:");
    scanf("%d", &num);
    p = (nodetype *)malloc(sizeof(nodetype));
    if (p == NULL)
        printf("\nMemory is full.");
    else
    {
        p->nm = num;
        if (r == NULL)
            r = p;
        else
        {
            r->next = p;
            r = p;
        }
        r->next = NULL;
    }
    return r;
}

nodetype *dequeue(nodetype *f)
{
    nodetype *p = f;
    if (f == NULL)
    {
        printf("\nNothing to dequeue.\n");
        return f;
    }
    f = f->next;
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
        printf("\nEnter your choice:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            r = enqueue(r);
            if (f == NULL)
                f = r;
            break;
        case 2:
            f = dequeue(f);
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