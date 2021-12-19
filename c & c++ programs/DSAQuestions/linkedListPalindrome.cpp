#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} node;

node *insert(node *top)
{
    node *p = NULL;
    int n;
    p = (node *)malloc(sizeof(node));
    printf("\nEnter the value to be inserted:");
    scanf("%d", &n);
    p->info = n;
    if (top = NULL)
    {
        p->next = NULL;
        top = p;
        return top;
    }
    p->next = top;
    top = p;
    return top;
}

void display(node *top)
{
    while (top != NULL)
    {
        printf("%d --> ", top->info);
        top = top->next;
    }
    printf("NULL");
}

void checkPalindrome(node *top)
{
    int n, r, s = 0, g = 0;
    printf("\nThe Palindrome numbers are: ");
    while (top != NULL)
    {
        n = top->info;
        s = 0;
        while (n != 0)
        {
            r = n % 10;
            s = s * 10 + r;
            n = n / 10;
        }
        if (top->info == s)
        {
            printf("%d  ", top->info);
            g++;
        }
        top = top->next;
    }
    if (g == 0)
        printf("NONE");
}

int main()
{
    node *top = NULL;
    int n;
    while (1)
    {
    start:
        printf("\nEnter:\n1. Insert\n2. Display\n3. Check Palindrome\n4. Exit\n");
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
            checkPalindrome(top);
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