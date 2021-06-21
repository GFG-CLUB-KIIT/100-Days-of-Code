#include <iostream>

using namespace std;

string removeDuplicates(string s){
    if(s.length() == 0) return "";

    string ros = removeDuplicates(s.substr(1));
    if(s[0] == ros[0]){
        return ros;
    }
    return s[0]+ros;
}

int main(){
    string s;
    cin>>s;

    cout<<removeDuplicates(s);

    return 0;
}