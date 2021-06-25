//https://codeforces.com/contest/1541/problem/A
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
        ll n;
        cin >> n;
        ll A[n];
        for (int i = 0; i < n; i++)
            A[i] = i + 1;
        if (n == 1)
        {
            cout << "1" << endl;
            break;
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                swap(A[i], A[i + 1]);
                i++;
            }
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
            {
                swap(A[i], A[i + 1]);
                i++;
            }
            swap(A[n - 1], A[n - 3]);
        }
        for (auto &a : A)
            cout << a << " ";
        cout << endl;
    }
    return 0;
}