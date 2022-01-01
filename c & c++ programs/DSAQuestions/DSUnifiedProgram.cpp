#include<bits/stdc++.h>

using namespace std;
/*

do merge sort 
can add additional operations in Linked list , Stack and Queue.

*/
struct snode
{
    int data;
    struct snode* next;
    
};

struct dnode
{
    int data;
    struct dnode* next;
    struct dnode* prev;
    
};

class Queue
{
    snode *df,*dr;
    int f,r,n;
    int cf,cr;
    int *arr,*ar;
    int d_n;

    public:

    Queue(int n=0)
    {
        df=dr=NULL;
        f=r=-1;
        cf=cr=-1;
        d_n=0;
        this->n=n;
        arr = new int[n];
        ar = new int[n];
    }

    void s_enqueue()
    {
        int ele;
        cout<<endl<<"Enter element to be added:";
        cin>>ele;
        if(r==n)
        {
            cout<<endl<<"There is no space left in queue.";
            cin.get();cin.get();
            return;
        }
        if(f==-1)
        {
            f=r=0;
            arr[r]=ele;
            r++;
            cout<<endl<<"Added successfully.";
        }
        else
        {
            arr[r]=ele;
            r++;
            cout<<endl<<"Added successfully.";
        }
        cin.get();cin.get();
    }

    void s_dequeue()
    {
        if(f==-1)
        {
            cout<<endl<<"Queue is empty, no element to be dequeued.";
            cin.get();cin.get();
            return;
        }
        if(f==r)
        {
            cout<<endl<<arr[f]<<" Dequeued";
            f=r=-1;
        }
        else
        {
            cout<<endl<<"Dequeued";
            f++;
        }
        cin.get();cin.get();
    }

    void s_display()
    {
        if(f==-1)
        {
            cout<<endl<<"Queue is empty, no element to be displayed.";
            cin.get();cin.get();
            return;
        }
        cout<<endl<<"Elements in queue are:";
        for(int i=f;i<r;i++)
        {
            cout<<"  "<<arr[i];
        }
        cin.get();cin.get();
    }

    void s_peek()
    {
        int pos;
        cout<<"At which position you want to peek:";
        cin>>pos;
        if(f==-1)
        {
            cout<<endl<<"Queue is empty, no element to be peeked.";
            cin.get();cin.get();
            return;
        }
        if(pos>(r-f) || pos<0)
        {
            cout<<endl<<"Sorry at this position there is no element.";
            cin.get();cin.get();
            return;
        }
        cout<<endl<<"Element at position "<<pos<<" is:"<<arr[f+pos];
        cin.get();cin.get();
    }

    void d_enqueue()
    {
        snode *p=NULL;
         int ele;
        p=new snode;
        if(p==NULL)
            printf("\nMemory is full.");
        else
        {
            cout<<endl<<"Enter element to be added:";
            cin>>ele;
            p->data=ele;
            p->next=NULL;
            if(df==NULL)
            {
                df=dr=p;
                cout<<endl<<"Added successfully.";
                d_n++;
            }
            else
            {
                dr->next=p;
                dr=p;
                cout<<endl<<"Added successfully.";
                d_n++;
            }
        }
        cin.get();cin.get();
    }

    void d_dequeue()
    {
        if(df==NULL)
        {
            cout<<endl<<"Queue is empty, no element to be dequeued.";
            cin.get();cin.get();
            return;
        }
        if(df==dr)
        {
            snode *p=df;
            df=dr=NULL;
            cout<<endl<<p->data<<" Dequeued successfully.";
            delete p;
            d_n--;
        }
        else
        {
            snode *p=df;
            df=df->next;
            cout<<endl<<p->data<<" Dequeued successfully.";
            delete p;
            d_n--;
        }
        cin.get();cin.get();
    }

    void d_display()
    {
        cout<<endl<<"Elements in queue are:";
        snode *p=df;
        while(p!=NULL)
        {
            cout<<p->data<<" -> ";
            p=p->next;
        }
        cout<<"NULL";
        cin.get();cin.get();
    }

    void d_peek()
    {
        int pos;
        cout<<"At which position you want to peek:";
        cin>>pos;
        if(df==NULL)
        {
            cout<<endl<<"Queue is empty, no element to be peeked.";
            cin.get();cin.get();
            return;
        }
        if(pos>d_n || pos<0)
        {
            cout<<endl<<"Sorry at this position there is no element.";
            cin.get();cin.get();
            return;
        }
        else
        {
            int i=0;
            snode *p=df;
            while(i<pos)
            {
                p=p->next;
                i++;
            }
            cout<<endl<<"Element at the postion "<<pos<<" in queue is:"<<p->data;
            cin.get();cin.get();
        }
    }
    
