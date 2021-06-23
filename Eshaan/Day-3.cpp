// https://codeforces.com/problemset/problem/1096/A
// Day 3 Codeforces

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    for (int i =0 ; i< t ; i++)
    {
        long long int l,r;
        cin >> l >> r;
        printf("%lld %lld", l , (2*l));
        printf(" ");
    }
}