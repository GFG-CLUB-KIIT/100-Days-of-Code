//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
//Gfg Day-63

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >>m;

    int arr[n];
    for(int i =0 ; i<n ; i++)
    cin >> arr[i];

    sort(arr,arr+n);
    //int c=0;
    int d=m;
    int min=100000000;
  


    for(int i =0 ; i<n && d<n ; i++)
    {
        //cout <<"\nentered\n";
       int e = arr[d-1]-arr[i]; 
       d++;
       if(e<min)
       min =e;
    } 

    cout << min;
return 0;
}


 