// Implementation Of BSF On Graph
#include <bits/stdc++.h>
using namespace std;

int main()
{

   int nodes; cin>>nodes;
   int edges; cin>>edges;

   vector <int> adj[nodes+1];

   for(int i=0;i<edges;i++)
   {
    int u; cin>>u;
    int v; cin>>v;

    adj[u].push_back(v);
    adj[v].push_back(u);
   }

   int visited[nodes];
   for(int i=0;i<nodes;i++)
   {
    visited[i] = 0;
   }
   queue <int> q;
   q.push(0);
   visited[0] = 1;

   while(!q.empty())
   {
      int val = q.front();
      cout<<val<<endl;
      q.pop();

      for(auto i: adj[val])
      {
         if(visited[i]!=1){q.push(i); visited[i]=1;}
      }
   }


}
