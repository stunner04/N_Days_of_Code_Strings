class Solution {

private:
    bool checkEqualCount(int c1[26] , int c2[26] )
    {
      for(int i = 0 ; i<26;i++)
      {
       if(c1[i]!=c2[i])
       {
         return false;
       }
      }
      return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        int count2[26] = {0};

        for(int i = 0 ; i < s1.length() ; i++)
        {
          count1[s1[i]-'a']++;
        }

        int i = 0 , j = s1.length();

        // for first window only
        while(i<j && i<s2.length())
        { 
          count2[s2[i]-'a']++;
          i++;
        }
        if(checkEqualCount(count1,count2)) return true;
        cout<< i <<"\n"; // last updated ith index ?

        // for next windows

        while(i<s2.length())
        {
          count2[s2[i]-'a']++; // decrement left element count
          count2[s2[i-j]-'a']--; // increment right element count
          i++;

          if(checkEqualCount(count1,count2)) return true;
        }
       return false;
    }
};

// TC = O(N) SC = O(1)
// https://leetcode.com/problems/permutation-in-string/description/