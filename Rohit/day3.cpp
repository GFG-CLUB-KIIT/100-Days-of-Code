Link: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
    int minAddToMakeValid(string s) {
        int mini=0;
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(!st.empty())
            {
                if(s[i]=='(')
                    st.push('(');
                else 
                    st.pop();
            }
            else if(s[i]==')')
                mini++;
            else
                st.push(s[i]);
        }
        return mini+st.size();
    }
};
