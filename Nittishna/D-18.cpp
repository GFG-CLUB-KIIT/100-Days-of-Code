// https://practice.geeksforgeeks.org/problems/sum-of-product-of-x-and-y-with-floornx-y3711/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=CPP&category[]=Prime%20Number&category[]=Fibonacci&category[]=palindrome&category[]=logical-thinking&category[]=cpp-operator&category[]=cpp-strings&category[]=%20CPP-Control-Flow&category[]=CPP-Control-Flow&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=CPP&category[]=Prime%20Number&category[]=Fibonacci&category[]=palindrome&category[]=logical-thinking&category[]=cpp-operator&category[]=cpp-strings&category[]=%20CPP-Control-Flow&category[]=CPP-Control-Flow&problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&page=1&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]CPPcategory[]Prime%20Numbercategory[]Fibonaccicategory[]palindromecategory[]logical-thinkingcategory[]cpp-operatorcategory[]cpp-stringscategory[]%20CPP-Control-Flowcategory[]CPP-Control-FlowproblemStatusunsolveddifficulty[]-2difficulty[]-1page1category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]CPPcategory[]Prime%20Numbercategory[]Fibonaccicategory[]palindromecategory[]logical-thinkingcategory[]cpp-operatorcategory[]cpp-stringscategory[]%20CPP-Control-Flowcategory[]CPP-Control-Flow
#include<bits/stdc++.h>
using namespace std;

long long int sumOfProduct(int );
int main(){

    int n = 0;
    cout << "enter n:";
    cin >> n;
    sumOfProduct(n);
    return 0;
}

long long int sumOfProduct(int n){

    int ans = 0, y = 0;
    for(int x = 1; x <= n; x++){
        y = n/x;

        ans += x * y;
    }

    cout << ans;
}