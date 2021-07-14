//https://practice.geeksforgeeks.org/problems/reverse-digit0316/1/?category[]=Mathematical&category[]=Mathematical&problemType=functional&difficulty[]=-2&page=1&sortBy=submissions&query=category[]MathematicalproblemTypefunctionaldifficulty[]-2page1sortBysubmissionscategory[]Mathematical#
#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n = 0, a = 0, p = 0;
    cin >> n;
   
		    while(n != 0){
		        a = n % 10;
		        p = a + p * 10;
		        n /= 10;
		    }
            cout << p;
            return 0;
}