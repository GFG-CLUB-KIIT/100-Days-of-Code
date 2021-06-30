// Problem Link: https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>>freq;
        for(int i = 0; i<strs.size(); i++){
            map<char, int>mymap;
            for(int j = 0; j<strs[i].length(); j++){
                mymap[strs[i][j]]+=1;
            }
            freq[mymap].push_back(strs[i]);
        }
        vector<vector<string>>result;
        for(auto element: freq){
            vector<string>temp;
            for(int i = 0; i<element.second.size(); i++){
                temp.push_back(element.second[i]);
            }
            result.push_back(temp);
        }
        return result;
    }
};