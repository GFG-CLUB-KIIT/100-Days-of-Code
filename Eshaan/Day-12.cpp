//https://codeforces.com/group/3KEXcb15Io/contest/333968/problem/D
//Codeforces Day 12

#include <cstdio>

int main()
{
    int n, amount(0);
    scanf("%d", &n);

    bool b[3001] = {false};
    int pfactors[3001] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                pfactors[j] += 1;
            }
        }

        if (pfactors[i] == 2)
        {
            amount += 1;
        }
    }
    printf("%d\n", amount);
    return 0;
}