//https://leetcode.com/problems/count-the-number-of-consistent-strings/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> st;
        for(int i=0;i<allowed.size();i++)
        {
            st.insert(allowed[i]);
        }
        int cnt=words.size();
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                if(st.find(words[i][j])==st.end())
                {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};
