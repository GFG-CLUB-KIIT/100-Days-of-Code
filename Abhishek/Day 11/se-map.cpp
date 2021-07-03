#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <int,set<string>>m;

    int x,n;
    cin>>x>>n;
    for(int i=0; i < n; i++)
    {
        string s;
        int a;
        cin>>s>>a;
        m[a].insert(s);
    }
    auto it = m.end();
    it--;
    auto it2 = m.begin();
    it2--;
    for(;it!=it2;it--){

        if((*it).first<x)
        {
            return 0;
        }
        for(auto y:(*it).second)
        {
            cout<<y<<" "<<(*it).first<<endl;
        }
    }
    return 0;
}