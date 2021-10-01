//https://www.hackerrank.com/challenges/happy-ladybugs/problem
//HackerRank Day-67

#include <stdio.h>
int cnt[26];
int main()
{
    int g;
    scanf("%d", &g);
    for (int test = 0; test < g; test++)
    {
        int n;
        char s[105];
        scanf("%d", &n);
        scanf("%s", &s[1]);
        s[0] = '.';
        int fr = 0;
        int valid = 1;
        for (int i = 0; i < 26; i++)
            cnt[i] = 0;
        for (int i = 1; s[i]; i++)
            cnt[s[i] - 'A']++;
        for (int i = 0; i < 26; i++)
            if (cnt[i] == 1)
                valid = 0;
        for (int i = 1; s[i]; i++)
            if (s[i] == '_')
                fr = 1;
        if (!valid)
        {
            printf("NO\n");
            continue;
        }
        if (fr)
        {
            printf("YES\n");
            continue;
        }
        for (int i = 1; s[i]; i++)
        {
            if (s[i] != s[i - 1] && s[i] != s[i + 1])
                valid = 0;
        }
        if (valid)
            printf("YES\n");
        else
            printf("NO\n");
    }
}