    void c_enqueue()
    {
        int ele;
        cout<<endl<<"Enter element to be added:";
        cin>>ele;
        if ((cf == 0 && cr == n-1) || (cr == (cf-1)%(n-1)))
        {
            cout<<endl<<"There is no space left in queue.";
            cin.get();cin.get();
            return;
        }
    
        else if (cf == -1)
        {
            cf = cr = 0;
            ar[cr] = ele;
            cout<<endl<<"Added successfully.";
        }
    
        else if (cr == n-1 && cf != 0)
        {
            cr = 0;
            ar[cr] = ele;
            cout<<endl<<"Added successfully.";
        }
    
        else
        {
            cr++;
            ar[cr] = ele;
            cout<<endl<<"Added successfully.";
        }   
        cin.get();cin.get();
    }

    void c_dequeue()
    {
        if (cf == -1)
        {
            cout<<endl<<"Queue is empty, no element to be dequeued.";
            cin.get();cin.get();
            return;
        }
    
        int ele = ar[cf];
        cout<<endl<<ar[cf]<<" Dequeued successfully.";
        ar[cf] = -1;
        if (cf == cr)
        {
            cf = -1;
            cr = -1;
        }
        else if (cf == n-1)
            cf = 0;
        else
            cf++;
        cin.get();cin.get();
    }

    void c_display()
    {
        cout<<endl<<"Elements in queue are:";
        if (cf == -1)
        {
            cout<<"NULL";
            cin.get();cin.get();
            return;
        }
        if (cr >= cf)
        {
            for (int i = cf; i <= cr; i++)
                cout<<ar[i]<<" -> ";
        }
        else
        {
            for (int i = cf; i < n; i++)
                cout<<ar[i]<<" -> ";
    
            for (int i = 0; i <= cr; i++)
                cout<<ar[i]<<" -> ";
        }
        cout<<"NULL";
        cin.get();cin.get();
    }

};

class Stack
{
    snode *top1;
    int top,n;
    int *arr;
    int d_n;

    public:

    Stack(int n=0)
    {
        top1=NULL;
        top=-1;
        d_n=0;
        this->n=n;
        arr = new int[n];
    }

    void s_push()
    {
        int ele;
        cout<<endl<<"Enter element to be added:";
        cin>>ele;
        if(top==n)
        {
            cout<<endl<<"There is no space left in queue.";
            cin.get();cin.get();
            return;
        }
        if(top==-1)
        {
            top=0;
            arr[top]=ele;
            top++;
            cout<<endl<<"Added successfully.";
        }
        else
        {
            arr[top]=ele;
            top++;
            cout<<endl<<"Added successfully.";
        }
        cin.get();cin.get();
    }

    void s_pop()
    {
        if(top==-1)
        {
            cout<<endl<<"Stack is empty, no element to be pop.";
            cin.get();cin.get();
            return;
        }
        top--;
        cout<<endl<<"Pop";
        cin.get();cin.get();
    }

    void s_display()
    {
        if(top==-1)
        {
            cout<<endl<<"Stack is empty, no element to be displayed.";
            cin.get();cin.get();
            return;
        }
        cout<<endl<<"Elements in stack are:";
        for(int i=top;i>=0;i--)
        {
            cout<<"  "<<arr[i];
        }
        cin.get();cin.get();
    }

    void s_peek()
    {
        int pos;
        cout<<"At which position you want to peek:";
        cin>>pos;
        if(top==-1)
        {
            cout<<endl<<"Stack is empty, no element to be peeked.";
            cin.get();cin.get();
            return;
        }
        if(pos>top || pos<0)
        {
            cout<<endl<<"Sorry at this position there is no element.";
            cin.get();cin.get();
            return;
        }
        cout<<endl<<"Element at position "<<pos<<" is:"<<arr[top-pos];
        cin.get();cin.get();
    }

