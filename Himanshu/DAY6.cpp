//https://www.codechef.com/problems/WAV2
/*    himanshu070    */
#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, x, negative, i, j;
    cin >> n >> m;
    ll V[n];
    for (ll i = 0; i < n; i++)
        cin >> V[i];
    sort(V, V + n);
    //for(auto a : V) cout << a << " ";

    for (ll i = 0; i < m; i++)
    {
        cin >> x;
        negative = 0;

        // for(j=0; j<n; j++)
        // {
        //     if(V[j]==x)
        //     {
        //         cout << "0";
        //         goto x;
        //     }
        //     if(V[j]>x)
        //     {
        //         negative = n-j;
        //         break;
        //     }
        //}
        ll *ptr = lower_bound(V, V + n, x);
        negative = ptr - &V[0];
        negative = n - negative;
        if (*ptr == x)
            cout << "0" << endl;
        else if ((negative) % 2 == 0)
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl;

        // x:
        // continue;
    }
    return 0;
}