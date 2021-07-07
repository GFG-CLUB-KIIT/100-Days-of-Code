//https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1/?category[]=CPP&category[]=CPP&problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&page=1&query=category[]CPPproblemStatusunsolveddifficulty[]-2difficulty[]-1page1category[]CPP#
#include<bits/stdc++.h>
using namespace std;

int getSum(int A[], int);

int main(){

    int A[100], N;
    cout << "enter n:";
    cin >> N;
    cout << "Enter array:";
    for(int i = 0; i < N; i++){
        cin >> A[i]; 
    } 

    getSum(A, N);
    return 0;
}

int getSum(int A[], int N){
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += A[i];
    }
    cout << sum;
}
