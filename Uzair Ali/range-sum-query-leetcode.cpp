class NumArray {
public:
    vector <int> ans;
    NumArray(vector<int>& nums) {
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            int sum = nums[i]+ans[i-1];
            ans.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){return ans[right];}
        int pre = ans[right]-ans[left-1];
        return pre;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
