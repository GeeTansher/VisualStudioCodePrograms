#include <stdio.h>
#include <stdlib.h>
// addition of two polynomials implement
typedef struct Poly
{
    int coef;
    int power;
    struct Poly *next;
} poly;

void insert(poly **first, poly **last, int coef, int power)
{
    poly *p = NULL, *q = *first, *r = NULL;
    p = (poly *)malloc(sizeof(poly));
    p->coef = coef;
    p->power = power;
    if (p != NULL)
    {
        if (*first == NULL)
        {
            p->next = NULL;
            *last = p;
        }
        else
        {
            if ((*first)->power < power)
            {
                p->next = *first;
                *first = p;
            }
            else
            {
                while (q->next != NULL && (q->next)->power > power)
                {
                    r = p;
                    q = q->next;
                }
                if (q->next != NULL)
                {
                    p->next = q->next;
                    q->next = p;
                }
                else
                {
                    if (q->power > power)
                    {
                        q->next = p;
                        p->next = NULL;
                        *last = p;
                    }
                    else
                    {
                        p->next = q;
                        r->next = p;
                    }
                }
            }
        }
    }
    else
    {
        printf("Memory not allocated.");
    }
}

void display(poly *first)
{
    printf("The polynomial is: ");
    while (first != NULL)
    {
        printf("%dx^%d + ", first->coef, first->power);
        first = first->next;
    }
    printf("0\n");
}

int main()
{
    poly *first = NULL, *last = NULL;
    int coef, power;
    int choice;
    while (1)
    {
        printf("What you want to do:\n1. Insert\n2. Display\n3. Delete\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value of coefficient and power:");
            scanf("%d%d", &coef, &power);
            insert(&first, &last, coef, power);
            if (first == NULL)
            {
                first = last;
            }
            break;
        case 2:
            display(first);
            break;
        case 3:
            printf("Enter the value of power of which term is to be deleted:");
            scanf("%d", &power);
            // delete (&first, &last, power);
            break;
        case 4:
            exit(0);
        default:
            printf("Enter something wrong ... Enter again...");
        }
    }
    return 0;
}