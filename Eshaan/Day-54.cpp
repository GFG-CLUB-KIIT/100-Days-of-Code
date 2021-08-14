//https://www.hackerrank.com/challenges/making-anagrams/problem
//HackerRank Day-54

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;

    int m=a.length();
    int n=b.length();
    int c= m+n;

    for(int i =0 ; i<m ; i++)
    {
        cout <<"Next\n\n";
        for(int j =0 ; j<n ; j++)
        {
            if(a[i]==b[j])
            {   
                //cout << b[j];
                cout << b[j] << endl;
                b[j]='$';
                c=c-2;
                cout << c << endl;
                break;
            }
        }
    }

    cout << c<<endl;
    for(int i =0 ; i<n ; i++)
    cout << b[i];


return 0;
}