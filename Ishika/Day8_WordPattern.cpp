// Problem Link: https://leetcode.com/problems/word-pattern/

class Solution {
public:
    void makeWords(string s, vector<string>& arr){
        string temp = "";
        for(int i  =0; i<s.length(); i++){
            if(s[i]!= ' ' && s[i]!='\0'){
                temp += s[i];
            }
            else{
                arr.push_back(temp);
                temp = "";
            }
        }
        arr.push_back(temp);
    }
    
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        makeWords(s, arr);
        if(arr.size()!= pattern.length()) return false;
        unordered_map<char, string>mymap;
        unordered_map<string, char>mymap2;
        for(int i = 0; i < pattern.length(); i++){
            if(mymap.count(pattern[i]) == 0){
                if(mymap2.count(arr[i]) == 0){
                    mymap[pattern[i]] = arr[i];
                    mymap2[arr[i]] = pattern[i];
                }
                else{
                    if(mymap2[arr[i]] != pattern[i]) return false;
                    mymap[pattern[i]] = arr[i];
                    mymap2[arr[i]] = pattern[i];
                }
            }
            else{
                if(mymap[pattern[i]]!=arr[i]) return false;
                if(mymap2.count(arr[i]) == 0){
                    mymap[pattern[i]] = arr[i];
                    mymap2[arr[i]] = pattern[i];
                }
                else{
                    if(mymap2[arr[i]] != pattern[i]) return false;
                    mymap[pattern[i]] = arr[i];
                    mymap2[arr[i]] = pattern[i];
                }
            }
        } 
        return true;
    }
};