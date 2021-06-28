class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;
        vector<int> h(m,0);
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(matrix[i][j] == 0) h[j] = 0;
                else h[j] += 1;
            }
            vector<int> temp = h;
            sort(temp.begin(), temp.end());
            for(int j = 0; j < m; ++j){
                ans = max(ans, temp[j] * (m - j));
            }
        }
        return ans;
    }
};
