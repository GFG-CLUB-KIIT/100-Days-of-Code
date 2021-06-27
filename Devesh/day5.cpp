//https://www.codechef.com/START5C/problems/TOTCRT

#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}


void sortf(unordered_map<string, int>& M)
{


    vector<pair<string, int> > A;


    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);


    for (auto& it : A) {

        cout << it.second << ' ';

    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    unordered_map<string, int> mp;
    for(int i=0;i<3*n;i++)
    {
    string s;
    int c;
    cin>>s>>c;
    mp[s]+=c;

    }
    sortf(mp);

    }
    return 0;
}
