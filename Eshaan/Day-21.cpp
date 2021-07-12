//https://www.hackerrank.com/challenges/bon-appetit/problem
//HackerRank Day 21

#include<iostream>
using namespace std;

int main()
{
    int n,k,b,c=0,f=0;
    cin >> n >> k; //4  1
    int bill[n];
    for (int i =0 ; i < n ; i++)
    {
        cin >> bill[i];
        c+=bill[i];//24
    }
     
    int m = bill[k];
    cin >> b; //7
    f=(c-m)/2;//7
    //cout << m << c << f << b;
    if(f==b)
    printf("Bon Appetit");
    else
    cout << b-f;

return 0;
}