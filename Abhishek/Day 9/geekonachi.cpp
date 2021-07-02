#include <bits/stdc++.h>
using namespace std;

int geek(int a, int b, int c, int n)
{
	int arr[110];
	arr[1] = a;
	arr[2] = b;
	arr[3] = c;
	for (int i = 4; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];

	}
	return arr[n];
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, n;
		cin >> a >> b >> c >> n;
		cout << geek(a, b, c, n) << endl;
	}

}