#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	string ar[n];
	string ar2[m];
	for(int i=0;i<n;i++) cin>>ar[i];
	for(int i=0;i<m;i++){
		string x;
		for(int j=0;j<n;j++){
			x+=ar[j][i];
		}
		ar2[i] = x;
	}
	string x(n,'1');
	int ctr=0;
	for(int i=0;i<m;i++)
		if(x==ar2[i]) ctr++;
	cout<<ctr<<endl;
}
