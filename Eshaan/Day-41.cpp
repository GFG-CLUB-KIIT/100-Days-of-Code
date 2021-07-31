//https://www.hackerrank.com/challenges/sock-merchant/problem
//HAckerrank Day 41

#include <bits/stdc++.h>
using namespace std;


    int n, c[105], x;
    int main()
{

    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        c[x]++;
    }

    int ans = 0;

    for (int i = 1; i < 100; i++)
        ans += c[i] / 2;
    printf("%d\n", ans);
    return 0;
}
