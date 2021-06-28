//Sieve of Eratosthenes
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    bool arr[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr[i]=true;
    }

    arr[0]=false;
    arr[1]=false;

    for(int i=2;i*i<=n;i++)
    {
        if(arr[i])
        {
        for(int j=i*i;j<=n;j=j+i)
            {
                arr[j]=false;
            }

        }

    }
    int coun=0;
    for(int i=0;i<n+1;i++)
    {
        //cout<<arr[i]<<" ";
        if(arr[i])
            coun++;
    }
    cout<<coun<<endl;


}

int main()
{
    int n;
    cin>>n;
    sieve(n);

    return 0;
}
