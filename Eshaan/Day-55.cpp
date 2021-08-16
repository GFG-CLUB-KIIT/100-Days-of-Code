//https://www.hackerrank.com/challenges/chocolate-feast/problem
//HackerRank Day-55


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i =0 ; i< t ; i++)
    {
        int n, c , m;//15 , 3 , 2
        cin >> n >> c >> m;
        int bu = n/c;//5
        int wr = bu;///5
        int co=bu;//5
        int x=0;
        //cout << co << "First" << endl;
        while((wr>0 && wr>=m) && x!=1)
        {
            int nb = (wr/m);//2 1 1
            co+=nb;//5+2+1+1
            if(wr==m)
            x=1;
            int a = wr-(nb*m)+nb;//5-(2*2)+2=3
            wr=a;//3

            //cout << co << " " << wr << " " << nb << endl;
        }
        cout << co << endl;
    }
return 0;
}