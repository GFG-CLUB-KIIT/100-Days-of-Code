//https://www.hackerrank.com/challenges/kangaroo/problem
//HackerRank Day 15

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   double x1,v1,x2,v2;
   cin >> x1 >> v1 >> x2 >> v2;
   double a =(double)(x2-x1)/(v1-v2);
   cout << a<< endl;
   if (a==floor(a) && a>=0)
   cout << "Yes";
   else
   cout << "No";

return 0;
}
