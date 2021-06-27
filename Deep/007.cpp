/*
Problem - https://www.codechef.com/START5C/problems/TOTCRT
Author - Abhinav Deep
Date - June 27, 2021
*/

#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
void solve();

void solve(){
    ll N;
    cin>>N;
    map<string,int> mp;
    for(int i =1; i<=3;i++){
        for(int j = 0;j<N;j++){
            string ques;
            int c;
            cin>>ques>>c;
            mp[ques] += c;
        }
    }
    map <string,int>::iterator it;
    vector <int> v;
    it = mp.begin();
    while(it != mp.end()){
        v.push_back(it->second);
        it++;
    }
    sort(v.begin(),v.end());
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }    
    return 0;
}