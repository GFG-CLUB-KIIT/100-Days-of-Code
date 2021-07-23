//https://www.hackerrank.com/challenges/find-digits/problem
//HackerRank Day 33

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;

    for(int i =0 ; i<t ; i++)
    {
        int n , c=0 ;
        cin >> n;
        int d = n;
        while (n!=0)
        {
            int x = n%10;
            //cout <<"x " << x << endl;
            if(x==0)
            c=c;
            else if (d%x==0)
            c++;
            //cout <<"count " <<  c << endl;
            n=n/10;
            //cout << "n " << n << endl;
        }

        cout << c << endl;
    }
return 0;
}