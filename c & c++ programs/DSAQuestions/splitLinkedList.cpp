#include <stdio.h>
#include <stdlib.h>

struct node
{
        int info;
        struct node *next;
};

void Split(struct node *top, int value, struct node **top1)
{
        struct node *p = top;

        while (p != NULL)
        {
                if (p->info == value)
                        break;
                p = p->next;
        }
        if (p == NULL)
        {
                printf("\nValue does not exist\n");
                return;
        }
        *top1 = p->next;
        p->next = NULL;
}

struct node *insert(struct node *top)
{
        struct node *p = NULL;
        int n;
        p = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the value to be inserted:");
        scanf("%d", &n);
        p->info = n;
        p->next = top;
        top = p;
        return top;
}

void display(struct node *top)
{
        struct node *p = NULL;
        if (top == NULL)
        {
                printf("\nList is empty\n");
                return;
        }
        p = top;
        printf("\nList is :\n");
        while (p != NULL)
        {
                printf("%d --> ", p->info);
                p = p->next;
        }
        printf("NULL\n");
}

int main()
{
        struct node *top = NULL, *top1 = NULL;
        int value, n;
        while (1)
        {
        start:
                printf("\nEnter:\n1. Insert\n2. Display\n3. Split\n4. Exit\n");
                scanf("%d", &n);
                switch (n)
                {
                case 1:
                {
                        top = insert(top);
                        break;
                }
                case 2:
                {
                        display(top);
                        break;
                }
                case 3:
                {
                        printf("Enter node after which u want to Split : ");
                        scanf("%d", &value);
                        Split(top, value, &top1);
                        display(top);
                        display(top1);
                        break;
                }
                case 4:
                {
                        exit(0);
                }
                default:
                {
                        printf("\nYou have entered something wrong.\n");
                        goto start;
                }
                }
        }
        return 0;
}