//https://www.hackerrank.com/challenges/lisa-workbook/problem
//HackerRank Day-58

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,k , p ,c;
    cin >> n >>k;
    int arr[n];
    for(int i =0 ; i< n ; i++)
    cin >> arr[i];
    c=0;p=1;
    for(int i = 0 ; i<n ;i++)
    {
        //cout <<"next" <<endl;  
        int j; 
        for(j =1 ; j<=arr[i] ; j++)
        {
            if(p==j)
            c++;
            //cout << "page" << p << endl;
            // cout << "count" << c << endl;
            if(j%k==0)
            p++;
        }
        if(arr[i]<k)
        p++;
        else if((j-1)%k!=0)
        p++;
    }
    cout << c;
return 0;
}