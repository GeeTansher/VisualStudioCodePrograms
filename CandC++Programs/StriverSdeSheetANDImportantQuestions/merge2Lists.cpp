// Iterative Approach

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL && list2 == NULL)
        return NULL;

    else if (list1 == NULL)
        return list2;

    else if (list2 == NULL)
        return list1;

    ListNode *prev = NULL, *q = new ListNode();
    if (list1->val < list2->val)
    {
        prev = new ListNode(list1->val, list1->next);
        list1 = list1->next;
    }
    else
    {
        prev = new ListNode(list2->val, list2->next);
        list2 = list2->next;
    }

    q = prev;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            prev->next = list1;
            prev = prev->next;
            list1 = list1->next;
            prev->next = list2;
        }
        else
        {
            prev->next = list2;
            prev = prev->next;
            list2 = list2->next;
            prev->next = list1;
        }
    }
    while (list2)
    {
        prev->next = list2;
        prev = prev->next;
        list2 = list2->next;
        prev->next = list1;
    }
    while (list1)
    {
        prev->next = list1;
        prev = prev->next;
        list1 = list1->next;
        prev->next = list2;
    }
    return q;
}

// Recursive Approach

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (l1 == NULL)
    {
        return l2;
    }

    if (l2 == NULL)
    {
        return l1;
    }

    if (l1 == nullptr && l2 == nullptr)
    {
        return NULL;
    }

    if (l1->val <= l2->val)
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}