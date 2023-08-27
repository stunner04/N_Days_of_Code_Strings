#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{

    int count[CHAR];
    fill(count, count + CHAR, 0);

    for (int i = 0; i < CHAR; i++)
    {
        if (chars[i] >= 'a' && chars[i] <= 'z')
        {
            count[chars[i] - 'a']++;
        }
        // else
        // {
        //     count[chars[i] - 'A']++;
        // }
    }

    chars.clear();
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] == 1)
        {
            chars.push_back((char)(i + 'a'));
        }
        else if (count[i] > 1)
        {
            chars.push_back((char)(i + 'a'));
            chars.push_back((char)(count[i]));
        }
    }

    return chars.size();
}

int main()
{
      vector<char> c = { 'a' , 'b' , 'b' , 'c' , 'c' ,'c'};

      cout<< compress(c);
    return 0;
}