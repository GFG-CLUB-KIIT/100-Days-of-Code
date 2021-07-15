//https://www.hackerrank.com/challenges/counting-valleys/problem
//HackerRank Day 25

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    string st;
    cin >> st;
    //cout << st[0] << st[1];
    int m=0 , c=0;
    for (int i = 0 ; i< n ; i++)
    {
        char ch = st[i];
        if(ch == 'U')
        {
        m+=1;
        if(m==0)
        c++;
        }
        else
        m-=1;
        
    }
    cout << c;
return 0;
}
