#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int j = 0;
	int c = 0;
	char s2[1000];
	s2[0] = s[0];
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == s2[j])
		{
			c++;
		}
		else {
			cout << s2[j] << c;
			c = 1;
			j++;
			s2[j] = s[i];
		}
	}
	cout << s2[j] << c;
}