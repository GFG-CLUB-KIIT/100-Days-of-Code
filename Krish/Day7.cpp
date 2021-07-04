// Dijkstra'as algorithm
#include<bits/stdc++.h>
using namespace std;

class vertex
{
    public:
    bool visited = false;
    int weight = INT_MAX;
};

int main()
{
    int v,e;
    cin>>v>>e;
    vertex ans[v];
    int** edge = new int*[v];
    for(int i=0;i<v;i++)
    {
        edge[i] = new int[v];
        for(int j=0;j<v;j++)
        {
            edge[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int start,end,weight;
        cin>>start>>end>>weight;
        edge[start][end] = weight;
        edge[end][start] = weight;
    }
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> pq;
    for(int i=0;i<v;i++)
    {
        if((edge[0][i] > 0) && (!ans[i].visited))
        {
            ans[i].weight = edge[0][i];
            pq.push({edge[0][i] , i});
        }
    }
    ans[0].visited = true;
    int i;
    int a = pq.top().second;
    for(i=a;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            i = a;
            if((edge[i][j] > 0) && (!ans[j].visited))
            {
                int temp = pq.top().first + edge[i][j];
                if(temp < ans[j].weight)
                {
                    pq.push({temp , j});
                    ans[j].weight = temp;
                }
            }
        }
        ans[i].visited = true;
        if(a == v - 1)
        {
            break;
        }
        a = pq.top().second;
        while(1)
        {
            if(ans[a].visited)
            {
                pq.pop();
                a = pq.top().second;
            }
            else
            {
                break;
            }
        }
    }
    ans[0].weight = 0;
    for(int b=0;b<v;b++)
    {
        cout<<b<<" "<<ans[b].weight<<"\n";
    }
    for(int b=0;b<v;b++)
    {
        delete[] edge[b];
    }
    delete[] edge;
    return 0;
}
