class Solution {
public:
    const int mod=1e9+7;
    vector<pair<int,int>> adj[40005];
    int dp[40005];
    int dfs(int node, vector<int> &dist)
    {
       
        if(node==1)
        {
            // cout<<"hello";
            
            return 1;
        }
        if(dp[node]!=-1)return dp[node];
        int current_node=dist[node];
        int cnt=0;
        for(auto i: adj[node])
        {
            int new_node=i.first;
            // int weight=i.second;
            int weight=dist[new_node];
            if(weight >current_node )
            {
                cnt= (cnt+dfs(new_node,dist)%mod)%mod;
            }
        }
        return dp[node]=cnt%mod;
    }
    int dijktra(int src , int n)
    {
        vector<int> dist(n+1,INT_MAX);
        dist[src]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,src});
        while(!pq.empty())
        {
            auto node=pq.top().second;
            auto distance=pq.top().first;
            pq.pop();
            for(auto i: adj[node])
            {
                int nod=i.first;
                int weight=i.second;
                if( (distance+weight) < dist[nod]){
                    dist[nod]=distance+weight;
                    pq.push({dist[nod],nod});
                }
            }
        }
        return dfs(n,dist);
        
    }
    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        for(int i=0;i<edges.size();i++){
            
                adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
                adj[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }
        memset(dp,-1,sizeof(dp));
        
        return dijktra(n,n);
    }
};
