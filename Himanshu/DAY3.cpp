//https://codeforces.com/contest/270/problem/A
/*    himanshu070    */
#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testc;
    cin >> testc;

    while (testc--)
    {
        ll a;
        cin >> a;

        for (int i = 1; i <= 360; i++)
        {
            if ((i - 2) * 180 == a * i)
            {
                cout << "YES" << endl;
                goto x;
            }
        }
        cout << "NO" << endl;
    x:
        a++;
    }
    return 0;
}