//https://www.hackerrank.com/challenges/kaprekar-numbers/problem
//HackerRank Day-65

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    long long p;
    long long q;
    cin>>p;
    cin>>q;
    vector<long long> res;
    for(long long i=p; i<=q; ++i){
        long long sq = i*i;
        string s = to_string(sq);
        int d = s.size()/2;
        if(d == 0){
            if(i == sq){
                res.push_back(i);
            }
            continue;
        }
        if(stoll(s.substr(0,d))+stoll(s.substr(d,s.size()-d)) == i){
            res.push_back(i);
        }
           }
    if(res.size()>0){
           for(int i=0; i<res.size(); ++i){
               cout<<res[i]<<" ";
           }
        cout<<endl;}
    else{
        cout<<"INVALID RANGE"<<endl;
    }
           return 0;
}