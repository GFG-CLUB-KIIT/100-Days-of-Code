// Question Link: https://leetcode.com/problems/palindrome-number/
class Solution {
    bool flag = true;
public:
    bool check(string str)
    {
       string temp="";
        for(int i = str.size()-1;i>=0;i--)
        {
            temp=temp+str[i];
        }
        if(temp==str){return true;}
        else{return false;}
    }
    bool isPalindrome(int x) {
        string str = to_string(x);
        bool ans = check(str);
        return ans;
        
    }
};
