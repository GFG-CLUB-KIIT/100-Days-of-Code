//https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
//HackerRank Day-61

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i =0 ; i<n ; i++)
    {
        string st;
        cin >> st;
        char arr[]={'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
        int c =0;
        int cou=0;
        int x =st.length();
        for(int j =0 ; j<x && c<10 ; j++)
        {
            if(st[j]==arr[c])
            {
                c++;
                cou++;
            }
        }
        if(cou == 10)
        cout << "YES \n";
        else
        cout << "NO \n";
    }
return 0;
}