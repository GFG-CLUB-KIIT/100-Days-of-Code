Link: https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(char c : s1) freq[c - 'a']++;
        int j = 0, i = 0, count_chars = s1.size();
        while(j < s2.size()){
            if(freq[s2[j++] - 'a']-- > 0)
                count_chars--;
            if(count_chars == 0) return true;
            if(j - i == s1.size() && freq[s2[i++] - 'a']++ >= 0)
                count_chars++;
        }
        return false;
    }
};
