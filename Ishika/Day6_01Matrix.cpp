// Problem Link: https://leetcode.com/problems/01-matrix/

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>dist(mat.size(), vector<int>(mat[0].size(), INT_MAX));
        int m = mat.size(), n= mat[0].size();
        queue<pair<int, int>>que;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 0){
                    dist[i][j] = 0;
                    que.push(make_pair(i, j));
                }
            }
        }
        
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        while(que.size()!=0){
            auto top = que.front();
            que.pop();
            for(int i =0; i<4; i++){
                int x = top.first + dir[i][0];
                int y = top.second + dir[i][1];
                if(x>=0 && y>=0 && x<m && y<n && dist[x][y]==INT_MAX){
                    dist[x][y] = dist[top.first][top.second] + 1;
                    que.push(make_pair(x, y));
                }
            }
        }
        return dist;
    }
};