    void d_push()
    {
        snode *p=NULL;
        p=new snode;
        if(p==NULL)
            printf("\nMemory is full.");
        else
        {
            int ele;
            cout<<endl<<"Enter element to be added:";
            cin>>ele;
            p->data=ele;
            if(top1==NULL)
            {
                p->next=NULL;
                top1=p;
                cout<<endl<<"Added successfully.";
                d_n++;
            }
            else
            {
                p->next=top1;
                top1=p;
                cout<<endl<<"Added successfully.";
                d_n++;
            }
        }
        cin.get();cin.get();
    }

    void d_pop()
    {
        if(top1==NULL)
        {
            cout<<endl<<"Stack is empty, no element to be pop.";
            cin.get();cin.get();
            return;
        }
        snode *p=top1;
        top1=top1->next;
        cout<<endl<<p->data<<" Pop successfully.";
        delete p;
        d_n--;
        cin.get();cin.get();
    }

    void d_display()
    {
        cout<<endl<<"Elements in stack are:";
        snode *p=top1;
        while(p!=NULL)
        {
            cout<<p->data<<" -> ";
            p=p->next;
        }
        cout<<"NULL";
        cin.get();cin.get();
    }

    void d_peek()
    {
        int pos;
        cout<<"At which position you want to peek:";
        cin>>pos;
        if(top1==NULL)
        {
            cout<<endl<<"Stack is empty, no element to be peeked.";
            cin.get();cin.get();
            return;
        }
        if(pos>d_n || pos<0)
        {
            cout<<endl<<"Sorry at this position there is no element.";
            cin.get();cin.get();
            return;
        }
        else
        {
            int i=0;
            snode *p=top1;
            while(i<pos)
            {
                p=p->next;
                i++;
            }
            cout<<endl<<"Element at the postion "<<pos<<" in stack is:"<<p->data;
            cin.get();cin.get();
        }
    }
};

class LinkedList
{
    snode *f,*r;
    dnode *df,*dr;
    int d_n;

    public:
    LinkedList()
    {
        f=r=NULL;
        df=dr=NULL;
        d_n=0;
    }

