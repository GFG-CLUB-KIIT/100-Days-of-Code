//https://www.hackerrank.com/challenges/permutation-equation/problem
//HackerRank Day 32

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k,n;
    int ar[51];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(ar[j]==i){
                for(k=1;k<=n;k++){
                    if(ar[k]==j)printf("%d\n",k);
                }
            }
        }
    }
    return 0;
}