#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *next;
    int data;
} node;

node *insert(node *a, int num, int choice1)
{
    int pos;
    int n;
    if (choice1 == 1)
    {
        node *p = NULL;
        p = (node *)malloc(sizeof(node));
        if (p == NULL)
        {
            printf("Memory not allocated.");
            return a;
        }
        p->data = num;
        if (a == NULL)
        {
            a = p;
            a->next = NULL;
            return a;
        }
        else
        {
            p->next = a;
            a = p;
            return a;
        }
    }

    if (choice1 == 2)
    {
        node *p = NULL;
        p = (node *)malloc(sizeof(node));
        if (p == NULL)
        {
            printf("Memory not allocated.");
            return a;
        }
        p->data = num;
        if (a == NULL)
        {
            a = p;
            a->next = NULL;
            return a;
        }
        else
        {
            a->next = p;
            a = p;
            a->next = NULL;
            return a;
        }
    }

    if (choice1 == 3)
    {
        node *p = NULL, *q = NULL;
        p = (node *)malloc(sizeof(node));
        if (p == NULL)
        {
            printf("Memory not allocated.");
            return a;
        }
        p->data = num;
        q = a;
        if (a == NULL)
        {
            a = p;
            a->next = NULL;
            return a;
        }
        else
        {
            printf("Enter the position at which you want to print:");
            scanf("%d", &pos);
            while (a != NULL && (pos--) >= 0)
            {
                a = a->next;
            }
            if (pos > 0)
            {
                printf("There can be no element added at this position.");
            }
            else if (q == a)
            {
                q = insert(q, num, 1);
            }
            else if (a == NULL)
            {
                q = insert(a, num, 2);
            }
            else
            {
                p->next = a->next;
                a->next = p;
            }
            return q;
        }
    }
}

void display(node *first)
{
    while (first != NULL)
    {
        printf("%d --> ", first->data);
        first = first->next;
    }
    printf("NULL");
}

int main()
{
    int choice, choice1;
    int num;
    node *first = NULL, *last = NULL;
    node *p = first;
    do
    {
        printf("\nEnter the choice:\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted:");
            scanf("%d", &num);
            printf("\nWhere you want to add:\n1. First\n2. Last\n3. In between");
            scanf("%d", &choice1);
            switch (choice1)
            {
            case 1:
                first = insert(first, num, choice1);
                if (last == NULL)
                {
                    last = first;
                }
                break;
            case 2:
                last = insert(last, num, choice1);
                if (first == NULL)
                {
                    first = last;
                }
                break;
            case 3:
                p = first;
                first = insert(first, num, choice1);
                if (last == NULL)
                {
                    last = first;
                }
                if (first->next != NULL && first == last)
                {
                    last = first;
                    first = p;
                }
                break;
            }
            break;
        case 2:
            break;
        case 3:
            display(first);
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong input...");
            break;
        }

    } while (1);
    return 0;
}