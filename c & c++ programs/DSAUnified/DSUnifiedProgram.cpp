#include <bits/stdc++.h>
#include "Queue.h"

using namespace std;
/*

imp....make separate files for different classes and a folder containing all and include them in this program

tree
graph
other sorting algo
can also add searching algorithms
can add additional operations in Linked list , Stack and Queue.

*/

struct tree
{
    struct tree *left;
    int data;
    struct tree *right;
};

class Stack
{
    snode *top1;
    int top, n;
    int *arr;
    int d_n;

public:
    Stack(int n = 0)
    {
        top1 = NULL;
        top = -1;
        d_n = 0;
        this->n = n;
        arr = new int[n];
    }

    void s_push()
    {
        int ele;
        cout << endl
             << "Enter element to be added:";
        cin >> ele;
        if (top == n)
        {
            cout << endl
                 << "There is no space left in queue.";
            cin.get();
            cin.get();
            return;
        }
        if (top == -1)
        {
            top = 0;
            arr[top] = ele;
            top++;
            cout << endl
                 << "Added successfully.";
        }

        {
            arr[top] = ele;
            top++;
            cout << endl
                 << "Added successfully.";
        }
        cin.get();
        cin.get();
    }

    void s_pop()
    {
        if (top == -1)
        {
            cout << endl
                 << "Stack is empty, no element to be pop.";
            cin.get();
            cin.get();
            return;
        }
        top--;
        cout << endl
             << "Pop";
        cin.get();
        cin.get();
    }

    void s_display()
    {
        if (top == -1)
        {
            cout << endl
                 << "Stack is empty, no element to be displayed.";
            cin.get();
            cin.get();
            return;
        }
        cout << endl
             << "Elements in stack are:";
        for (int i = top; i >= 0; i--)
        {
            cout << "  " << arr[i];
        }
        cin.get();
        cin.get();
    }

    void s_peek()
    {
        int pos;
        cout << "At which position you want to peek:";
        cin >> pos;
        if (top == -1)
        {
            cout << endl
                 << "Stack is empty, no element to be peeked.";
            cin.get();
            cin.get();
            return;
        }
        if (pos > top || pos < 0)
        {
            cout << endl
                 << "Sorry at this position there is no element.";
            cin.get();
            cin.get();
            return;
        }
        cout << endl
             << "Element at position " << pos << " is:" << arr[top - pos];
        cin.get();
        cin.get();
    }

    void d_push()
    {
        snode *p = NULL;
        p = new snode;
        if (p == NULL)
            printf("\nMemory is full.");

        {
            int ele;
            cout << endl
                 << "Enter element to be added:";
            cin >> ele;
            p->data = ele;
            if (top1 == NULL)
            {
                p->next = NULL;
                top1 = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }

            {
                p->next = top1;
                top1 = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }
        }
        cin.get();
        cin.get();
    }

    void d_pop()
    {
        if (top1 == NULL)
        {
            cout << endl
                 << "Stack is empty, no element to be pop.";
            cin.get();
            cin.get();
            return;
        }
        snode *p = top1;
        top1 = top1->next;
        cout << endl
             << p->data << " Pop successfully.";
        delete p;
        d_n--;
        cin.get();
        cin.get();
    }

    void d_display()
    {
        cout << endl
             << "Elements in stack are:";
        snode *p = top1;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
        cout << "NULL";
        cin.get();
        cin.get();
    }

    void d_peek()
    {
        int pos;
        cout << "At which position you want to peek:";
        cin >> pos;
        if (top1 == NULL)
        {
            cout << endl
                 << "Stack is empty, no element to be peeked.";
            cin.get();
            cin.get();
            return;
        }
        if (pos > d_n || pos < 0)
        {
            cout << endl
                 << "Sorry at this position there is no element.";
            cin.get();
            cin.get();
            return;
        }

        {
            int i = 0;
            snode *p = top1;
            while (i < pos)
            {
                p = p->next;
                i++;
            }
            cout << endl
                 << "Element at the postion " << pos << " in stack is:" << p->data;
            cin.get();
            cin.get();
        }
    }
};

