class Solution
{
public:
    string removeDuplicates(string s)
    {
        if (s.length() <= 1)
            return s;

        int size = s.length();
        stack<int> st;
        st.push(s[size - 1]);

        for (int i = size - 2; i >= 0; --i)
        {
            if (!st.empty() && s[i] == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        s.clear();
        while (!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        return s;
    }
};

// TC = O(N) SC = O(N)
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/