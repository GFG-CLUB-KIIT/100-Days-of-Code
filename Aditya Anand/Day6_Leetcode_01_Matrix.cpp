// * Question Link -> https://leetcode.com/problems/01-matrix/


class cell{
public:
    int x, y, dist;
    
    cell(int x, int y, int dist){
        this-> x = x;
        this-> y = y;
        this-> dist = dist;
    }
};

class Solution {
public:
    
    const int dx[4] = {-1, 0, 1, 0};
    const int dy[4] = {0, 1, 0, -1};
    
    bool valid(int i, int j, int &n, int &m, vector<vector<int> > &mat){
        if(i < 0 || i >= n || j < 0 || j >= m || mat[i][j] == 0)
            return false;
        return true;
    }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size(); 
        vector<vector<int> > distance(n, vector<int>(m, INT_MAX));
        queue<cell> q;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 0){
                    cell src(i, j, 0);
                    q.push(src);
                }
            }
       
        while(!q.empty()){
            cell front = q.front();
            q.pop();
            distance[front.x][front.y] = front.dist;
            for(int i = 0; i < 4; i++){
                int cx = front.x + dx[i], cy = front.y + dy[i];
                if(valid(cx, cy, n, m, mat)){
                    cell child(cx, cy, front.dist + 1);
                    q.push(child);
                    mat[cx][cy] = 0;
                }
            } 
        }
        return distance;
    }
};