//https://www.hackerrank.com/challenges/the-birthday-bar/problem
//HackerRank Day 26

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int aa[n];

   for(int i =0 ; i<n ; i++)
   cin >> aa[i];

   int d,m , c=0;
   cin >> d >> m;

   for (int i =0 ; i<n ; i++)
   {
       int sum =0 ;
       for (int j =i ; j<i+m ;j++)
       sum +=aa[j];
       if(sum == d)
       c++;
   }

   cout << c;


return 0;
}
