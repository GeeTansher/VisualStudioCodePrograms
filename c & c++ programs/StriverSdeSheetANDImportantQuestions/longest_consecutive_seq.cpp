int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    // set<int> s( nums.begin(), nums.end() );
    // nums.assign( s.begin(), s.end() );
    int maxi = 1;
    for (int i = 1; i < n; i++)
    {
        int m = 1;
        while (i < n && nums[i] == nums[i - 1] + 1)
        {
            m++;
            i++;
        }
        maxi = max(maxi, m);
    }
    return maxi;
}

// set

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    set<int> s(nums.begin(), nums.end());
    int maxi = 1;
    for (int num : s)
    {
        if (s.find(num - 1) == s.end())
        {
            int currNum = num;
            int currStreak = 1;

            while (s.find(currNum + 1) != s.end())
            {
                currNum += 1;
                currStreak += 1;
            }

            maxi = max(maxi, currStreak);
        }
    }
    return maxi;
}