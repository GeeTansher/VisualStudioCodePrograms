ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *start = new ListNode(-1, head);
    ListNode *fast = start;
    ListNode *slow = start;

    while (n--)
    {
        fast = fast->next;
    }

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode *q = slow->next;
    slow->next = slow->next->next;
    delete q;
    return start->next;
}