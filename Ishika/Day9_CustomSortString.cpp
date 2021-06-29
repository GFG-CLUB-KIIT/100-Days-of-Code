// Problem Link: https://leetcode.com/problems/custom-sort-string/

class Solution {
public:
    string customSortString(string order, string str) {
        unordered_map<char , int>priority_map;
        for(int i = 0; i<order.length(); i++){
            priority_map[order[i]] = i;
        }
        priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>>pq;
        for(int i = 0; i<str.length(); i++){
            if(priority_map.count(str[i]) > 0){
                pq.push(make_pair(priority_map[str[i]] , str[i]));
            }
            else{
                pq.push(make_pair(INT_MAX, str[i]));
            }
        }
        string res = "";
        while(pq.size()!=0){
            res += pq.top().second;
            pq.pop();
        }
        return res;
    }
};