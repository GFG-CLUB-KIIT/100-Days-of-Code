//https://www.hackerrank.com/challenges/bigger-is-greater/problem
//HackerRank Day-71

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 string s;

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        cin >> s;
        if (next_permutation(s.begin(), s.end())) printf("%s\n", s.c_str());
        else printf("no answer\n");
    }
    return 0;
}