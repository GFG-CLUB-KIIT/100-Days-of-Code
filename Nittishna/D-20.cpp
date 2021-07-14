// https://www.geeksforgeeks.org/count-of-sets-possible-using-integers-from-a-range-2-n-using-given-operations-that-are-in-equivalence-relation/
#include <bits/stdc++.h>
using namespace std;
bool prime[100001];
 
// Sieve of Eratosthenes to find
// primes less than or equal to N
void SieveOfEratosthenes(int n)
{
 
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
 
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
 
// Function to find number of Sets
void NumberofSets(int N)
{
    SieveOfEratosthenes(N);
 
    // Handle Base Case
    if (N == 2) {
        cout << 1 << endl;
    }
    else if (N == 3) {
        cout << 2 << endl;
    }
    else {
 
        // Set which contains less
        // than or equal to N/2
        int ans = 1;
 
        // Number greater than N/2 and
        // are prime increment it by 1
        for (int i = N / 2 + 1; i <= N; i++) {
 
            // If the number is prime
            // Increment answer by 1
            if (prime[i]) {
                ans += 1;
            }
        }
 
        cout << ans << endl;
    }
}
// Driver Code
int main()
{
    // Input
    int N = 7783;
 
    // Function Call
    NumberofSets(N);
 
    return 0;
}