// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
// HackerRank Day 35

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,e=100,a=0;
    cin >> n >> k;
    int c[n];
    for(int i=0 ; i<n ;i++)
    {
        cin >> c[i];
    }

    int i =1;

    while(e!=0&& i<=n)
    {
        if(c[i-1]==1)
        {
            e-=3;
        }

        else
        {
            e-=1;
        }
        
        i=(i+k)%n;
        if(i==1)
        break;
    }
    cout << e;
return 0;
}