// Recursion

int lengthLL(ListNode *head)
{
    ListNode *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

ListNode *revKgroups(ListNode *head, int k, int len)
{
    if (len < k)
        return head;

    ListNode *prev = NULL;
    ListNode *nex = NULL;
    ListNode *curr = head;
    int count = 0;

    while (curr != NULL && count < k)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }

    head->next = revKgroups(nex, k, len - k);

    return prev;
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    int len = lengthLL(head);
    if (head == NULL || k > len || k == 1)
        return head;

    return revKgroups(head, k, len);
}

// striver solution

int lengthOfLinkedList(ListNode *head)
{
    int length = 0;
    while (head != NULL)
    {
        ++length;
        head = head->next;
    }
    return length;
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;

    int length = lengthOfLinkedList(head);

    ListNode *dummyHead = new ListNode(0);
    dummyHead->next = head;

    ListNode *pre = dummyHead;
    ListNode *cur;
    ListNode *nex;

    while (length >= k)
    {
        cur = pre->next;
        nex = cur->next;
        for (int i = 1; i < k; i++)
        {
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        length -= k;
    }
    return dummyHead->next;
}