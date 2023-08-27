#include <bits/stdc++.h>
using namespace std;

bool checkSubsequence(string &s1, string &s2)
{
    int n1 = s1.size();
    int n2 = s2.size();

    if (n2 > n1)
    {
        return false;
    }
    
    int j = 0;

    for (int i = 0; i < n1 && j < n2; i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
    }
    return (j == n2);
}

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    cout << checkSubsequence(s1, s2);
    return 0;
}