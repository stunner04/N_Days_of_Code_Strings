#include <bits/stdc++.h>
using namespace std;

vector<int> patSearchDist(string &t, string &p)
{
    vector<int> v;
    int n = t.size();
    int m = p.size();
    for (int i = 0; i < (n - m);)
    {
        int j = 0;
        for (int j = 0; j < m; j++)
        {
            if (p[j] != t[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            v.push_back(i);
        }
        if (j == 0)
        {
            i++;
        }
        else
        {
            i += j; // skipping the matched char in t & s
        }
    }

    return v;
}

int main()
{
    string p, t;
    cin >> p >> t;
    for (int &index : patSearchDist(t, p))
    {
        cout << index << endl;
    }
    return 0;
}