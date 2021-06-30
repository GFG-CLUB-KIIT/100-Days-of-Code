// Question Link: https://leetcode.com/problems/remove-element/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
int temp= nums.size();
        int count = nums.size();
        for(int i=0;i<nums.size();)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                count++;
            }
            else
            {
                i++;
            }
        }
   return nums.size();
    }
};
