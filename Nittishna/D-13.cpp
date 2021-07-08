// https://practice.geeksforgeeks.org/problems/remainder-evaluation3755/1

#include<bits/stdc++.h>
using namespace std;

int remainder(int ,int);
int main(){

    int num1 = 0, num2 = 0;
    cout << "enter num1 and num2 :";
    cin >> num1 >> num2;
    cout << remainder(num1, num2);
    return 0;
}

int remainder(int num1, int num2){

    int rem = 0;
    rem = num1 % num2;
    return rem;
}