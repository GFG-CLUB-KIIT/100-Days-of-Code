// Problem link: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        for(int i = 0; i<numRows; i++){
            if(i==0){
                vector<int>temp={1};
                res.push_back(temp);
            }
            else if(i == 1){
                vector<int>temp={1, 1};
                res.push_back(temp);
            }
            else{
                vector<int>temp(i+1, 1);
                for(int j = 1; j<i; j++){
                    temp[j] = res[i-1][j] + res[i-1][j-1];
                }
                res.push_back(temp);
            }
            
        }
        return res;
    }
};