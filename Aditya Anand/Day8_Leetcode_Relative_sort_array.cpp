// * Question Link -> https://leetcode.com/problems/relative-sort-array/ 
 
  
 bool compare(const pair<int, int> &a, const pair<int, int> &b){
        if(a.second == b.second)
            return a.first < b.first ? true : false;
        return a.second < b.second ? true : false;
    }
    

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int> priority(1001, INT_MAX);
       vector<pair<int, int> > result(arr1.size()); 
       for(int i = 0; i < (int) arr2.size(); i++)
           priority[arr2[i]] = i;
        for(int i = 0; i < (int) arr1.size(); i++)
            result[i] = make_pair(arr1[i], priority[arr1[i]]);
        sort(result.begin(), result.end(), compare);
        int i = 0;
        for(auto p : result)
            arr1[i] = p.first, i++;
        return arr1;
    }
};