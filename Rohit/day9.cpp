Link : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int k=1;
        int n=s.length();
        int m=part.length();
        while(k!=2)
        {
            n=s.length();
            string res;
            int i=0;
            int gg=0;
            for(;i<=n-m;i++)
            {
                if(s.substr(i,m)==part)
                {
                    i+=m;
                    gg=1;
                    break;
                }
                else
                {
                    res+=s[i];
                }
            }
            for(;i<n;i++)
            {
                res+=s[i];
            }
            if(!gg)
                k=2;
            s=res;
        }
        return s;
    }
};
