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
        if (first->power == 0)
        {
            printf("%d + ", first->coef);
        }
        else
        {
            printf("%dx^%d + ", first->coef, first->power);
        }
        first = first->next;
    }
    printf("0\n");
}

void sumpoly(poly **sumf, poly **suml, poly *first, poly *first1)
{
    poly *p = first, *q = first1;
    int s = -1, s1 = -1;
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
    p = NULL;
    if (s >= s1)
    {
        while (s--)
        {
            p = (poly *)malloc(sizeof(poly));
            if (first->power > first1->power)
            {
                p->coef = first->coef;
                p->power = first->power;
                // if (*sumf == NULL)
                // {
                //     p->next=NULL;
                //     *sumf = *suml = p;
                // }
                // else
                // {
                //     p->next=NULL;
                //     (*suml)->next=p;
                //     *suml=p;
                // }
                first = first->next;
            }
            else if (first->power < first1->power)
            {
                p->coef = first1->coef;
                p->power = first1->power;
                // if (*sumf == NULL)
                // {
                //     p->next=NULL;
                //     *sumf = *suml = p;
                // }
                // else
                // {
                //     p->next=NULL;
                //     (*suml)->next=p;
                //     *suml=p;
                // }
                first1 = first1->next;
            }
            else
            {
                p->coef = first->coef + first1->coef;
                ;
                p->power = first->power;
                // if (*sumf == NULL)
                // {
                //     p->next=NULL;
                //     *sumf = *suml = p;
                // }
                // else
                // {
                //     p->next=NULL;
                //     (*suml)->next=p;
                //     *suml=p;
                // }
                first = first->next;
                first1 = first1->next;
            }
            if (*sumf == NULL)
            {
                p->next = NULL;
                *sumf = *suml = p;
            }
            else
            {
                p->next = NULL;
                (*suml)->next = p;
                *suml = p;
            }
        }
    }

    if (s < s1)
    {
        while (s1--)
        {
            p = (poly *)malloc(sizeof(poly));
            if (first->power > first1->power)
            {
                p->coef = first->coef;
                p->power = first->power;
                // if (*sumf == NULL)
                // {
                //     p->next = NULL;
                //     *sumf = *suml = p;
                // }
                // else
                // {
                //     p->next = NULL;
                //     (*suml)->next = p;
                //     *suml = p;
                // }
                first = first->next;
            }
            else if (first->power < first1->power)
            {
                p->coef = first1->coef;
                p->power = first1->power;
                // if (*sumf == NULL)
                // {
                //     p->next = NULL;
                //     *sumf = *suml = p;
                // }
                // else
                // {
                //     p->next = NULL;
                //     (*suml)->next = p;
                //     *suml = p;
                // }
                first1 = first1->next;
            }
            else
            {
                p->coef = first->coef + first1->coef;
                ;
                p->power = first->power;
                // if (*sumf == NULL)
                // {
                //     p->next = NULL;
                //     *sumf = *suml = p;
                // }
                // else
                // {
                //     p->next = NULL;
                //     (*suml)->next = p;
                //     *suml = p;
                // }
                first = first->next;
                first1 = first1->next;
            }
            if (*sumf == NULL)
            {
                p->next = NULL;
                *sumf = *suml = p;
            }
            else
            {
                p->next = NULL;
                (*suml)->next = p;
                *suml = p;
            }
        }
    }
}

int main()
{
    poly *first = NULL, *last = NULL, *first1 = NULL, *last1 = NULL, *sumf = NULL, *suml = NULL;
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
            if (first == NULL)
            {
                sumf = first1;
                suml = last1;
            }
            else
            {
                sumpoly(&sumf, &suml, first, first1);
            }
            display(sumf);
            break;
        case 5:
            exit(0);
        default:
            printf("Enter something wrong ... Enter again...");
        }
    }
    return 0;
}