//https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
//HAckerRank  Day 29

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[26];
    for(int i =0 ; i<26 ; i++)
    cin >> n[i];

    string ch;
    int co=0;
    cin >> ch;
    int x =ch.length();

    for(int i =0 ; i<x ; i++)
    {
        char c=ch[i];
        int m = int(c)-97;
        //cout << m << endl;
        if(n[m]>co)
        co=n[m];
    }

    cout << co*x;
return 0;
}