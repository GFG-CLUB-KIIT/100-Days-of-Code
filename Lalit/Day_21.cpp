// https://codeforces.com/contest/1337/problem/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll level[200005] = {0};
ll subtree[200005] = {0};

ll dfs(map<ll, vector<ll>> mp, vector<ll> &visited, ll src, ll p)
{
    visited[src] = 1;
    level[src] = p;

    for (auto nbr : mp[src])
    {
        if (visited[nbr] == 0)
        {
            ll sub = dfs(mp, visited, nbr, p + 1);
            subtree[src] += sub;
        }
    }

    // subtree[src] = 0;
    return subtree[src] + 1;
}

void solve()
{
    ll n, k, u, v;
    cin >> n >> k;

    map<ll, vector<ll>> mp;
    vector<ll> visited(n + 1, 0);
    visited[0] = 1;

    for (ll i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }

    dfs(mp, visited, 1, 0);

    // for(auto x:subtree)
    // {
    //     cout<<x<<" ";
    // }

    vector<ll> res(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        res[i] = level[i] - subtree[i];
    }

    sort(res.begin(), res.end(), greater<ll>());

    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ans += res[i];
    }

    cout << ans << endl;
}

int main()
{
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}