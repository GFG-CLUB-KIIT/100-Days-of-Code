//Question Link: https://leetcode.com/problems/richest-customer-wealth/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& vec) {
        int global_max = vec[0][0]; 
    for(int i=0;i<vec.size();i++)
    {
        int local_sum = 0;
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
            local_sum = local_sum + vec[i][j];
        }
        global_max = max(global_max, local_sum);
        cout<<endl;
    }
        return global_max;
    }
};
