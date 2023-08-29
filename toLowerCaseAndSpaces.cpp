#include <bits/stdc++.h>
string editSentence(string &str)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string ans = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // ILoveCoding -> i love coding
        {
            ans.push_back(tolower(str[i]));

            if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
            {
                ans.push_back(' ');
            }

            continue;
        }
        if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
        {
            ans.push_back(str[i]);
            ans.push_back(' ');
            continue;
        }
        ans.push_back(str[i]);
    }
    return ans;
}

// https://www.codingninjas.com/studio/problems/ninja-and-editor_1171183?leftPanelTab=0