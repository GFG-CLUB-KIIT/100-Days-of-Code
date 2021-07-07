// https://practice.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1/?category[]=CPP&category[]=CPP&problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&page=1&query=category[]CPPproblemStatusunsolveddifficulty[]-2difficulty[]-1page1category[]CPP#
#include<bits/stdc++.h>
using namespace std;

int findElement(int a[], int ,int);
int main(){

    int a[100], n, key;
    cout << "n:";
    cin >> n;
    cout << "array:";
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    cout <<"key :";
    cin >> key;

    cout << findElement(a, n, key);
    return 0;
}

int findElement( int a[], int n, int key){
    for(int i = 0; i < n; i++){
        if ( i == key){
            return a[i];
        }
    }
}