// https://practice.geeksforgeeks.org/problems/the-dice-problem2316/1
#include<bits/stdc++.h>
using namespace std;

int opposite(int);
int main(){

    int N = 0;
    cout << "enter :";
    cin >> N;
    cout << opposite(N);
    return 0;
}

int opposite(int N){

    int opp = 0;
    opp = 7 - N;
    return opp;

}