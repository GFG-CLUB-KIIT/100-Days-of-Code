// Question Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& vec) {
    int minPrice = INT_MAX;
   int profit =0;

   for(int i=0;i<vec.size();i++)
   {
      minPrice = min(minPrice, vec[i]);
      int temp = vec[i]-minPrice;
      profit = max(profit, temp);
   }  
        return profit;
    }
};