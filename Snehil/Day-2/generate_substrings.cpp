#include <iostream>

using namespace std;

void substring(string s,string ans)
{
    if(s.size() == 0){
        cout<<ans<<"\n";
        return;
    }

    char c = s[0];
    string ros = s.substr(1);

    substring(ros,ans);
    substring(ros,ans+c);
}

int main(){
    string s;
    cin>>s;

    substring(s,"");

    return 0;
}