// The placements/recruitment season is going on in Graphic Era University. The interviews are over, and
// each company has selected some students. But since each student can end up finally in at most one company,
//  a student might have to reject a company which selected him/her. The companies know this, and hence, the
//  companies usually select more students than it can actually employ. So now, the exact pairings should be
//  done.

// There are a total of N candidates (numbered from 1 to N) and M companies (numbered from 1 to M) taking
// part in it. Each candidate has a certain minimum expectation of salary, which is given by the array minSalary
//  (All the arrays are 1-indexed). For each candidate, you are also given the information regarding the
//  companies which have selected him/her. This information is given by an array qual of size N * M, where
//  qual[i][j] = 1 if and only if the i-th candidate has qualified for a job in the j-th company. A company
//  will provide a fixed salary to the candidates it employs, which is given by the array offeredSalary.
//  Also, a company has an upper bound on the number of candidates it can employ and finally give an offer to.
//   This information is provided by array maxJobOffers.

// The D-day has come. Each candidate from 1, 2, .. N (in this order) will go to Dr. Rajesh Pokhriyal
// (Placement Co-ordinator). When the i-th student goes, among the companies which have selected him/her,
// and which still haven't reached their maxJobOffers limit, he picks the company which provides the maximum
//  offeredSalary, provided that it is at least his minSalary.

// You have to find the number of the candidates that will end up with a job, the total amount of salaries
// that the candidates will get, and the number of companies that won't be able to employ even a single
// candidate. This information is very crucial for the placement coordinator, so as to analyze whether it
// makes sense to invite a company to come to the placements session next year or not. Please help the
// coordinator!


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, m, i, t, j, salarySum, emp, notHire;
    string str, ch;

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        emp = 0;
        salarySum = 0;
        notHire = 0;

        ll minSalary[n], qual[n][m], offeredSalary[m], maxJobOffers[m], haveHired[m];

        for (i = 0; i < n; i++)
            cin >> minSalary[i];

        for (i = 0; i < m; i++)
            cin >> offeredSalary[i] >> maxJobOffers[i];


        for (i = 0; i < n; i++)
        {
            cin >> str;
            for (j = 0; j < str.size(); j++)
            {
                ch = str[j];
                qual[i][j] = stoi(ch);
            }
        }

        for (j = 0; j < m; j++)
            haveHired[j] = 0;

        vector<pair<ll, ll>>::iterator it;

        for (i = 0; i < n; i++)
        {
            vector<pair<ll, ll>> vec;

            for (j = 0; j < m; j++)
            {
                if (qual[i][j] == 1)
                {
                    if (minSalary[i] <= offeredSalary[j])
                    {
                        if (maxJobOffers[j] > 0)
                        {
                            vec.push_back(make_pair(offeredSalary[j], j));
                        }
                    }
                }
            }

            if (!vec.empty())
            {

                it = (max_element(vec.begin(), vec.end()));

                salarySum = salarySum + it->first;
                haveHired[it->second] += 1;

                emp++;
                maxJobOffers[it->second] -= 1;
            }
        }

        for (j = 0; j < m; j++)
            if (haveHired[j] == 0)
                notHire++;

        cout << emp << " " << salarySum << " " << notHire << endl;
    }

    return 0;
}
