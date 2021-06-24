// * Question Link -> https://www.hackerrank.com/challenges/the-quickest-way-up/problem


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

bool valid(int num, vb &visited){
    return num <= 100 && num > 0 && !visited[num] ? true : false;
}

int get_shortest_path(unordered_map<int, int> &ladders, unordered_map<int, int> &snakes){
    queue<pair<int, int> > q;
    vb visited(101, false);
    q.push(mp(1, 0));
    visited[1] = true;
    while(!q.empty()){
        pair<int, int> front = q.front();
        q.pop();
        if(front.first == 100)
            return front.second;
        for(int i = 1; i <= 6; i++){
            if(valid(front.first + i, visited)){
                if(ladders.count(front.first + i) > 0){
                    q.push(mp(ladders[front.first + i], front.second + 1));
                    visited[front.first + i] = visited[ladders[front.first + i]] = true;
                }
                else if(snakes.count(front.first + i) > 0){
                    q.push(mp(snakes[front.first + i], front.second + 1));
                    visited[front.first + i] = visited[snakes[front.first + i]] = true;
                }
                else{
                    q.push(mp(front.first + i, front.second + 1));
                    visited[front.first + i] = true;
                }       
            }
        }
    }
    return -1;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        unordered_map<int, int> ladders, snakes;
        int l, s, src, dest;
        cin >> l;
        for(int i = 0; i < l; i++){
            cin >> src >> dest;
            ladders[src] = dest;
        }
        cin >> s;
        for(int i = 0; i < s; i++){
            cin >> src >> dest;
            snakes[src] = dest;
        }
        cout << get_shortest_path(ladders, snakes) << '\n';
    }
}

