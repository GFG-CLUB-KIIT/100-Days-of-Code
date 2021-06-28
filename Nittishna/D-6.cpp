
// Write a function that prints the value of the largest of the three integer arguments given to it.

#include<bits/stdc++.h>
using namespace std;

int print_largest(int a, int b, int c) {
  return max(a,b)>c ? max(a,b): c;
}

int max(int a, int b){
   return a>b ? a : b ;
}
int main()
{  cout<<print_largest(4,2,3);
    return 0;
}