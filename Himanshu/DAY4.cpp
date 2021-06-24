//https://codeforces.com/contest/339/problem/B
/*    himanshu070    */

#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    ll ans = 0;
    cin >> n >> m;
    ll A[m];
    for (auto &a : A)
        cin >> a;
    ans = A[0] - 1;
    for (int i = 1; i < m; i++)
    {
        if (A[i] < A[i - 1])
        {
            ans += n - A[i - 1] + A[i];
        }
        else if (A[i] > A[i - 1])
        {
            ans += A[i] - A[i - 1];
        }
    }
    cout << ans;
    return 0;
}