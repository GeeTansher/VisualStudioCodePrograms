bool isPalindrome(ListNode *head)
{
    ListNode *slow = head, *fast = head, *prev = NULL, *temp = NULL;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    prev = slow;
    slow = slow->next;
    prev->next = NULL;

    while (slow)
    {
        temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }

    slow = prev;
    fast = head;
    while (slow)
    {
        if (fast->val != slow->val)
            return false;
        fast = fast->next;
        slow = slow->next;
    }
    return true;
}

// Mine

bool isPalindrome(ListNode *head)
{
    ListNode *p = head;
    int n = 0;
    while (p)
    {
        n++;
        p = p->next;
    }
    int a[n], b[n];
    int i = 0, j = n - 1;
    p = head;
    while (p)
    {
        a[i] = p->val;
        b[j] = p->val;
        i++;
        j--;
        p = p->next;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}