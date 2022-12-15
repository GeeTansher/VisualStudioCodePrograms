// Brute force

Node *copyRandomList(Node *head)
{
    map<Node *, Node *> mp;
    Node *p = head;
    while (p != NULL)
    {
        Node *q = new Node(p->val);
        mp[p] = q;
        p = p->next;
    }

    p = head;
    while (p != NULL)
    {
        if (p->next == NULL)
            mp[p]->next = NULL;
        else
            mp[p]->next = mp[p->next];

        if (p->random == NULL)
            mp[p]->random = NULL;
        else
            mp[p]->random = mp[p->random];

        p = p->next;
    }
    return mp[head];
}

// Optimal
Node *copyRandomList(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        Node *q = new Node(p->val);
        q->next = p->next;
        p->next = q;
        p = p->next->next;
    }

    p = head;
    while (p != NULL)
    {
        if (p->random == NULL)
            p->next->random = NULL;
        else
            p->next->random = p->random->next;
        p = p->next->next;
    }

    p = head;
    Node *dummy = new Node(0);
    Node *q = dummy;
    while (p != NULL)
    {
        q->next = p->next;
        p->next = q->next->next;
        q = q->next;
        p = p->next;
    }

    return dummy->next;
}