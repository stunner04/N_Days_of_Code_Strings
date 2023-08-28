#include <bits/stdc++.h>
using namespace std;

string amazingStrings(string first,string second,string third)
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string x = first + second;
    int checkThird[26]={0};
    
    if(third.length()<x.length() || third.length()>x.length() )
    {
        return "NO";
    }
    for(int i = 0 ; i < x.length() ; i++)
    {
       checkThird[x[i]-'A']++;
       checkThird[third[i]-'A']--;
    }
    bool flag = true;
     for(int i = 0 ; i < 26 ; i++)
     {
         if(checkThird[i]>0)
         {
             flag = false;
             break;
         }
     }
     if(flag)
     {
         return "YES";
     }
     else
     {
         return "NO";
     }
}

// https://www.codingninjas.com/studio/problems/easy_6614000?leftPanelTab=0