    void s_insert()
    {
        snode *p=NULL;
        int ele;
        int pos;
        int choice1;
        p=new snode;
        if(p==NULL)
            printf("\nMemory is full.");
        else
        {
            cout<<endl<<"Enter element to be added:";
            cin>>ele;
            p->data=ele;
            p->next=NULL;
            if(f==NULL)
            {
                f=r=p;
                cout<<endl<<"Added successfully.";
                d_n++;
            }
            else
            {
                g12:
                cout<<endl<<"Where you want to add the element:";
                cout<<endl<<"1. Front\n2. Back\n3. At a specified position"<<endl;
                snode *q=NULL;
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                        p->next=f;
                        f=p;
                        cout<<endl<<"Added successfully.";
                        d_n++;
                        break;
                    case 2:
                        r->next=p;
                        r=p;
                        cout<<endl<<"Added successfully.";
                        d_n++;
                        break;
                    case 3:
                        cout<<endl<<"Enter the position at which you want to enter the element:";
                        cin>>pos;
                        if(pos>d_n || pos<0)
                        {
                            cout<<endl<<"You entered wrong position. Enter again.";
                            goto g12;
                        }
                        q=f;
                        for(int i=0;i<pos-1;i++)
                        {
                            q=q->next;
                        }
                        p->next=q->next;
                        q->next=p;
                        cout<<endl<<"Added successfully.";
                        d_n++;
                        break;
                    default:
                        cout<<endl<<"You entered something wrong.";
                        goto g12;
                        break;
                }
                
            }
        }
        cin.get();cin.get();
    }

    void s_delete()
    {
        snode *p=NULL;
        int pos;
        int choice1;
        if(f==NULL)
        {
            cout<<endl<<"List is empty, no element to delete.";
            cin.get();cin.get();
            return;
        }
        if(f==r)
        {
            p=f;
            f=r=NULL;
            cout<<endl<<p->data<<" Deleted successfully.";
            delete p;
            d_n--;
        }
        else
        {
            g13:
            cout<<endl<<"From which position you want to delete the element:";
            cout<<endl<<"1. Front\n2. Back\n3. At a specified position"<<endl;
            snode *q=NULL;
            cin>>choice1;
            switch(choice1)
            {
                case 1:
                    p=f;
                    f=f->next;
                    cout<<endl<<p->data<<" Deleted successfully.";
                    delete p;
                    d_n--;
                    break;
                case 2:
                    q=f;
                    for(int i=0;i<d_n-1;i++)
                    {
                        q=q->next;
                    }
                    p=r;
                    r=q;
                    cout<<endl<<p->data<<" Deleted successfully.";
                    delete p;
                    d_n--;
                    break;
                case 3:
                    cout<<endl<<"Enter the position of the element to be deleted:";
                    cin>>pos;
                    if(pos>d_n || pos<0)
                    {
                        cout<<endl<<"You entered wrong position. Enter again.";
                        goto g13;
                    }
                    q=f;
                    for(int i=0;i<pos-1;i++)
                    {
                        q=q->next;
                    }
                    p=q->next;
                    q->next=(q->next)->next;
                    cout<<endl<<p->data<<" Deleted successfully.";
                    delete p;
                    d_n--;
                    break;
                default:
                    cout<<endl<<"You entered something wrong.";
                    goto g13;
            }
                
        }
        cin.get();cin.get(); 
    }

    void s_display()
    {
        cout<<endl<<"Elements in list are:";
        snode *p=f;
        while(p!=NULL)
        {
            cout<<p->data<<" -> ";
            p=p->next;
        }
        cout<<"NULL";
        cin.get();cin.get();
    }

    void s_peek()
    {
        int pos;
        cout<<"At which position you want to peek:";
        cin>>pos;
        if(f==NULL)
        {
            cout<<endl<<"List is empty, no element to be peeked.";
            cin.get();cin.get();
            return;
        }
        if(pos>d_n || pos<0)
        {
            cout<<endl<<"Sorry at this position there is no element.";
            cin.get();cin.get();
            return;
        }
        else
        {
            int i=0;
            snode *p=f;
            while(i<pos)
            {
                p=p->next;
                i++;
            }
            cout<<endl<<"Element at the postion "<<pos<<" in queue is:"<<p->data;
            cin.get();cin.get();
        }
    }

    void d_insert()
    {
        dnode *p=NULL;
        int ele;
        int pos;
        int choice1;
        p=new dnode;
        if(p==NULL)
            printf("\nMemory is full.");
        else
        {
            cout<<endl<<"Enter element to be added:";
            cin>>ele;
            p->data=ele;
            p->next=NULL;
            p->prev=NULL;
            if(df==NULL)
            {
                df=dr=p;
                cout<<endl<<"Added successfully.";
                d_n++;
            }
            else
            {
                g14:
                cout<<endl<<"Where you want to add the element:";
                cout<<endl<<"1. Front\n2. Back\n3. At a specified position"<<endl;
                dnode *q=NULL;
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                        p->next=df;
                        df->prev=p;
                        df=p;
                        cout<<endl<<"Added successfully.";
                        d_n++;
                        break;
                    case 2:
                        dr->next=p;
                        p->prev=dr;
                        dr=p;
                        cout<<endl<<"Added successfully.";
                        d_n++;
                        break;
                    case 3:
                        cout<<endl<<"Enter the position at which you want to enter the element:";
                        cin>>pos;
                        if(pos>d_n || pos<0)
                        {
                            cout<<endl<<"You entered wrong position. Enter again.";
                            goto g14;
                        }
                        q=df;
                        for(int i=0;i<pos;i++)
                        {
                            q=q->next;
                        }
                        p->next=q;
                        p->prev=q->prev;
                        (q->prev)->next=p;
                        q->prev=p;
                        cout<<endl<<"Added successfully.";
                        d_n++;
                        break;
                    default:
                        cout<<endl<<"You entered something wrong.";
                        goto g14;
                }
                
            }
        }
        cin.get();cin.get();
    }

    void d_delete()
    {
        dnode *p=NULL;
        int pos;
        int choice1;
        if(df==NULL)
        {
            cout<<endl<<"List is empty, no element to delete.";
            cin.get();cin.get();
            return;
        }
        if(df==dr)
        {
            p=df;
            df=dr=NULL;
            cout<<endl<<p->data<<" Deleted successfully.";
            delete p;
            d_n--;
        }
        else
        {
            g15:
            cout<<endl<<"From which position you want to delete the element:";
            cout<<endl<<"1. Front\n2. Back\n3. At a specified position"<<endl;
            dnode *q=NULL;
            cin>>choice1;
            switch(choice1)
            {
                case 1:
                    p=df;
                    df=df->next;
                    df->prev=NULL;
                    cout<<endl<<p->data<<" Deleted successfully.";
                    delete p;
                    d_n--;
                    break;
                case 2:
                    p=dr;
                    dr=dr->prev;
                    dr->next=NULL;
                    cout<<endl<<p->data<<" Deleted successfully.";
                    delete p;
                    d_n--;
                    break;
                case 3:
                    cout<<endl<<"Enter the position of the element to be deleted:";
                    cin>>pos;
                    if(pos>d_n || pos<0)
                    {
                        cout<<endl<<"You entered wrong position. Enter again.";
                        goto g15;
                    }
                    q=df;
                    for(int i=0;i<pos;i++)
                    {
                        q=q->next;
                    }
                    p=q;
                    (q->prev)->next=q->next;
                    (q->next)->prev=q->prev;
                    cout<<endl<<p->data<<" Deleted successfully.";
                    delete p;
                    d_n--;
                    break;
                default:
                    cout<<endl<<"You entered something wrong.";
                    goto g15;
            }
                
        }
        cin.get();cin.get();
    }

    void d_display()
    {
        cout<<endl<<"Elements in list from front are:";
        dnode *p=df;
        while(p!=NULL)
        {
            cout<<p->data<<" -> ";
            p=p->next;
        }
        cout<<"NULL";
        cout<<endl<<"Elements in list from rear are:";
        p=dr;
        while(p!=NULL)
        {
            cout<<p->data<<" -> ";
            p=p->prev;
        }
        cout<<"NULL";
        cin.get();cin.get();
    }

    void d_peek()
    {
        int pos;
        cout<<"At which position you want to peek:";
        cin>>pos;
        if(df==NULL)
        {
            cout<<endl<<"List is empty, no element to be peeked.";
            cin.get();cin.get();
            return;
        }
        if(pos>d_n || pos<0)
        {
            cout<<endl<<"Sorry at this position there is no element.";
            cin.get();cin.get();
            return;
        }
        else
        {
            int i=0;
            dnode *p=df;
            while(i<pos)
            {
                p=p->next;
                i++;
            }
            cout<<endl<<"Element at the postion "<<pos<<" in queue is:"<<p->data;
            cin.get();cin.get();
        }
    }
};

