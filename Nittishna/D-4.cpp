

   // A permutation is a re-arrangement of things. For example, “abc” has the following 
   // six permutations: abc, acb, bac, bca, cab, cba. Of these abc, bca and cab are cyclic 
   // permutations of each other. That is, they can be obtained by moving some characters
   // from the beginning and appending them to the end.
   // Given two strings of the same length, determine if they are cyclic permutations of 
   // each other.



#include <bits/stdc++.h>
using namespace std;

string rotate(string str)
{
    char a = str[str.length() - 1];
    str.erase(str.length() - 1, str.length());
    str = a + str;
    return str;
}

bool check(string str1, string str2)
{
    for (int i = 0; i < str2.length(); ++i)
        {
            str2 = rotate(str2);
            if(str2 == str1)
                return true;
        }
    
    return false;
}

int main()
{
    string str1, str2;
    cout << "Enter string 1 : ";
    cin >> str1;
    cout << "Enter string 2 : ";
    cin >> str2;
    (check(str1, str2)) ? cout << "The strings are circular permutations of each other" : 
                          cout << "The strings are not circular permutations of each other";
    return 0;
}