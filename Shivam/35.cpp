#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,x,y;
    cin>>n>>m>>a;
    if(m%a!=0)
    {
        x=m/a+1;
    }
    else
    {
        x=m/a;
    }
        if(n%a!=0)
    {
        y=n/a+1;
    }
    else
    {
        y=n/a;
    }
    cout<<x*y;
    return 0;// hi
}