// Kadanes algorithm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c_sum = 0;
    int b_sum = 0;
    for(int i=0;i<n;i++)
    {
        c_sum += arr[i];
        if(b_sum < c_sum)
        {
            b_sum = c_sum;
        }
        if(c_sum < 0)
        {
            c_sum = 0;
        }
    }
    cout<<b_sum<<"\n";
    return 0;
}