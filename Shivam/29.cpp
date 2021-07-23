#include<bits/stdc++.h>
#include<chrono>

typedef unsigned long long int  ulli;
typedef long long int lli;
using namespace std;
using namespace std::chrono;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    lli ans = 0,check = 0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0 && check<m)
        {
            ans += arr[i];
            check++;
        }
    }
    cout<<abs(ans);
    auto begin = std::chrono::high_resolution_clock::now();
    auto end = std::chrono::high_resolution_clock::now();
    // cout <<"\nExecution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds "<<"\n";
    return 0;
}