//https://www.hackerrank.com/challenges/balanced-brackets/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=stacks-queues
#include <bits/stdc++.h>
using namespace std;

string isBalanced(string s) {
    stack <char> stk;
    for(int i=0; i<s.length(); i++){
        char temp = s[i];
        if(temp == '(' || temp == '{' || temp == '['){
            stk.push(temp);
        }
        else if(temp == ')' && stk.top() == '('){
            stk.pop();
        }
        else if(temp == ']' && stk.top() == '['){
            stk.pop();
        }
        else if(temp == '}' && stk.top() == '{'){
            stk.pop();
        }
        else{
            return "NO\n";
        }
    }
    if(!stk.empty()){
        return "NO\n";
    }
    return "YES\n";
}