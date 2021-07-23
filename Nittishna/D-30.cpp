//https://leetcode.com/problems/power-of-two/
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int);
int main(){
    int num;
    cout << "enter num: ";
    cin >> num;
    cout << isPowerOfTwo(num);
    return 0;
}

bool isPowerOfTwo(int num){
    if (num == 0)
    return false;

    return (ceil(log2(num)) == floor(log2(num)));
}