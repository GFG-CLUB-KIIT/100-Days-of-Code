// https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/
#include<bits/stdc++.h>
using namespace std;
void print(int** edges , int n , int start , bool* visited)
{
    cout<<start<<"\n";
    visited[start] = true;
    for(int i=0;i<n;i++)
    {
        if(edges[start][i] == 1)
        {
            if(visited[i])
            {
                continue;
            }
            print(edges , n , i , visited);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    int** edges = new int*[n];
    for(int i=0;i<=n;i++)
    {
        edges[i] = new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            edges[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int first,second;
        cin>>first>>second;
        edges[first][second] = 1;
        edges[second][first] = 1;
    }
    bool* visited = new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i] = false;
    }
    print(edges , n , 0 , visited);
    for(int i=0;i<n;i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
    delete[] visited;
    return 0;
}