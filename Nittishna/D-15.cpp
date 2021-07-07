// https://practice.geeksforgeeks.org/problems/vowel-or-not0831/1/?category[]=CPP&category[]=CPP&problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&page=1&query=category[]CPPproblemStatusunsolveddifficulty[]-2difficulty[]-1page1category[]CPP
#include<bits/stdc++.h>
using namespace std;

char isVowel(char);
int main(){

   char c;
    cout << "enter:";
    cin >> c;
    isVowel(c);
    return 0;
}

char isVowel(char c){

    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout << "yes";
    }
    else 
        cout << "no ";
    
}