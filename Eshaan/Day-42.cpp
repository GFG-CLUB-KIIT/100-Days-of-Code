//https://www.hackerrank.com/challenges/repeated-string/problem
//HackerRank Day-42

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long n, c=0 , a ,b ,d , i , le;
    cin >> s;
    le = s.length();
    cin >> n;
    
    for(i =0 ; i< le ; i++)
    {
        if(s[i]=='a')
        c++;
    }
    a = n/le;
    b = n%le;
    d = 0 ;
    if(b!=0)
    {
    
    for(i = 0 ; i<b ; i++)
    {
        if(s[i]=='a')
        d++;
    }
    }
    long long fi=(a*c)+d;
    cout << fi;


return 0;
}