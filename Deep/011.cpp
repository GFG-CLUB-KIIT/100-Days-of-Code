/*
Problem - https://leetcode.com/problems/bitwise-and-of-numbers-range/
Author - Abhinav Deep
Date - July 1, 2021
*/

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
         int ans = 0;
        for(int i=31; i > -1;i--){
            if( (left & (1<<i)) != (right & (1<<i)) ){
               // cout<<"YES";
                break;
            }
            else{
                if(left & (1<<i)){
                    ans = ans | 1<<i;
                }
            }
        }
        return ans;
    }
};