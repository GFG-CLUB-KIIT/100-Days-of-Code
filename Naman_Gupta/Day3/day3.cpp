class Solution { // 16 ms, faster than 64.81%
public:
    const int a = 0, e = 1, i = 2, o = 3, u = 4, MOD = 1e9 + 7;
    int countVowelPermutation(int n) {
        vector<long long> dp(5, 1LL), prevDP(5, 1LL); // a, e, i, o, u
        while (n-- > 1) {
            dp[a] = (prevDP[e] + prevDP[i] + prevDP[u]) % MOD;
            dp[e] = (prevDP[a] + prevDP[i]) % MOD;
            dp[i] = (prevDP[e] + prevDP[o]) % MOD;
            dp[o] = prevDP[i];
            dp[u] = (prevDP[i] + prevDP[o]) % MOD;
            dp.swap(prevDP);
        }
        return accumulate(prevDP.begin(), prevDP.end(), 0LL) % MOD ; // Return sum of prevDP elements.
    }
};


// Count Vowels Permutation
// using DP
// 