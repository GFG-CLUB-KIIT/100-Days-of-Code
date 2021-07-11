#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<pair<int,int> > v;
	int k1 = k;
	map<int,int> m1,m2;
	while(k1--){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
		m1[x]=y;
		m2[y]=x;
	}
	int x1,x2;
	for(auto i:m1){
		x1 = i.first;
		break;
	}
	
	for(auto i:m1){
		x2 = i.first;
	}
	
	int dist1 = ceil((x2+x1)/2.0);
	int y1,y2;
	for(auto i:m2){
		y1 = i.first;
		break;
	}
	
	for(auto i:m2){
		y2 = i.first;
	}
	
	int dist2 = ceil((y2+y1)/2.0);
	int c1 = min(abs(dist1-x1),abs(dist2-m1[x1]));
	int c2 = min(abs(dist1-x2),abs(dist2-m1[x2]));
	int c3 = min(abs(dist1-y1),abs(dist2-m2[y1]));
	int c4 = min(abs(dist1-y2),abs(dist2-m2[y2]));
	int ans = max({c1,c2,c3,c4});
	cout<<ans<<endl;
}
