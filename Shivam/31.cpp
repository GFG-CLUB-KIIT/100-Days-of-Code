#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            sum++;
        }
    }
    if(sum>1)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1;
                exit(0);
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1;
                exit(0);
            }
        }
    }
    return 0;
}