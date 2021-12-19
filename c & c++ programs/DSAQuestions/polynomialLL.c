#include <stdio.h>
#include <stdlib.h>
/* 

addition of two polynomials implement
delete func implement

*/
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
            *first = *last = p;
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
                    r = q;
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

poly *sumpoly(poly *first, poly *first1)
{
    poly *sum = NULL, *p = first, *q = first1, *r = NULL;
    int s = 0, s1 = 0;
    if (first == NULL)
        return first;
    while (p != NULL)
    {
        s++;
        p = p->next;
    }
    while (q != NULL)
    {
        s1++;
        q = q->next;
    }
    p = first, q = first1;
    if (s >= s1)
    {
        while (q != NULL)
        {
            if (first->power > first1->power)
            {
                if (sum == NULL)
                {
                    sum = r = first;
                    r->next = NULL;
                }
                else
                {
                    p = first;
                    r->next = p;
                    r = p;
                    r->next = NULL;
                }
                first = first->next;
            }
            else if (first->power < first1->power)
            {
                if (sum == NULL)
                {
                    sum = r = first1;
                    r->next = NULL;
                }
                else
                {
                    p = first1;
                    r->next = p;
                    r = p;
                    r->next = NULL;
                }
                first1 = first1->next;
            }
            else
            {
                if (sum == NULL)
                {
                    sum = r = first;
                    r->next = NULL;
                    sum->coef = first->coef + first1->coef;
                }
                else
                {
                    p = first;
                    r->next = p;
                    r = p;
                    r->next = NULL;
                    r->coef = first->coef + first1->coef;
                }
            }
            q = q->next;
        }
    }

    p = first1, q = first;
    if (s < s1)
    {
        while (q != NULL)
        {
            if (first->power > first1->power)
            {
                if (sum == NULL)
                {
                    sum = r = first;
                    r->next = NULL;
                }
                else
                {
                    p = first;
                    r->next = p;
                    r = p;
                    r->next = NULL;
                }
                first = first->next;
            }
            else if (first->power < first1->power)
            {
                if (sum == NULL)
                {
                    sum = r = first1;
                    r->next = NULL;
                }
                else
                {
                    p = first1;
                    r->next = p;
                    r = p;
                    r->next = NULL;
                }
                first1 = first1->next;
            }
            else
            {
                if (sum == NULL)
                {
                    sum = r = first;
                    r->next = NULL;
                    sum->coef = first->coef + first1->coef;
                }
                else
                {
                    p = first;
                    r->next = p;
                    r = p;
                    r->next = NULL;
                    r->coef = first->coef + first1->coef;
                }
            }
            q = q->next;
        }
    }
    return sum;
}

int main()
{
    poly *first = NULL, *last = NULL, *first1 = NULL, *last1 = NULL, *sum = NULL;
    int coef, power;
    int choice, choice1;
    while (1)
    {
        printf("What you want to do:\n1. Insert\n2. Display\n3. Delete\n4. Sum the two polynomials\n5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value of coefficient and power:");
            scanf("%d%d", &coef, &power);
            insert(&first, &last, coef, power);
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
            printf("Enter the second polynomial:\n");
            do
            {
                printf("Enter the value of coefficient and power:");
                scanf("%d%d", &coef, &power);
                insert(&first1, &last1, coef, power);
                printf("Want to add more terms.Press 1...");
                scanf("%d", &choice1);
                if (choice1 != 1)
                    break;
            } while (1);
            printf("\nThe first polynomial is:\n");
            display(first);
            printf("\nThe second polynomial is:\n");
            display(first1);
            printf("\nThe sum of these two polynomials is:\n");
            sum = sumpoly(first, first1);
            display(sum);
            break;
        case 5:
            exit(0);
        default:
            printf("Enter something wrong ... Enter again...");
        }
    }
    return 0;
}