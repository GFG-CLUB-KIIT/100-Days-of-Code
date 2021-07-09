// https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=CPP&category[]=Prime%20Number&category[]=Fibonacci&category[]=palindrome&category[]=logical-thinking&category[]=cpp-operator&category[]=cpp-strings&category[]=%20CPP-Control-Flow&category[]=CPP-Control-Flow&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=CPP&category[]=Prime%20Number&category[]=Fibonacci&category[]=palindrome&category[]=logical-thinking&category[]=cpp-operator&category[]=cpp-strings&category[]=%20CPP-Control-Flow&category[]=CPP-Control-Flow&problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&page=1&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]CPPcategory[]Prime%20Numbercategory[]Fibonaccicategory[]palindromecategory[]logical-thinkingcategory[]cpp-operatorcategory[]cpp-stringscategory[]%20CPP-Control-Flowcategory[]CPP-Control-FlowproblemStatusunsolveddifficulty[]-2difficulty[]-1page1category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]CPPcategory[]Prime%20Numbercategory[]Fibonaccicategory[]palindromecategory[]logical-thinkingcategory[]cpp-operatorcategory[]cpp-stringscategory[]%20CPP-Control-Flowcategory[]CPP-Control-Flow
#include<bits/stdc++.h>
using namespace std;

int largest(int A[], int);
int main(){

    int A[100], n;
    cout << "enter n: ";
    cin >> n;
    cout << "enter array: ";
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cout << largest(A, n);

    return 0;
}

int largest(int A[], int n){
   
    int large = 0;
    for(int i = 0; i < n; ++i){
        if (large < A[i]){
            large = A[i];
        }
    } 
    return large;
}