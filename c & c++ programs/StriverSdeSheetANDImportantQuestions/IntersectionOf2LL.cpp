ListNode *getIntersectionNode(ListNode *ha, ListNode *hb)
{

    ListNode *h = ha;
    ListNode *j = hb;
    int n = 0;
    while (h && j)
    {
        j = j->next;
        h = h->next;
        if (h == NULL)
        {
            while (j)
            {
                n++;
                j = j->next;
            }
            while (n--)
            {
                hb = hb->next;
            }
        }
        else if (j == NULL)
        {
            while (h)
            {
                n++;
                h = h->next;
            }
            while (n--)
            {
                ha = ha->next;
            }
        }
    }
    while (ha && hb)
    {
        if (ha == hb)
        {
            return ha;
            break;
        }
        ha = ha->next;
        hb = hb->next;
    }
    // cout<<h->val<<" "<<j->val;
    return NULL;
}