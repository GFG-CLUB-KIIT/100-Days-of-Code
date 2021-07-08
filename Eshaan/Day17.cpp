//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
//HackerRank Day-17

#include<iostream>
using namespace std;

int main()
{
   int n,k,c=0;
   cin >> n >> k; 
   int aa[n];

   for (int i =0 ; i<n ; i++)
   cin >> aa[i];


   for (int i = 0 ; i<n-1 ; i++)
   {
       for (int j =i+1 ; j<n ; j++)
       {
           if((aa[i]+aa[j])%k==0)
           {
           c++;
           //cout << c;
           }
       }
   }

   cout << c;
return 0;
}