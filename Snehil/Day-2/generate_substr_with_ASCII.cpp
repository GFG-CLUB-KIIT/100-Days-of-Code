#include<bits/stdc++.h>

using namespace std;

void substrASCII(string s,string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    int asc = s[0];
    substrASCII(s.substr(1),ans);
    substrASCII(s.substr(1),ans+s[0]);
    substrASCII(s.substr(1),ans+ to_string(asc));
}

int main(){
    string s;
    cin>>s;

    substrASCII(s,"");

    return 0;
}