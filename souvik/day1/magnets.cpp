/*	https://codeforces.com/group/3KEXcb15Io/contest/331925/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int grpc=0,m,n,prev=0;
	cin>>n;
	while(n--){
		cin>>m;
		if(m!=prev) grpc+=1;
		prev=m;
	}
	cout<<grpc;
	return 0;
}