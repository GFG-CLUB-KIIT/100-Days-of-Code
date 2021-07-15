// https://leetcode.com/problems/longest-valid-parentheses/

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length(), c = 0;
        stack<int> st;
        int ma = INT_MIN;
        
        st.push(-1);
        
        for(int i=0; i<n; i++)
        {
            if(s[i] == '(')
            {
                st.push(i);
            }
            
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
                
                if(!st.empty())
                {
                    ma = max(ma,i-st.top());
                }
                else
                {
                    st.push(i);
                }
            }   
            
        }
        
        if(ma==INT_MIN)
        {
            return 0;
        }
        return ma;
        
    }
};