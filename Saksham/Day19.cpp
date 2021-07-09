//Problem Link : https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int size = nums.size();
        int subsets = 1 << size;
        set<vector<int>> s;
        for (int i = 0; i < subsets; i++) {
            vector<int> v;
            for (int j = 0; j < size; j++) {
                if ((i & (1 << j)) != 0) {
                    v.push_back(nums[j]);
                }
            }
            sort(v.begin(), v.end());
            s.insert(v);
        }
        vector<vector<int>> ans;
        for (auto x : s) {
            ans.push_back(x);
        }
        return ans;
    }
};