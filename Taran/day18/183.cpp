// Problem Link : https://leetcode.com/problems/add-minimum-number-of-rungs/
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define min(a, b) (a < b ? a : b)
#define INF 0x3f3f3f3f
#define min(a, b) (a < b ? a : b)
#define abs(a) ((a) > 0 ? (a) : -(a))
#define all(a) a.begin(), a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb push_back
#define pi pair<ll, ll>
#define ll long long int
#define pqq priority_queue
#define reverse(a) reverse(all(a))
#define IOS                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define c(a) cout << a << "\n";
using namespace std;
class Solution {
public:
  int addRungs(vector<int> &rungs, int dist) {
    ll n = rungs.size();
    // for(int i=0;i<n;i++){
    //     if(rungs[i]-rungs[i+1]==dist){
    //         continue;
    //     }
    // }
    vector<ll> a;
    a.push_back(0);
    int count = 0;
    ll res = 0;
    for (int i = 0; i < n; i++) {
      if (a[count] + dist < rungs[i]) {
        ll shift = rungs[i] - a[count] - dist;
        res = res + ceil(shift / (dist + 0.0));
      }
      a.pb(rungs[i]);
      count++;
    }
    return res;
  }
};