ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || k == 0)
        return head;
    ListNode *p = head;
    ListNode *temp = head;
    int n = 1;
    while (p->next)
    {
        n++;
        p = p->next;
    }
    temp = p;
    k = k % n;
    p = head;
    // cout<<k<<" "<<n<<" ";
    while (k > 0)
    {
        p = p->next;
        k--;
    }

    temp->next = head;
    head = p->next;
    cout << p->val << endl;
    p->next = NULL;

    return head;
}