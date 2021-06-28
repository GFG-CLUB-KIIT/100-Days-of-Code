// * Question Link -> https://leetcode.com/problems/rotting-oranges/


class cell{
public:
    int x, y, time;
    
    cell(){
        this-> x = -1;
        this-> y = -1;
        this-> time = 0;
    }
    
    cell(int x, int y, int time){
        this-> x = x;
        this-> y = y;
        this-> time = time;
    }
};
class Solution {
public:
    
    const int dx[4] = {-1, 0, 1, 0};
    const int dy[4] = {0, 1, 0, -1};
    
    bool valid(int x, int y, int &n, int &m, vector<vector<int> > &grid, vector<vector<bool> > &visited){
        if(x < 0 || x >= n || y < 0 || y >= m || visited[x][y] || grid[x][y] == 0 || grid[x][y] == 2)
            return false;
        return true;
    }
    
    void bfs_helper(int si, int sj, int &n, int &m, vector<vector<int> > &grid, vector<vector<bool> > &visited, vector<vector<int> > &elapsed){
        queue<cell> q;
        cell src(si, sj, 0);
        q.push(src);
        visited[si][sj] = true;
        while(!q.empty()){
            cell front = q.front();
            q.pop();
            elapsed[front.x][front.y] = front.time;
            for(int i = 0; i < 4; i++){
                if(valid(front.x + dx[i], front.y + dy[i], n, m, grid, visited)){
                    int cordx = front.x + dx[i], cordy = front.y + dy[i];
                    if(front.time + 1 < elapsed[cordx][cordy]){
                        cell fresh(cordx, cordy, front.time + 1);
                        q.push(fresh);
                    }
                    visited[cordx][cordy] = true;
                }
            }
        }
    }
    
    int bfs(vector<vector<int> > &grid){
        int n = grid.size(), m = grid[0].size(), max_time = 0;
        vector<vector<int> > elapsed(n, vector<int>(m, INT_MAX));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                vector<vector<bool> > visited(n, vector<bool>(m, false));
                if(grid[i][j] == 2)
                    bfs_helper(i, j, n, m, grid, visited, elapsed);
            }
        }
        bool all_rot = true;
        for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                  if(grid[i][j] == 1)
                     max_time = max(max_time, elapsed[i][j]);
                  if(elapsed[i][j] == INT_MAX && grid[i][j] == 1){
                     all_rot = false;
                      break;
                }
            }
            if(!all_rot)
                break;
        }
        return all_rot ? max_time : -1;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        return bfs(grid);
    }
};