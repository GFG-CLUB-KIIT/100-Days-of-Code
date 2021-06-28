/*
Problem - https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
Author - Abhinav Deep
Date - June 28, 2021
*/

#include<iostream>
using namespace std;

//Function to check if given number n is a power of two.
bool isPowerofTwo(long long n){
    if(!n){
        return false;
    }
    if(n&(n-1)){
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    cout<<isPowerofTwo(n);
    return 0;
}