//https://codeforces.com/problemset/problem/1493/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << n - k + k / 2 << '\n';
        for (int i = k + 1; i <= n; ++i) cout << i << " ";
        for (int i = (k + 1) / 2; i < k; ++i) cout << i << " ";
        cout << '\n';
    }

    return 0;
}
