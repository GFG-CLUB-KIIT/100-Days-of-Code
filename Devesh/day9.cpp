//Extended eculid algorithms
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Triplet
{public:
    int x;
    int y;
    int gcd;


};

Triplet extended(int a,int b)
{
    if(b==0)
    {
       Triplet ans;
       ans.gcd=a;
       ans.x=1;
       ans.y=0;
       return ans;

    }
    Triplet ans;
    Triplet smallans=extended(b,a%b);
    ans.gcd=smallans.gcd;
    ans.x=smallans.y;
    ans.y=smallans.x-(a/b)*smallans.y;
    return ans;

}

int main()
{
   int a,b;
   cin>>a>>b;
   Triplet ans=extended(a,b);
   cout<<ans.gcd<<endl;
   cout<<ans.x<<endl;
   cout<<ans.y<<endl;



    return 0;
}
