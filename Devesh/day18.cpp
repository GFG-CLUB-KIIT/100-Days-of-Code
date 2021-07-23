//https://codeforces.com/contest/1550/submission/122761456
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
   // int m = unique(s.begin(), s.end())-s.begin();


   if(b>=0)
   {
       cout<<a*n+n*b<<endl;
   }

  else
  {
    int zero_g=0;
    int one_g=0;
    bool con=true;
    bool con1=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0' && con==true)
        {
            zero_g++;
           con=false;
           con1=true;
        }
        else if(s[i]=='1' && con1==true)
        {
            con=true;
            con1=false;
            one_g++;

        }

    }
    int m=one_g+zero_g;
    cout<<n*a+(m/2+1)*b<<endl;

  }
    }






    return 0;
}