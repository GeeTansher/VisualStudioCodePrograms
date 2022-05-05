#ifndef DSAUNIFIED_QUEUE_H
#define DSAUNIFIED_QUEUE_H

#include <iostream>
using namespace std;

struct snode
{
    int data;
    struct snode *next;
};

struct dnode
{
    int data;
    struct dnode *next;
    struct dnode *prev;
};

class Queue
{
    snode *df, *dr;
    int f, r, n;
    int cf, cr;
    int *arr, *ar;
    int d_n;

public:
    Queue();

    Queue(int n);

    void s_enqueue();

    void s_dequeue();

    void s_display();

    void s_peek();

    void d_enqueue();

    void d_dequeue();

    void d_display();

    void d_peek();

    void c_enqueue();

    void c_dequeue();

    void c_display();
};

#endif // DSAUNIFIED_QUEUE_CLASS_H