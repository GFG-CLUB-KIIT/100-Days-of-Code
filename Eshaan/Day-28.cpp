//https://www.hackerrank.com/challenges/utopian-tree/problem
//HackerRank   Day28


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    for (int i =0 ; i<n ; i++)
    {
        int t;
        cin >> t;
        int c = 1;
        if(t==0)
        cout << c << endl;
        else
        {
            for (int j =1 ; j<=t ; j++)
            {
                if(j%2==0)
                c+=1;
                else
                c*=2;
            }
            cout << c << endl;
        }
    }
return 0;
}
