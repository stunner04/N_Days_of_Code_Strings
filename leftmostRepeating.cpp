#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;
int leftRepeaating(string s)
{
    bool visited[CHAR];
    int ans = -1;
    fill(visited, visited + CHAR, false);
    for (int i = s.length() - 1; i > 1; i--)
    {
        if (visited[s[i]])
        {
            ans = i;
        }
        else
        {
            visited[s[i]] = true;
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << leftRepeaating(s) << endl;
    return 0;
}