class LinkedList
{
    snode *f, *r;
    dnode *df, *dr;
    int d_n;

public:
    LinkedList()
    {
        f = r = NULL;
        df = dr = NULL;
        d_n = 0;
    }

    void s_insert()
    {
        snode *p = NULL;
        int ele;
        int pos;
        int choice1;
        p = new snode;
        if (p == NULL)
            printf("\nMemory is full.");
        else
        {
            cout << endl
                 << "Enter element to be added:";
            cin >> ele;
            p->data = ele;
            p->next = NULL;
            if (f == NULL)
            {
                f = r = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }
            else
            {
            g12:
                cout << endl
                     << "Where you want to add the element:";
                cout << endl
                     << "1. Front\n2. Back\n3. At a specified position" << endl;
                snode *q = NULL;
                cin >> choice1;
                switch (choice1)
                {
                case 1:
                    p->next = f;
                    f = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                case 2:
                    r->next = p;
                    r = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                case 3:
                    cout << endl
                         << "Enter the position at which you want to enter the element:";
                    cin >> pos;
                    if (pos > d_n || pos < 0)
                    {
                        cout << endl
                             << "You entered wrong position. Enter again.";
                        goto g12;
                    }
                    q = f;
                    for (int i = 0; i < pos - 1; i++)
                    {
                        q = q->next;
                    }
                    p->next = q->next;
                    q->next = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                default:
                    cout << endl
                         << "You entered something wrong.";
                    goto g12;
                    break;
                }
            }
        }
        cin.get();
        cin.get();
    }

