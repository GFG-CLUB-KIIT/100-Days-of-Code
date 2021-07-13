// Problem Link : https://leetcode.com/problems/isomorphic-strings/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>m,m1;
        int n=s.size();
        for(int i=0;i<n;i++){
            //mapping both 
           m[s[i]]=t[i];
           m1[t[i]]=s[i];
        }
        for(int i=0;i<n;i++){
            if(m[s[i]]!=t[i] || m1[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};