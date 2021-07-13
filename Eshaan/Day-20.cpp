//https://codeforces.com/problemset/problem/451/A
//Codeforces Day - 20

#include <iostream>
using namespace std;
int n, m, i;
int main() {
    cin >> n >> m;
    if (n > m) {
        i = m;
    } else {
        i = n;
    }
    if (i % 2 == 0) {
        cout << "Malvika";
    } else {
        cout << "Akshat";
    }
}