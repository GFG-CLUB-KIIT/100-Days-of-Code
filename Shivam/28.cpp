#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==t[t.length()-i-1])
        {
            sum++;
        }
    }
    if(sum==s.length() ||sum==t.length())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}