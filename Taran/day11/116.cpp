// Problem Link : https://leetcode.com/problems/count-good-numbers/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Solution {
public:
  int mod = 1e9 + 7;
  ll primeans(ll n, ll n1) {
    ll res = 1;
    while (n1 != 0) {
      if (!(n1 & 1)) {
        n = (n * n) % mod;
        n1 /= 2;
      } else {
        res = (res * n) % mod;
        n1--;
      }
    }
    return res;
  }
  int countGoodNumbers(long long n) {

    if (!(n & 1)) {
      return (primeans(5, n / 2) * primeans(4, n / 2)) % mod;
    }
    return (primeans(5, n / 2 + 1) * primeans(4, n / 2)) % mod;
  }
};