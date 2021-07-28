//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
//Day 38 HackerRank

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i<n ; i++)
    cin >>a[i];
    int c=0;
    for(int i = 0 ; i<=n-2 ; i++)
    {
        if(a[i+1]!=1) //i=3
        {
            if(a[i+2]!=1)
            {
                i=i+1;
                c++;
            }
            else
            c++;
        }
        else
        {
        c++;
        i++;//i=
        }
    }
    cout << c;
    return 0;
}
