#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6;
int dp[N];
const int mod = 1e9 + 7;


int compute(int n, int m)
{
	if (dp[n] != -1) {
		return dp[n];
	}


	if (n > m - 1)
	{
		return dp[n] = (compute(n - 1, m) % mod + compute(n - m, m) % mod) % mod;
	}
	else if (n >= 0)
	{
		return dp[n] = 1;
	}
	else
	{
		return 0;
	}
}


using namespace std;
int32_t main()
{

	int t;
	cin >> t;
	while (t--) {
		memset(dp, -1, sizeof(dp));
		int n, m;
		cin >> n >> m;
		cout << compute(n, m) << endl;

	}

}