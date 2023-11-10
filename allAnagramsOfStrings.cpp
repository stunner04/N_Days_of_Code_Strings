class Solution
{
private:
    bool checkEqualCount(int c1[26], int c2[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (c1[i] != c2[i])
            {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        int count1[26] = {0};
        int count2[26] = {0};

        for (int i = 0; i < p.length(); i++)
        {
            count2[p[i] - 'a']++;
        }

        int i = 0, j = p.length();

        // for first window
        while (i < j && i < s.length())
        {
            count1[s[i] - 'a']++;
            i++;
        }
        if (checkEqualCount(count1, count2))
        {
            ans.push_back(i - j); // at 0th index we got one anagram
        }

        cout << "Last Updated i : " << i << "\n";

        // for next sliding windows
        while (i < s.length())
        {
            count1[s[i - j] - 'a']--;
            count1[s[i] - 'a']++;
            i++;

            if (checkEqualCount(count1, count2))
            {
                ans.push_back(i - j); // at ith index we got one anagram
            }
        }
        return ans;
    }
};

// TC = O(N) SC = O(1)
// https://leetcode.com/problems/find-all-anagrams-in-a-string/