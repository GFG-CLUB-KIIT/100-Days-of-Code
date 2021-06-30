#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k, s;
	cin >> n >> m >> k >> s;
	char a[100][100] ;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s >= k)
			{
				if (s > 0)
				{

					if (a[i][j] == '.')
						s -= 2;
					else if (a[i][j] == '*')
						s += 5;
					if (a[i][j] == '#' or j == m - 1)
					{

						break;
					}
					s--;
				}
			}
		}
	}
	if (s < k)
	{
		cout << "NO";
		return 0;
	}
	cout << "YES\n" << s;

}