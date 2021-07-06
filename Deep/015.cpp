/*
Problem - https://leetcode.com/problems/longest-common-prefix/
Author - Abhinav Deep
Date - July 5, 2021
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int i,l = strs.size();
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[l-1];
        for( i =0; i < first.length() && i < last.length(); i++){
            if(first[i] != last[i]){
                break;
            }
        }
        return first.substr(0,i);
    }
};