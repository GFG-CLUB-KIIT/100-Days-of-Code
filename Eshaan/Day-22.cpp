//https://www.hackerrank.com/challenges/strange-advertising/problem
//HackerRank  Day 22

#include<iostream>
using namespace std;
int main()
{
    int n , i=1 , c=0 , x=5;
    cin >> n;
    while (i<=n)
    {
        int m = x/2;
        c+=m;
        x=m*3;
        i++;
    }
    cout << c;
return 0;
}