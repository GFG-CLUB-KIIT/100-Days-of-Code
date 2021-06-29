// Kruskals Algorithm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e,flag = 1;
    cin>>v>>e;
    vector<pair<int,pair<int,int>>> edge;
    vector<pair<int,pair<int,int>>> output(v - 1);
    for(int i=0;i<e;i++)
    {
        int one,two,three;
        cin>>one>>two>>three;
        edge.push_back({three , {one , two}});
    }
    sort(edge.begin() , edge.end());
    int parent[v];
    iota(parent , parent + v , 0);
    int count = 0;
    for(int i=0;i<e;i++)
    {   
        if(count == v-1)
        {
            break;
        }
        else
        {
            int a = edge[i].second.first;
            int b = edge[i].second.second;
            int weight = edge[i].first;
            int temp = a;
            int parent_a;
            while(1)
            {
                if(parent[temp] == temp)
                {
                    parent_a = temp;
                    break;
                }
                temp = parent[temp];
            }
            temp = b;
            int parent_b;
            while(1)
            {
                if(parent[temp] == temp)
                {
                    parent_b = temp;
                    break;
                }
                temp = parent[temp];
            }
            if(parent_a != parent_b)
            {
                parent[parent_a] = parent_b;
                output[count].second.first = a;
                output[count].second.second = b;
                output[count].first = weight;
                count++;
            }
        }
    }
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i].second.first<<" ";
        cout<<output[i].second.second<<" ";
        cout<<output[i].first<<"\n";
    }
    return 0;
}