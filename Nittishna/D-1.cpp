/* Q.Write a function that returns the smallest palindromic integer, 
     greater than the integer argument n given to it.
*/

#include<iostream>
using namespace std;

int reverse (int n){
  int rem=0 ;
  while(n>0){
      rem = rem * 10 + n%10;
      n=n/10;
  }
  return rem;
}

bool is_Palindrome(int n){
  return n == reverse(n);
}

int next_Palindrome(int n){
    do{
        ++n;
    }while(!is_Palindrome(n));
return n;
}

int main(){
 cout<<next_Palindrome(23456);
}