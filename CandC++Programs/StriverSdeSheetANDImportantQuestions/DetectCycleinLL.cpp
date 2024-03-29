bool hasCycle(ListNode *head)
{
    if (!head)
    {
        return false;
    }

    ListNode *fast = head;
    ListNode *slow = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}