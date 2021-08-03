//https://www.hackerrank.com/challenges/encryption/problem
//HackerRank Day 43

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    getline(cin , st);
    
    st.erase(remove(st.begin(),st.end(),' '),st.end());
    //cout << st;

    int x= st.length();
    int r = (int)floor(sqrt(x));
    int c = (int)ceil( sqrt(x));
    int a =0;
    string arr[r][c];
    int total = r*c;

    while (total < x) 
    {
        if (r < c) {
            r=r+1;
        } else {
            c=c+1;
        }
        total = r * c;
    }

    cout << r << " " << c << endl;

    for(int i =0 ; i<r && a<x ; i++)
    {
        cout << i << endl;
        for(int j =0 ; j<c && a<x; j++)
        {
            arr[i][j] = st[a++];
        }
        cout << i << " "<< a << endl;
    }

    cout << "Agya";

    for(int i = 0 ; i<c ; i++)
    {
        for (int j =0 ; j<r ; j++)
        cout << arr[j][i];
        cout << " ";
    }
return 0;
}