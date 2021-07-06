// Question Link: https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
	
	void dfs(int start, vector <int> &visited, vector <int> &storeDFS, vector <int> adj[])
	{
	    storeDFS.push_back(start);
	    visited[start] = 1;
	    
	    for(auto i: adj[start])
	    {
	        if(visited[i]==0)
	        {
	            dfs(i,visited,storeDFS,adj);
	        }
	    }
	}
	
	vector<int>dfsOfGraph(int v, vector<int> adj[])
	{
	    vector <int> visited(v+1, 0);
	    vector <int> storeDFS;
	    
	    for(int i=0;i<v;i++)
	    {
	        if(visited[i]==0)
	        {
	            dfs(i,visited,storeDFS,adj);
	        }
	    }
	    return storeDFS;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
