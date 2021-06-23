//https://codeforces.com/problemset/problem/1077/A

// Codeforces : - Day 2

#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>> t;
   for (int i =0 ; i<t ; i++)
   {
       int a,b;
       long long int k;
       cin>> a >> b >>k;

       if(k%2!=0)
       {
           long long int r= ((k/2)+1)*a;
           long long int l = (k/2)*b;
           printf("%lld ", (r-l));
       }
       else
       {
         long long int r= (k/2)*a;
           long long int l = (k/2)*b;
           printf("%lld ", (r-l));  
       }
   } 
}