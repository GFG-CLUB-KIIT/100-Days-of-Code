//https://leetcode.com/problems/stone-game-vi/
class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        
        
        vector<vector<int>>sum;
        for(int i=0;i<aliceValues.size();i++)
        {
            sum.push_back({(aliceValues[i]+bobValues[i]),aliceValues[i],bobValues[i]});
        }
        sort(sum.begin(),sum.end(),greater<vector<int>>());
        int a=0,b=0;
        for(int i=0;i<aliceValues.size();i++)
        {
            if(i%2==0)a+=sum[i][1];
            else b+=sum[i][2];
        }
        
        if(a>b)return 1;
        else if(a<b)return -1;
        return 0;
    }
};
