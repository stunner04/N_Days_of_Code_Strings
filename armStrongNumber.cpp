#include <bits/stdc++.h>
bool isArmstrong(int num)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = to_string(num);
    long long int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int val = pow(s[i] - '0', s.length());
        sum += val;
    }
    return sum == num;
}

//https://www.codingninjas.com/studio/problems/armstrong-number_1462443?leftPanelTab=0