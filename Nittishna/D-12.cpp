// https://practice.geeksforgeeks.org/problems/c-input-output2432/1/?problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&page=1&query=problemStatusunsolveddifficulty[]-2difficulty[]-1page1

#include<bits/stdc++.h>
using namespace std;

int product(int , int);
int main(){
    int a, b;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << product(a,b);
    return 0;
}

int product(int a, int b){

    int prod = 0;
    prod = a * b;
    return prod;

}