// * Question Link -> https://www.hackerrank.com/challenges/knightl-on-chessboard/problem


#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <climits>
#include <utility>
using namespace std;

#define mp make_pair
#define pb push_back
#define INFI 10e8
#define INF 10e7
#define mod 1000000007
#define sieve_limit 10e6

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<long long int> vlli;
typedef vector<bool> vb;
typedef vector<vector<int> > vvi;
typedef vector<vector<long long> > vvll;
typedef vector<vector<long long int> > vvlli;
typedef vector<vector<bool> > vvb;


class cell{
public:
    int x, y, len, sx, sy;

    cell(int x, int y, int len){
        this-> x = x;
        this-> y = y;
        this-> len = len;
    }    
};

bool valid(int x, int y, vvb &visited, int &n){
    if(x < 0 || x >= n || y < 0 || y >= n || visited[x][y])
        return false;
    return true;    
}

void get_shortest_path(int &n, vvi &distance){
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(j >= i){
                const int dx[8] = {i, i, -i, -i, j, j, -j, -j};
                const int dy[8] = {j, -j, j, -j, i, -i, i, -i};
                // * src[0][0], fill -> distance[i][j]
                queue<cell> q;
                vvb visited(n, vb(n, false));
                bool reached = false;
                cell src(0, 0, 0);
                q.push(src);
                visited[0][0] = true;
                while(!q.empty()){
                    cell front = q.front();
                    q.pop();
                    if(front.x == n - 1 && front.y == n - 1){
                        distance[i][j] = distance[j][i] = front.len;
                        reached = true;
                        break;
                    }
                    for(int k = 0; k < 8; k++){
                        if(valid(front.x + dx[k], front.y + dy[k], visited, n)){
                            cell neighbour(front.x + dx[k], front.y + dy[k], front.len + 1);
                            q.push(neighbour);
                            visited[front.x + dx[k]][front.y + dy[k]] = true;
                        }
                    }
                }
                if(!reached){
                    distance[i][j] = distance[j][i] = -1;
                }
            }
        }
    }
}


int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vvi distance(n, vi(n, INT_MAX));
    get_shortest_path(n, distance);
    for(int i = 1; i < n; i++){
        for (int j = 1; j < n; j++)
            cout << distance[i][j] << " ";
        cout << '\n';    
    }
}