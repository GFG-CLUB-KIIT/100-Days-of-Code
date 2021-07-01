// * Question Link -> https://leetcode.com/problems/max-consecutive-ones-iii/


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int _max = 0, zeroes = 0;
        for(int i = 0, j = -1; i < (int) nums.size(); i++){
            nums[i] == 0 ? zeroes += 1 : zeroes = zeroes; 
            while(zeroes > k){
                j++;
                nums[j] == 0 ? zeroes-- : zeroes = zeroes;
            }
            _max = max(_max, i - j);
        }
        return _max;
    }
};