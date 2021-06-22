#include <iostream>

using namespace std;

string moveX(string s){
    if(s.length() == 0){
        return "";
    }
    if(s[0] == 'x')
        return moveX(s.substr(1)) + s[0];
    return s[0] + moveX(s.substr(1));    
}

int main(){
    string s;
    cin>>s;

    cout<<moveX(s)<<endl;

    return 0;
}