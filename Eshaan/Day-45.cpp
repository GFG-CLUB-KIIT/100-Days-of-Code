//https://www.hackerrank.com/challenges/service-lane/problem
//HackerRank   Day-45

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,t;
    cin >> n >> t;
    int ar[n];
    int wi[t][2];

    for(int i =0 ; i<n ;i++)
    cin >> ar[i];

    for(int i =0 ; i<t ; i++)
    {
        for(int j =0 ; j<2 ; j++)
        {
        cin >> wi[i][j];
        }
    }

    for(int i =0 ; i <t ; i++)
    {
        int a = wi[i][0];
        int b = wi[i][1]+1;
        int min = 10000;
        for(int j = a ; j<b ; j++)
        {
            if(min > ar[j])
            min = ar[j];
        }
        cout << min <<endl;
    }




return 0;
}