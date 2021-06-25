//https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/
#include<bits/stdc++.h>
using namespace std;

void print_BFS(int v , int start , int** edges , bool* visited)
{
    queue<int> pending_v;
    pending_v.push(start);
    visited[start] = true;
    while(pending_v.size())
    {
        int current_vertex = pending_v.front();
        cout<<current_vertex<<" ";
        pending_v.pop();
        for(int i=0;i<=v;i++)
        {
            if((edges[current_vertex][i] == 1) && (visited[i] == false))
            {
                pending_v.push(i);
                visited[i] = true;
            }
        }
    }
}

int main()
{
    int v,e;
    cin>>v>>e;
    if(v==0)
    {
        return 0;
    }
    int** edges = new int*[v];
    for(int i=0;i<v;i++)
    {
        edges[i] = new int[v];
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            edges[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int first , second;
        cin>>first>>second;
        edges[first][second] = 1;
        edges[second][first] = 1;
    }
    bool* visited = new bool[v];
    for(int i=0;i<v;i++)
    {
        visited[i] = false;
    }   
    // print_BFS(v , 0 , edges , visited); this works for connected graph only
    for(int i=0;i<v;i++) // this works for both connected and disconnected graph's
    {
        if(visited[i] == false)
        {
            print_BFS(v , i , edges , visited);
        }
    }
    for(int i=0;i<v;i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
    delete[] visited;
    return 0;
}