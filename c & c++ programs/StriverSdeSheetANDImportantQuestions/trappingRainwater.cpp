// Linear time but space - 2N
int trap(vector<int> &h)
{
    int n = h.size();
    vector<int> pre(n);
    vector<int> suf(n);
    int ans = 0;
    pre[0] = h[0];
    suf[n - 1] = h[n - 1];
    for (int i = 1; i < n; i++)
    {
        pre[i] = max(pre[i - 1], h[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = max(suf[i + 1], h[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ans += (min(pre[i], suf[i]) - h[i]);
    }
    return ans;
}

// Optimal
int trap(vector<int> &h)
{
    int n = h.size();
    int left = 0, right = n - 1, leftmost = 0, rightmost = 0;
    int ans = 0;

    while (left <= right)
    {
        if (h[left] <= h[right])
        {
            if (h[left] < leftmost)
            {
                ans += leftmost - h[left];
            }
            else
            {
                leftmost = h[left];
            }
            left++;
        }
        else
        {
            if (h[right] < rightmost)
            {
                ans += rightmost - h[right];
            }
            else
            {
                rightmost = h[right];
            }
            right--;
        }
    }
    return ans;
}