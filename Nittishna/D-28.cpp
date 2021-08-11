//https://leetcode.com/problems/roman-to-integer/
#include<bits/stdc++.h>
using namespace std;

int romanToInt(string);
int main(){
    string roman;
    cout << "Enter roman value:";
    cin >> roman;
    cout << romanToInt(roman);
    return 0;
}
int romanToInt(string s) {
        int ans=0;
        map<char,int>mp={ {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n = s.size();
        for(int i=0;i<n;i++){
            if(i==n-1){
                ans+=mp[s[i]];
            }
            else if((s[i]=='I' or s[i]=='X' or s[i]=='C' ) and (mp[s[i+1]]>mp[s[i]])){
                ans+=(mp[s[i+1]]-mp[s[i]]);
                i++;
            }else{
                ans+=mp[s[i]];
            }
        }
          return ans;  
    }