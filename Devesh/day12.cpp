//Find the gcd of a number if A is an INT and B is in the form of string

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Eucld Algorithms
int gcd(int a,int b)
{
    if(b==0)
        return a;
    if(a<b)
    {
        swap(a,b);
        gcd(b,a%b);
    }
    gcd(b,a%b);


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a;
    string s;
    cin>>a>>s;

    if(a==0)
    {
        cout<<s<<endl;
        continue;
    }

  //Convert the string in the range of int
    int current_number = 0;
        for (int i = 0; i < s.size(); i++)
        {
            current_number = ((current_number * 10) % a + (s[i] - '0') % a) % a;
        }
    cout<<gcd(a,current_number)<<endl;
    }




    return 0;
}
