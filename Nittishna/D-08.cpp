
// Q. Write a function that checks if the digits of a number are in strict ascending 
//    order. This function will return false for 1729 and true for 267. There is no 
//    limit on the number of digits of the number.

#include<bits/stdc++.h>
using namespace std;

bool isAscending(string);

int main(){
    string num;
    cout << "Enter number:";
    cin >> num;
    cout << isAscending(num) << endl;
    return 0;   
}

bool isAscending(string num){
    for( int i = 1; i < num.length(); ++i){
      if (num[i] > num[i+1]){
          return false;
        }
      }
    return true;
}