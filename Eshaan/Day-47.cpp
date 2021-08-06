//https://www.hackerrank.com/challenges/tutorial-intro/problem
//HackerRank Day-46

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin >> s >> n;
    int arr[n];
    for(int i =0 ; i<n ;i++)
    {
      cin >> arr[i];
    }
     for(int i =0 ; i<n ;i++)
     {
      if(arr[i]==s)
      {
          cout << i;
          break;
      }  
    }
return 0;
}