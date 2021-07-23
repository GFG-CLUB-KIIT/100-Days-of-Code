// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution
{
public:
    int find(vector<int> &nums, int s, int e, int target)
    {
        if (s > e)
        {
            return -1;
        }

        int mid = (s + e) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[s] <= nums[mid])
        {
            if (target < nums[mid] && target >= nums[s])
            {
                return find(nums, s, mid - 1, target);
            }
            return find(nums, mid + 1, e, target);
        }

        if (target >= nums[mid] && target <= nums[e])
            return find(nums, mid + 1, e, target);

        return find(nums, s, mid - 1, target);
    }

    int search(vector<int> &nums, int target)
    {
        int n = nums.size() - 1;
        return find(nums, 0, n, target);
    }
};