//https://www.hackerrank.com/challenges/beautiful-binary-string/problem
//HackerRank Day-59


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr;
    cin >> arr;
    int c=0;

    for(int i =0 ; i<n-2 ; i++)
    {
        if(arr[i]=='0' && arr[i+1]=='1' && arr[i+2]=='0')
        {
            arr[i+2]='1';
            i=i+2;
            c++;
        }
    }

    cout << c;
    
return 0;
}