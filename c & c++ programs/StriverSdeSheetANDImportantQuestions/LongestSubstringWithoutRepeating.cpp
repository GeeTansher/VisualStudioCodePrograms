int lengthOfLongestSubstring(string s)
{

    unordered_set<char> set;
    int ctr = 0;
    if (s.length() == 0)
        return 0;
    int i = 0, j = 0, n = s.size();
    while (i < n && j < n)
    {
        if (set.find(s[j]) == set.end())
        {
            set.insert(s[j++]);
            ctr = max(ctr, j - i);
        }
        else
        {
            set.erase(s[i++]);
        }
    }
    return ctr;
}