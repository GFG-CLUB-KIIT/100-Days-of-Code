/* https://leetcode.com/problems/single-number/ */

#include<bits/stdc++.h>
using namespace std;

int main(){
	// vector<int> a;
	int n,res=0;
	while(cin>>n){
		res^=n;
	}
	cout<<res<<endl;

	return 0;
}