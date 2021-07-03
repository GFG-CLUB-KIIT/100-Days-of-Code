// prims algorithm
#include<bits/stdc++.h>
using namespace std;

class vertex
{
	public:
	int weight = INT_MAX;
	int parent = -1;
	bool visited = false;
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
	}
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			edge[i][j] = 0;
		}
	}
	priority_queue<pair<int , pair<int,int>> , vector<pair<int , pair<int,int>>> , greater<pair<int , pair<int,int>>>> pq;
	vector<pair<int,pair<int , int>>> output;
	for(int i=0;i<e;i++)
	{
		int start , end , weight;
		cin>>start>>end>>weight;
		edge[start][end] = weight;
		edge[end][start] = weight;
	}
	int check = 0;
	int i = 0;
	for(;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			if((edge[i][j] >= 1) && (!ans[j].visited))
			{
				if(ans[j].weight > edge[i][j])
				{
					ans[j].weight = edge[i][j];
					ans[j].parent = i;
					pq.push({edge[i][j] , {i , j}});
				}
			}
		}
		int temp = pq.top().second.second;
		output.push_back(pq.top());
		pq.pop();
		ans[i].visited = true;
		check++;
		i = temp - 1;
		if(check == (v - 1))
		{
			break;
		}
	}
	for(int i=0;i<output.size();i++)
	{
		if(output[i].second.second > output[i].second.first)
		{
			cout<<output[i].second.first<<" "<<output[i].second.second<<" "<<output[i].first<<"\n";
		}
		else
		{
			cout<<output[i].second.second<<" "<<output[i].second.first<<" "<<output[i].first<<"\n";
		}
	}
	for(int i=0;i<v;i++)
	{	
		delete[] edge[i];
	}
	delete[] edge;
	return 0;
}
