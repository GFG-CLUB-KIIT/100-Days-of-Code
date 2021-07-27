//https://www.hackerrank.com/challenges/cut-the-sticks/problem
//HackerRank Day 37

#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
using namespace std;
int a[1000];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", a+i);
    }
    sort(a, a+n);
    reverse(a, a+n);
    for (; n>0;) {
        int x = a[n-1];
        for (int i = n-1; i >= 0; i--) {
            a[i]-=x;
        }
        printf("%d\n", n);
        while (n>0 && !a[n-1]) n--;
    }
    return 0;
}

