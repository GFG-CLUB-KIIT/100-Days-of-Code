//https://practice.geeksforgeeks.org/problems/prime-number2314/1/?company[]=Amazon&company[]=Amazon&problemType=functional&difficulty[]=-1&page=1&sortBy=submissions&category[]=Mathematical&query=company[]AmazonproblemTypefunctionaldifficulty[]-1page1sortBysubmissionscompany[]Amazoncategory[]Mathematical
#include<bits/stdc++.h>
using namespace std;

string isPrime(int);
int main(){
    int n;
    cin >> n;
    cout << isPrime(n);
}

string isPrime(int n){

    if( n <= 1){
        return "false";
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return "false";
        }
    }

    return "true";
}