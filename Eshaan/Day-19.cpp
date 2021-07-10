//https://codeforces.com/problemset/problem/1092/A
//Codeforces //Day-19

#include<iostream>
using namespace std;

int main()
{


    int i,j,k;
    int n,m,t;

    cin >> t;
    while(t--)
    {
        string s;
        cout << n << k;

        m=n/k;
        for(j=0;j<k;j++)
        {
            for(i=0;i<m;i++)
                s.push_back(j+'a');
        }

        m=n%k;
        for(i=0;i<m;i++)
        {
            s.push_back(i+'a');
        }

        cout<<s<<endl;

    }

    return 0;
}