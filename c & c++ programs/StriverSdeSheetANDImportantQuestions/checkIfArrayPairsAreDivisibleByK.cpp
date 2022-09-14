// Input: arr = [1,2,3,4,5,10,6,7,8,9], k = 5
// Output: true
// Explanation: Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).

bool canArrange(vector<int> &arr, int k)
{
    long long int sum = 0;
    bool neg = false, isPair = false;
    vector<int>::iterator i = arr.begin();
    int first = *i;
    for (; i != arr.end(); i++)
    {
        if (i != arr.begin() && (first + *i) % k == 0)
            isPair = true;
        sum += *i;
        if (*i < 0)
            neg = true;
    }

    if (neg && isPair && sum % k == 0)
        return true;

    else if (isPair && sum % k == 0 && sum >= k * (arr.size() / 2))
        return true;

    else
        return false;
}