class Sorting
{
    public:

    void selection(int arr[],int l,int r)
    { 
        int ele,min=l;
        for(int i=l;i<r;i++)
        {
            for(int j=i+1;j<r;j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }
            ele=arr[i];
            arr[i]=arr[min];
            arr[min]=ele;
        }
        for(int i=l;i<r;i++)
        {
            cout<<arr[i]<<" ";
        }
        cin.get();cin.get();
    }

    void bubble(int arr[],int l,int r)
    {
        int ele;
        for(int i=l;i<r;i++)
        {
            for(int j=i+1;j<r;j++)
            {
                if(arr[j]<arr[i])
                {
                    ele=arr[j];
                    arr[j]=arr[i];
                    arr[i]=ele;
                }
            }
        }
        for(int i=l;i<r;i++)
        {
            cout<<arr[i]<<" ";
        }
        cin.get();cin.get();
    }

    void insertion(int arr[],int l,int r)
    {
        int key,j;
        for (int i=l+1;i<r;i++)
        {
            key=arr[i];
            for(j=i-1;j>=0 && arr[j]>key;j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[j+1]=key;
        }
        for(int i=l;i<r;i++)
        {
            cout<<arr[i]<<" ";
        }
        cin.get();cin.get();
    }

    void printArray(int arr[], int n) 
    { 
        int i; 
        for (i = 0; i<n; i++) 
            cout << arr[i] << " "; 
        cout << endl; 
        cin.get();cin.get();
    } 
    void swap(int* x, int* y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    int partitionLast(int arr[], int l, int h)
    {
        int pivot = arr[h];
        int i = l-1;
        for (int j=l; j<=h-1; j++){
            if (arr[j] < pivot)
            {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i+1], &arr[h]);
        return i+1;
    }

    void quick(int arr[],int l,int h)
    {
        if (l<h)
        {
            int p = partitionLast(arr, l, h);
            quick(arr, l, p-1);
            quick(arr, p+1, h);
        }
    }

    void merge(int arr[],int l,int h)
    {
        
    }
};

int main()
{
    int choice1,choice2,choice3;
    Queue sq(100),dq,cq(10);
    Stack ss(100),ds;
    LinkedList sl,dl;
    Sorting s;
    int *ar;
    int a;
    while(1)
    {
        g:

        system("cls");
        cout<<"......Welcome to the All Data Structure and Algorithms Implementation Hub......";
        cout<<endl<<"What do you want to do?";
        cout<<endl<<"1. Implementing Queue"<<endl<<"2. Implementing Stack"<<endl<<"3. Implementing Linked List"<<endl<<"4. Doing some sorting"<<endl<<"5. Exit"<<endl;

        cin>>choice1;

        switch (choice1)
        {
        case 1:
            g1:

            system("cls");
            cout<<".......QUEUE HUB.........";
            cout<<endl<<"What do you want to do?";
            cout<<endl<<"1. Static Queue Implementation"<<endl<<"2. Dynamic Queue Implementation"<<endl<<"3. Circular Queue Implementation"<<endl<<"4. Go Back"<<endl;
    
            cin>>choice2;

            switch(choice2)
            {
                case 1:
                    g2:
                    system("cls");
                    cout<<".......STATIC QUEUE HUB.........";
                    cout<<endl<<"What do you want to do?";
                    cout<<endl<<"1. Enqueue"<<endl<<"2. Dequeue"<<endl<<"3. Display"<<endl<<"4. Peek"<<endl<<"5. Go back"<<endl;
            
                    cin>>choice3;
                
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
                        cout<<endl<<"Going back....";
                        // sleep(2);
                        goto g1;
                    default:
                        cout<<"Entered something wrong...\nPlease re-enter...";
                        cin.get();cin.get();
                        goto g2;
                    }
                case 2:
                    g3:
                    system("cls");
                    cout<<".......DYNAMIC QUEUE HUB.........";
                    cout<<endl<<"What do you want to do?";
                    cout<<endl<<"1. Enqueue"<<endl<<"2. Dequeue"<<endl<<"3. Display"<<endl<<"4. Peek"<<endl<<"5. Go back"<<endl;
            
                    cin>>choice3;
                    
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
                        cout<<endl<<"Going back....";
                        // sleep(2);
                        goto g1;
                    default:
                        cout<<"Entered something wrong...\nPlease re-enter...";
                        cin.get();cin.get();
                        goto g3;
                    }
                    break;
                case 3:
                    g4:
                    system("cls");
                    cout<<".......CIRCULAR QUEUE HUB.........";
                    cout<<endl<<"What do you want to do?";
                    cout<<endl<<"1. Enqueue"<<endl<<"2. Dequeue"<<endl<<"3. Display"<<endl<<"4. Go back"<<endl;
            
                    cin>>choice3;

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
                        cout<<endl<<"Going back....";
                        // sleep(2);
                        goto g1;
                    default:
                        cout<<"Entered something wrong...\nPlease re-enter...";
                        cin.get();cin.get();
                        goto g4;
                    }
                    break;
                case 4:
                    cout<<endl<<"Going back....";
                    // sleep(2);
                    goto g;  
                default:
                    cout<<"Entered something wrong...\nPlease re-enter...";
                    cin.get();cin.get();
                    goto g1;
            }
            break;
        case 2:
            g5:
            
            system("cls");
            cout<<".......STACK HUB.........";
            cout<<endl<<"What do you want to do?";
            cout<<endl<<"1. Static Stack Implementation"<<endl<<"2. Dynamic Stack Implementation"<<endl<<"3. Go Back"<<endl;
    
            cin>>choice2;

            switch(choice2)
            {
                case 1:
                    g6:
                    
                    system("cls");
                    cout<<".......STATIC STACK HUB.........";
                    cout<<endl<<"What do you want to do?";
                    cout<<endl<<"1. Push"<<endl<<"2. Pop"<<endl<<"3. Display"<<endl<<"4. Peek"<<endl<<"5. Go back"<<endl;
            
                    cin>>choice3;

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
                        cout<<endl<<"Going back....";
                        // sleep(2);
                        goto g5;
                    default:
                        cout<<"Entered something wrong...\nPlease re-enter...";
                        cin.get();cin.get();
                        goto g6;
                    }
                case 2:
                    g7:
                    
                    system("cls");
                    cout<<".......DYNAMIC STACK HUB.........";
                    cout<<endl<<"What do you want to do?";
                    cout<<endl<<"1. Push"<<endl<<"2. Pop"<<endl<<"3. Display"<<endl<<"4. Peek"<<endl<<"5. Go back"<<endl;
            
                    cin>>choice3;

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
                        cout<<endl<<"Going back....";
                        // sleep(2);
                        goto g5;
                    default:
                        cout<<"Entered something wrong...\nPlease re-enter...";
                        cin.get();cin.get();
                        goto g7;
                    }
                    break;
                case 3:
                    cout<<endl<<"Going back....";
                    // sleep(2);
                    goto g;
                default:
                    cout<<"Entered something wrong...\nPlease re-enter...";
                    cin.get();cin.get();
                    goto g5;
            }
            break;
        case 3:
            g8:
            system("cls");
            cout<<".......LINKED LIST HUB.........";
            cout<<endl<<"What do you want to do?";
            cout<<endl<<"1. Implement singly Linked List"<<endl<<"2. Implement Doubly Linked List"<<endl<<"3. Go Back"<<endl;
    
            cin>>choice2;

            switch(choice2)
            {
                case 1:
                    g9:
                    
                    system("cls");
                    cout<<".......SINGLY LINKED LIST HUB.........";
                    cout<<endl<<"What do you want to do?";
                    cout<<endl<<"1. Insert"<<endl<<"2. Delete"<<endl<<"3. Display"<<endl<<"4. Peek"<<endl<<"5. Go back"<<endl;
            
                    cin>>choice3;

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
                        cout<<endl<<"Going back....";
                        // sleep(2);
                        goto g8;
                    default:
                        cout<<"Entered something wrong...\nPlease re-enter...";
                        cin.get();cin.get();
                        goto g9;
                    }
                case 2:
                    g10:
                    
                    system("cls");
                    cout<<".......DOUBLY LINKED LIST HUB.........";
                    cout<<endl<<"What do you want to do?";
                    cout<<endl<<"1. Insert"<<endl<<"2. Delete"<<endl<<"3. Display"<<endl<<"4. Peek"<<endl<<"5. Go back"<<endl;
            
                    cin>>choice3;

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
                        cout<<endl<<"Going back....";
                        // sleep(2);
                        goto g8;
                    default:
                        cout<<"Entered something wrong...\nPlease re-enter...";
                        cin.get();cin.get();
                        goto g10;
                    }
                    break;
                case 3:
                    cout<<endl<<"Going back....";
                    // sleep(2);
                    goto g;
                default:
                    cout<<"Entered something wrong...\nPlease re-enter...";
                    cin.get();cin.get();
                    goto g8;
            }
            break;
        case 4:
            g11:
            system("cls");
            cout<<".......SORTING ALGORITHMS HUB.........";
            cout<<endl<<"Enter the number of elements in array to be sorted:";
            cin>>a;
            ar=new int[a];
            cout<<endl<<"Enter the elements of the array:"<<endl;
            for(int i=0;i<a;i++)
            {
                cin>>ar[i];
            }
            cout<<endl<<"By which algorithm you want to sort your array?";
            cout<<endl<<"1. Selection sort"<<endl<<"2. Bubble sort"<<endl<<"3. Insertion sort"<<endl<<"4. Quick sort"<<endl<<"5. Merge sort"<<endl<<"6. Go Back"<<endl;
            cin>>choice2;

            switch(choice2)
            {
                case 1:
                    cout<<endl<<"After sorting your array by Selection sort."<<endl;
                    s.selection(ar,0,a);
                    goto g;
                case 2:
                    cout<<endl<<"After sorting your array by Bubble sort."<<endl;
                    s.bubble(ar,0,a);
                    goto g;
                case 3:
                    cout<<endl<<"After sorting your array by Insertion sort."<<endl;
                    s.insertion(ar,0,a);
                    goto g;
                case 4:
                    cout<<endl<<"After sorting your array by Quick sort."<<endl;
                    if(a>1)
                    {
                        s.quick(ar,0,a);
                        s.printArray(ar,a);
                    }
                    else
                    { 
                        cout<<*ar;
                        cin.get();cin.get();
                    }   
                    goto g;
                case 5:
                    cout<<endl<<"After sorting your array by Merge sort."<<endl;
                    s.merge(ar,0,a);
                    goto g;
                case 6:
                    cout<<endl<<"Going back....";
                    // sleep(2);
                    goto g;
                default:
                    cout<<"Entered something wrong...\nPlease re-enter...";
                    cin.get();cin.get();
                    goto g11;
            }
            break;
        case 5:
            cout<<endl<<"Thank you for Visiting .... Exiting....";
            // sleep(2);
            exit(0);
            break;
        default:
            cout<<"Entered something wrong...\nPlease re-enter...";
            cin.get();cin.get();
            goto g;
        }
    }
    return 0;
}