    void s_delete()
    {
        snode *p = NULL;
        int pos;
        int choice1;
        if (f == NULL)
        {
            cout << endl
                 << "List is empty, no element to delete.";
            cin.get();
            cin.get();
            return;
        }
        if (f == r)
        {
            p = f;
            f = r = NULL;
            cout << endl
                 << p->data << " Deleted successfully.";
            delete p;
            d_n--;
        }

        {
        g13:
            cout << endl
                 << "From which position you want to delete the element:";
            cout << endl
                 << "1. Front\n2. Back\n3. At a specified position" << endl;
            snode *q = NULL;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
                p = f;
                f = f->next;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            case 2:
                q = f;
                for (int i = 0; i < d_n - 1; i++)
                {
                    q = q->next;
                }
                p = r;
                r = q;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            case 3:
                cout << endl
                     << "Enter the position of the element to be deleted:";
                cin >> pos;
                if (pos > d_n || pos < 0)
                {
                    cout << endl
                         << "You entered wrong position. Enter again.";
                    goto g13;
                }
                q = f;
                for (int i = 0; i < pos - 1; i++)
                {
                    q = q->next;
                }
                p = q->next;
                q->next = (q->next)->next;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            default:
                cout << endl
                     << "You entered something wrong.";
                goto g13;
            }
        }
        cin.get();
        cin.get();
    }

    void s_display()
    {
        cout << endl
             << "Elements in list are:";
        snode *p = f;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
        cout << "NULL";
        cin.get();
        cin.get();
    }

    void s_peek()
    {
        int pos;
        cout << "At which position you want to peek:";
        cin >> pos;
        if (f == NULL)
        {
            cout << endl
                 << "List is empty, no element to be peeked.";
            cin.get();
            cin.get();
            return;
        }
        if (pos > d_n || pos < 0)
        {
            cout << endl
                 << "Sorry at this position there is no element.";
            cin.get();
            cin.get();
            return;
        }

        {
            int i = 0;
            snode *p = f;
            while (i < pos)
            {
                p = p->next;
                i++;
            }
            cout << endl
                 << "Element at the postion " << pos << " in queue is:" << p->data;
            cin.get();
            cin.get();
        }
    }

    void d_insert()
    {
        dnode *p = NULL;
        int ele;
        int pos;
        int choice1;
        p = new dnode;
        if (p == NULL)
            printf("\nMemory is full.");
        else
        {
            cout << endl
                 << "Enter element to be added:";
            cin >> ele;
            p->data = ele;
            p->next = NULL;
            p->prev = NULL;
            if (df == NULL)
            {
                df = dr = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }

            {
            g14:
                cout << endl
                     << "Where you want to add the element:";
                cout << endl
                     << "1. Front\n2. Back\n3. At a specified position" << endl;
                dnode *q = NULL;
                cin >> choice1;
                switch (choice1)
                {
                case 1:
                    p->next = df;
                    df->prev = p;
                    df = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                case 2:
                    dr->next = p;
                    p->prev = dr;
                    dr = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                case 3:
                    cout << endl
                         << "Enter the position at which you want to enter the element:";
                    cin >> pos;
                    if (pos > d_n || pos < 0)
                    {
                        cout << endl
                             << "You entered wrong position. Enter again.";
                        goto g14;
                    }
                    q = df;
                    for (int i = 0; i < pos; i++)
                    {
                        q = q->next;
                    }
                    p->next = q;
                    p->prev = q->prev;
                    (q->prev)->next = p;
                    q->prev = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                default:
                    cout << endl
                         << "You entered something wrong.";
                    goto g14;
                }
            }
        }
        cin.get();
        cin.get();
    }

    void d_delete()
    {
        dnode *p = NULL;
        int pos;
        int choice1;
        if (df == NULL)
        {
            cout << endl
                 << "List is empty, no element to delete.";
            cin.get();
            cin.get();
            return;
        }
        if (df == dr)
        {
            p = df;
            df = dr = NULL;
            cout << endl
                 << p->data << " Deleted successfully.";
            delete p;
            d_n--;
        }

        {
        g15:
            cout << endl
                 << "From which position you want to delete the element:";
            cout << endl
                 << "1. Front\n2. Back\n3. At a specified position" << endl;
            dnode *q = NULL;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
                p = df;
                df = df->next;
                df->prev = NULL;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            case 2:
                p = dr;
                dr = dr->prev;
                dr->next = NULL;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            case 3:
                cout << endl
                     << "Enter the position of the element to be deleted:";
                cin >> pos;
                if (pos > d_n || pos < 0)
                {
                    cout << endl
                         << "You entered wrong position. Enter again.";
                    goto g15;
                }
                q = df;
                for (int i = 0; i < pos; i++)
                {
                    q = q->next;
                }
                p = q;
                (q->prev)->next = q->next;
                (q->next)->prev = q->prev;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            default:
                cout << endl
                     << "You entered something wrong.";
                goto g15;
            }
        }
        cin.get();
        cin.get();
    }

    void d_display()
    {
        cout << endl
             << "Elements in list from front are:";
        dnode *p = df;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
        cout << "NULL";
        cout << endl
             << "Elements in list from rear are:";
        p = dr;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->prev;
        }
        cout << "NULL";
        cin.get();
        cin.get();
    }

    void d_peek()
    {
        int pos;
        cout << "At which position you want to peek:";
        cin >> pos;
        if (df == NULL)
        {
            cout << endl
                 << "List is empty, no element to be peeked.";
            cin.get();
            cin.get();
            return;
        }
        if (pos > d_n || pos < 0)
        {
            cout << endl
                 << "Sorry at this position there is no element.";
            cin.get();
            cin.get();
            return;
        }

        {
            int i = 0;
            dnode *p = df;
            while (i < pos)
            {
                p = p->next;
                i++;
            }
            cout << endl
                 << "Element at the postion " << pos << " in queue is:" << p->data;
            cin.get();
            cin.get();
        }
    }
};

