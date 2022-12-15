ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
        return NULL;
    ListNode *prev = NULL;
    ListNode *cur = new ListNode(head->val, head->next);
    ListNode *nex = NULL;
    while (cur != NULL)
    {
        nex = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nex;
        // cout<<prev->val<<" ";
    }
    return prev;
}