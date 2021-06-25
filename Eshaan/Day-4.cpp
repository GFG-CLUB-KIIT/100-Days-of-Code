//https://codeforces.com/problemset/problem/994/A
//Codeforces Day 4


#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>> n >> m;
    int s[n] , f[m];
    for(int i =0 ; i<n ; i++)
    {
        cin>> s[i];
    }
    //printf(" ");
    for(int i =0 ; i<m ; i++)
    {
        cin>> f[i];
    }

    for (int i = 0 ; i<n ; i++)
    {
        for (int j =0 ; j<m ;j++)
        {
            if (s[i]==f[j])
            printf("%d ", s[i]);
        }
    }
}

