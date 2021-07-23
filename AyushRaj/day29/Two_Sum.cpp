// https://leetcode.com/problems/two-sum/submissions/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        map<int, vector<int>> m;
        vector<int> v;

        for (int i = 0; i < nums.size(); i++)
            m[nums[i]].push_back(i);
        for (auto it : m)
        {
            if (target == 2 * it.first && it.second.size() > 1)
            {
                v.push_back(it.second[0]);
                v.push_back(it.second[1]);
            }

            else if (m.count(target - it.first))
            {
                v.push_back(it.second[0]);
                v.push_back(m[target - it.first][0]);
                break;
            }
        }

        return v;
    }
};