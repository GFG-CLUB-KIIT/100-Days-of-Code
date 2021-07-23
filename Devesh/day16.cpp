//https://codeforces.com/contest/1523/problem/A
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// one of the best solution
int main()
{
 
   int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> v;
        for (int j = 0; j < min(n, m); j++)
        {
            for (int i = 0; i < n; i++)
            {
                //cout<<s<<endl;
                if (i == 0)
                {
                    if (s[i] == '0' && s[i + 1] == '1')
                    {
                        v.push_back(i);
                    }
                }
                else if (i == n - 1)
                {
                    if (s[i] == '0' && s[i - 1] == '1')
                        v.push_back(i);
                }
                else
                {
                    if (s[i] == '0' && (s[i + 1] - '0' + s[i - 1] - '0') == 1)
                        v.push_back(i);
                }
            }
            for (auto x : v)
                s[x] = '1';
                //cout << s << endl;
        }
        cout<<s<<endl;
 
    }
 
    return 0;
}