//https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<long long int> prefix(nums.size()+1,0);
        int n=nums.size();
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
             prefix[i]=prefix[i-1]+nums[i];
        }
        
        vector<int> ans(nums.size(),0);
        for(int i=0;i<n;i++)
        {
             int right_part=(prefix[n-1]-prefix[i]);
             int multiplication=(n-1-i)*nums[i];
             right_part=(right_part-multiplication);
             int left_part=0;
            if(i>0)
            {
                    left_part=(prefix[i-1]);
            }
            multiplication=(i)*(nums[i]);
            // cout<<left_part<<" "<<multiplication<<"\n";
            left_part=(multiplication-left_part);
            
            ans[i]=right_part+left_part;
            
        }
        return ans;
    }
};