class Sorting
{
public:
    void selection(int arr[], int l, int r)
    {
        int ele, min = l;
        for (int i = l; i < r; i++)
        {
            for (int j = i + 1; j < r; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            ele = arr[i];
            arr[i] = arr[min];
            arr[min] = ele;
        }
        for (int i = l; i < r; i++)
        {
            cout << arr[i] << " ";
        }
        cin.get();
        cin.get();
    }

    void bubble(int arr[], int l, int r)
    {
        int ele;
        for (int i = l; i < r; i++)
        {
            for (int j = i + 1; j < r; j++)
            {
                if (arr[j] < arr[i])
                {
                    ele = arr[j];
                    arr[j] = arr[i];
                    arr[i] = ele;
                }
            }
        }
        for (int i = l; i < r; i++)
        {
            cout << arr[i] << " ";
        }
        cin.get();
        cin.get();
    }

    void insertion(int arr[], int l, int r)
    {
        int key, j;
        for (int i = l + 1; i < r; i++)
        {
            key = arr[i];
            for (j = i - 1; j >= 0 && arr[j] > key; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = key;
        }
        for (int i = l; i < r; i++)
        {
            cout << arr[i] << " ";
        }
        cin.get();
        cin.get();
    }

    void printArray(int arr[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        cin.get();
        cin.get();
    }
    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    int partitionLast(int arr[], int l, int h)
    {
        int pivot = arr[h];
        int i = l - 1;
        for (int j = l; j <= h - 1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[h]);
        return i + 1;
    }

    void quick(int arr[], int l, int h)
    {
        if (l < h)
        {
            int p = partitionLast(arr, l, h);
            quick(arr, l, p - 1);
            quick(arr, p + 1, h);
        }
    }

    void merging(int arr[], int l, int mid, int h)
    {
        int n = h - l + 1;
        int *temp = new int[n];
        int i = l, j = mid + 1, k = 0;
        while (i <= mid && j <= h)
        {
            if (arr[i] < arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
            }
        }
        while (i <= mid)
            temp[k++] = arr[i++];
        while (j <= h)
            temp[k++] = arr[j++];
        for (i = l, k = 0; i <= h; i++, k++)
            arr[i] = temp[k];
    }
    void merge(int arr[], int l, int h)
    {
        if (l < h)
        {
            int mid = (l + h) / 2;
            merge(arr, l, mid);
            merge(arr, mid + 1, h);
            merging(arr, l, mid, h);
        }
    }
};

class Tree
{
    tree *root;

public:
    void doOperation(int n)
    {
        switch (n)
        {
        case 1:
            int num;
            cout << "Enter the number to be inserted:";
            cin >> num;
            insert(&(root), num);
            break;
        case 3:
            display();
            break;
        }
    }

    Tree()
    {
        root = NULL;
    }
    void insert(tree **root, int num)
    {
        tree *p = new tree;
        if (p == NULL)
        {
            cout << "Memory full...";
        }
        else
        {
            p->data = num;
            if (*root == NULL)
            {
                p->left = NULL;
                p->right = NULL;
                *root = p;
            }
            else
            {
                if (p->data > (*root)->data)
                {
                    insert(&((*root)->right), num);
                }
                else
                {
                    insert(&((*root)->left), num);
                }
            }
        }
    }
    void display()
    {
        int ch;
    g13:
        cout << "In which order you want to print:" << endl
             << "1. PreOrder" << endl
             << "2. InOrder" << endl
             << "3. PostOrder" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << endl
                 << "Tree in PreOrder is:";
            preorder(root);
            break;
        case 2:
            cout << endl
                 << "Tree in InOrder is:";
            inorder(root);
            break;
        case 3:
            cout << endl
                 << "Tree in PostOrder is:";
            postorder(root);
            break;
        default:
            cout << "Entered something wrong...Please Re-Enter:";
            system("cls");
            goto g13;
        }
    }
    void preorder(tree *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            preorder(root->left);
            preorder(root->right);
        }
        else
            return;
    }
    void inorder(tree *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
        else
            return;
    }
    void postorder(tree *root)
    {
        if (root != NULL)
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
        }
        else
            return;
    }
};

