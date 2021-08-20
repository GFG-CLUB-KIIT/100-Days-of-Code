//https://www.hackerrank.com/challenges/pangrams/problem
//HackerRank Day-58

#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    string st;
    int c = 1;
    getline(cin,st);
    int x = st.length();
    bool al[26] = {false};

    for (int i = 0; i < x; i++)
    {
        char c = st[i];
        if (isalpha(c))
        {
            cout << c << endl;
            if (isupper(c))
                c = (char)tolower(c);
            int b = (int)c;
            //cout << b; abcdefghijklmnopqrstuvwxyz
            if (!al[b - 97])
            {
                al[b - 97] = true;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (!al[i])
        {
            //cout << i << endl;
            c = 0;
            break;
        }
    }

    if (c == 1)
        cout << "pangram ";
    else
        cout << "not pangram \n ";

    return 0;
}