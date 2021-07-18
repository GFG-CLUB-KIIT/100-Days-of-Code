//https://www.hackerrank.com/challenges/the-hurdle-race/problem
//HackerRank Day 27

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , k , c=0;
    cin >> n >> k;
    int h[n];

    for(int i =0 ; i< n ; i++)
    {
    cin >> h[i];
    if (c<h[i])
    c=h[i];
    }
    int b =c-k;
    if(b>=0)
    cout << (b);
    else
    cout << "0";

    
return 0;
}