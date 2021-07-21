//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
//HackerRank Day31

#include<bits/stdc++.h>
using namespace std;

int rev(int a)
{
    int c=0;
    while(a!=0)
    {
        int x = a%10;
        c=c*10+x;
        a/=10;
    }
    return c;
}

int main()
{
    long long a,b,k;
    cin >> a >> b >>k;
    int co=0;
    for(int i = a ; i<=b ; i++)
    {
        int s = rev(i);
        if((abs(i-s))%k==0)
        co++;
    }
    cout << co;
return 0;
}