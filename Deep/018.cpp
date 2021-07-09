/*
Problem - https://leetcode.com/problems/factorial-trailing-zeroes/
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int ans = n/5;
        int temp = n;
        while(temp = temp/5){
            ans += temp/5;
            //temp /=5;
        }
        return ans;
    }
};