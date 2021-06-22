/* https://leetcode.com/problems/single-number/ 

explaination:
	since XOR is commutative operation and XOR of two same number gives 0
	=> (x^y)^x = (x^X)^y
*/

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