int main()
{
    int choice1, choice2, choice3;
    Queue sq(100), dq, cq(10);
    Stack ss(100), ds;
    LinkedList sl, dl;
    Sorting s;
    Tree t;
    int *ar;
    int a;
    while (1)
    {
    g:

        system("cls");
        cout << "......Welcome to the All Data Structure and Algorithms Implementation Hub......";
        cout << endl
             << "What do you want to do?";
        cout << endl
             << "1. Implementing Queue" << endl
             << "2. Implementing Stack" << endl
             << "3. Implementing Linked List" << endl
             << "4. Doing some sorting" << endl
             << "5. Implementing Binary Search Tree" << endl
             << "6. Exit" << endl;

        cin >> choice1;

        switch (choice1)
        {
        case 1:
        g1:

            system("cls");
            cout << ".......QUEUE HUB.........";
            cout << endl
                 << "What do you want to do?";
            cout << endl
                 << "1. Static Queue Implementation" << endl
                 << "2. Dynamic Queue Implementation" << endl
                 << "3. Circular Queue Implementation" << endl
                 << "4. Go Back" << endl;

            cin >> choice2;

            switch (choice2)
            {
            case 1:
            g2:
                system("cls");
                cout << ".......STATIC QUEUE HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Enqueue" << endl
                     << "2. Dequeue" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    sq.s_enqueue();
                    goto g2;
                case 2:
                    sq.s_dequeue();
                    goto g2;
                case 3:
                    sq.s_display();
                    goto g2;
                case 4:
                    sq.s_peek();
                    goto g2;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g1;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g2;
                }
            case 2:
            g3:
                system("cls");
                cout << ".......DYNAMIC QUEUE HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Enqueue" << endl
                     << "2. Dequeue" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    dq.d_enqueue();
                    goto g3;
                case 2:
                    dq.d_dequeue();
                    goto g3;
                case 3:
                    dq.d_display();
                    goto g3;
                case 4:
                    dq.d_peek();
                    goto g3;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g1;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g3;
                }
                break;
            case 3:
            g4:
                system("cls");
                cout << ".......CIRCULAR QUEUE HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Enqueue" << endl
                     << "2. Dequeue" << endl
                     << "3. Display" << endl
                     << "4. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    cq.c_enqueue();
                    goto g4;
                case 2:
                    cq.c_dequeue();
                    goto g4;
                case 3:
                    cq.c_display();
                    goto g4;
                case 4:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g1;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g4;
                }
                break;
            case 4:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g1;
            }
            break;
        case 2:
        g5:

            system("cls");
            cout << ".......STACK HUB.........";
            cout << endl
                 << "What do you want to do?";
            cout << endl
                 << "1. Static Stack Implementation" << endl
                 << "2. Dynamic Stack Implementation" << endl
                 << "3. Go Back" << endl;

            cin >> choice2;

            switch (choice2)
            {
            case 1:
            g6:

                system("cls");
                cout << ".......STATIC STACK HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Push" << endl
                     << "2. Pop" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    ss.s_push();
                    goto g6;
                case 2:
                    ss.s_pop();
                    goto g6;
                case 3:
                    ss.s_display();
                    goto g6;
                case 4:
                    ss.s_peek();
                    goto g6;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g5;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g6;
                }
            case 2:
            g7:

                system("cls");
                cout << ".......DYNAMIC STACK HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Push" << endl
                     << "2. Pop" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    ss.d_push();
                    goto g7;
                case 2:
                    ss.d_pop();
                    goto g7;
                case 3:
                    ss.d_display();
                    goto g7;
                case 4:
                    ss.d_peek();
                    goto g7;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g5;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g7;
                }
                break;
            case 3:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g5;
            }
            break;
        case 3:
        g8:
            system("cls");
            cout << ".......LINKED LIST HUB.........";
            cout << endl
                 << "What do you want to do?";
            cout << endl
                 << "1. Implement singly Linked List" << endl
                 << "2. Implement Doubly Linked List" << endl
                 << "3. Go Back" << endl;

            cin >> choice2;

            switch (choice2)
            {
            case 1:
            g9:

                system("cls");
                cout << ".......SINGLY LINKED LIST HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Insert" << endl
                     << "2. Delete" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    sl.s_insert();
                    goto g9;
                case 2:
                    sl.s_delete();
                    goto g9;
                case 3:
                    sl.s_display();
                    goto g9;
                case 4:
                    sl.s_peek();
                    goto g9;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g8;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g9;
                }
            case 2:
            g10:

                system("cls");
                cout << ".......DOUBLY LINKED LIST HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Insert" << endl
                     << "2. Delete" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    dl.d_insert();
                    goto g10;
                case 2:
                    dl.d_delete();
                    goto g10;
                case 3:
                    dl.d_display();
                    goto g10;
                case 4:
                    dl.d_peek();
                    goto g10;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g8;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g10;
                }
                break;
            case 3:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g8;
            }
            break;
        case 4:
        g11:
            system("cls");
            cout << ".......SORTING ALGORITHMS HUB.........";
            cout << endl
                 << "Enter the number of elements in the array:";
            cin >> a;
            ar = new int[a];
            cout << endl
                 << "Enter the elements of the array:" << endl;
            for (int i = 0; i < a; i++)
            {
                cin >> ar[i];
            }
            cout << endl
                 << "By which algorithm you want to sort your array?";
            cout << endl
                 << "1. Selection sort" << endl
                 << "2. Bubble sort" << endl
                 << "3. Insertion sort" << endl
                 << "4. Quick sort" << endl
                 << "5. Merge sort" << endl
                 << "6. Go Back" << endl;
            cin >> choice2;

            switch (choice2)
            {
            case 1:
                cout << endl
                     << "After sorting your array by Selection sort." << endl;
                s.selection(ar, 0, a);
                goto g;
            case 2:
                cout << endl
                     << "After sorting your array by Bubble sort." << endl;
                s.bubble(ar, 0, a);
                goto g;
            case 3:
                cout << endl
                     << "After sorting your array by Insertion sort." << endl;
                s.insertion(ar, 0, a);
                goto g;
            case 4:
                cout << endl
                     << "After sorting your array by Quick sort." << endl;
                if (a > 1)
                {
                    s.quick(ar, 0, a - 1);
                    s.printArray(ar, a);
                }

                {
                    cout << *ar;
                    cin.get();
                    cin.get();
                }
                goto g;
            case 5:
                cout << endl
                     << "After sorting your array by Merge sort." << endl;
                s.merge(ar, 0, a - 1);
                s.printArray(ar, a);
                goto g;
            case 6:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g11;
            }
            break;
        case 5:
        g12:

            system("cls");
            cout << ".......BST HUB.........";
            cout << endl
                 << "What do you want to do?";
            cout << endl
                 << "1. Insert a node" << endl
                 << "2. Delete a node" << endl
                 << "3. Display" << endl
                 << "4. Count Total Nodes" << endl
                 << "5. Count Total Leaf Nodes" << endl
                 << "6. Count Nodes with only left child" << endl
                 << "7. Count Nodes with both childs" << endl
                 << "8. Maximum node" << endl
                 << "9. Minimum node" << endl
                 << "10. Search a node and return its parent" << endl
                 << "11. Go back" << endl;

            cin >> choice2;

            switch (choice2)
            {
            case 1:
                // t.insert(&(t.root), num);
                t.doOperation(1);
                cout << endl
                     << "Node Inserted";
                cin.get();
                cin.get();
                goto g12;
            case 2:

            case 3:
                t.doOperation(3);
                cin.get();
                cin.get();
                goto g12;
            case 11:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g12;
            }
            break;
        case 6:
            cout << endl
                 << "Thank you for Visiting ....";
            // sleep(2);
            exit(0);
            break;
        default:
            cout << "Entered something wrong...\nPlease re-enter...";
            cin.get();
            cin.get();
            goto g;
        }
    }
    return 0;
}