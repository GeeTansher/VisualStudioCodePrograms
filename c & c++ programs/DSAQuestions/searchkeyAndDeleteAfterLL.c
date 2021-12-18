#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *next;
    int data;
} node;

node *insert(node *last, int num)
{
    node *p = NULL;
    p = (node *)malloc(sizeof(node));
    p->data = num;
    if (p != NULL)
    {
        if (last == NULL)
        {
            p->next = NULL;
            last = p;
            return last;
        }
        p->next=NULL;
        last->next = p;
        last = p;
        return last;
    }
}

void display(node *first)
{
    printf("\n");
    while (first != NULL)
    {
        printf("%d --> ", first->data);
        first = first->next;
    }
    printf("NULL");
}

node *afterKeyDelete(node *first, node *last, int key)
{
    node *p = NULL, *q = NULL;
    if (first->data == key)
    {
        printf("Value found.Elements deleted.\n");
        while (first != NULL)
        {
            p = first;
            first = first->next;
            free(p);
        }
        return NULL;
    }
    p = first;
    while (p != NULL && p->data != key)
    {
        q = p;
        p = p->next;
    }
    if (p == NULL)
    {
        printf("\nNo such value exist.\n");
        return last;
    }
    printf("Value found.Elements deleted.\n");
    q->next = NULL;
    last = q;
    while (p != NULL)
    {
        q = p;
        p = p->next;
        free(q);
    }
    return last;
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
            last = insert(last, num);
            if (first == NULL)
                first = last;
            break;
        case 2:
            printf("\nEnter the value to be searched and after which all nodes be deleted:");
            scanf("%d", &num);
            last = afterKeyDelete(first, last, num);
            if (last == NULL)
                first = last;
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