// * Question Link -> https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/605/week-3-june-15th-june-21st/3786/


class Solution {
public:   
 
    vector<vector<int>> generate(int numRows) {
      vector<vector<int> > pascal;
        vector<int> base(1, 1);
        pascal.emplace_back(base);
        for(int i = 1; i < numRows; i++){
            vector<int> level;
            for(int l = -1, r = 0; r <= (int) pascal[i - 1].size(); l++, r++){
                int first, second;
                if(l == -1)
                    first = 0;
                else
                    first = pascal[i - 1][l];
                if(r == pascal[i - 1].size())
                    second = 0;
                else
                    second = pascal[i - 1][r];
                 level.emplace_back(first + second);
            }
            pascal.emplace_back(level);
        }
        return pascal;
    }
};