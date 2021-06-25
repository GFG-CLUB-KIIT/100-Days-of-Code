// Problem Link: https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int level = 0;
        queue<pair<int, int>>que;
        for(int i= 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == 2){
                    que.push(make_pair(i, j));
                    grid[i][j] = 0;
                }
            }
        }
        vector<vector<int>>dir = {{0,1}, {0,-1},{1,0},{-1,0}};
        int size = que.size();
        while(que.size()!=0){
            auto top = que.front();
            que.pop();
            for(int i = 0; i<4; i++){
                int x = top.first + dir[i][0];
                int y = top.second + dir[i][1];
                if(x >= 0 && y >=0 && x< grid.size() && y <grid[0].size() && grid[x][y] ){
                    que.push(make_pair(x, y));                    
                    grid[x][y] = 0;
                }
            }
            size--;
            if(size == 0){
                size = que.size();
                
                if(size == 0)break;
                level++;
            }
        }
        
        for(int i= 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return level;
    }
};