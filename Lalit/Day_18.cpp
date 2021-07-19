// https://codeforces.com/contest/1530/problem/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr1(n), arr2(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    ll req = n - floor(n / 4);

    sort(arr1.begin(), arr1.end(), greater<ll>());
    sort(arr2.begin(), arr2.end(), greater<ll>());

    ll sum1 = 0, sum2 = 0;
    ll lastidx = -1, lastidxx = -1;
    for (ll i = 0; i < req; i++)
    {
        sum1 += arr1[i];
        if (i == req - 1)
        {
            lastidx = i;
        }
    }

    for (ll i = 0; i < req; i++)
    {
        sum2 += arr2[i];
        if (i == req - 1)
        {
            lastidxx = i;
        }
    }

    // cout<<sum1<<" "<<sum2<<endl;

    ll step = 0;
    ll lastreq = req;
    ll addn = n;
    while (sum1 < sum2)
    {
        sum1 += 100;
        sum2 += 0;
        addn++;
        ll preq = addn - floor(addn / 4);
        // cout<<preq<<endl;
        if (preq > lastreq)
        {
            // if(lastidx<0)
            // {
            //     sum1 -= 100;
            //     sum2 -= 0;
            // }
            // else
            // {
            // sum1 += 100;
            // sum2 += 0;
            // }

            // lastidx--;
            // cout<<sum1<<" "<<sum2<<endl;
            lastidxx++;
            if (lastidxx < n)
            {
                sum2 += arr2[lastidxx];
            }
            lastreq = preq;
        }
        else
        {
            if (lastidx < 0)
            {
                sum1 -= 100;
                sum2 -= 0;
            }
            else
            {
                sum1 -= arr1[lastidx];
                // sum2 += arr2[lastidx];
                // cout<<sum1<<" "<<sum2<<endl;
            }

            lastidx--;
            // lastreq = preq;
        }
        //  cout<<sum1<<" "<<sum2<<endl;
        step++;
    }

    cout << step << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}