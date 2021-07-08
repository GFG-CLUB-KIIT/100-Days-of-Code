// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
//HackerRank Day 16
#include<iostream>
using namespace std;

int main()
{
    int n, m=-1, mn=0;
    cin >> n;
    long long int aa[n];
    long long  max=0 , min=0;

    for(int i=0 ; i<n ; i++)
    {
        cin >> aa[i];
        if(i == 0 && aa[0]==0)
        m=0;
        if(max < aa[i])
        {
            max=aa[i];
            if (i==0)
            min=aa[i];
            // cout << "max" << max << endl;
            // cout << "min" << min << endl;
            m++;
        }
        else
        {
            if(min > aa[i])
            {
                min = aa[i];
                // cout << "min" << min << endl;
                mn++;
            }
        }
        
    }
    if (mn == -1)
    mn =0;
    else if (m == -1)
    m =0;

    cout << m  <<" " << mn;
return 0;
}