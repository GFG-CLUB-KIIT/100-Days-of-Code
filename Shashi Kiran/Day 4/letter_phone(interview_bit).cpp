vector<string> phone;
string test;
void form(vector<string> &v,int j,string ans){
    if(j==test.length()){
        v.push_back(ans);
        return;
    }else{
        string x = phone[(test[j]-'0')];
        // cout<<x<<endl;
        for(int i=0;j<x.length();i++){
            ans+=x[i];
            form(v,j+1,ans);
            ans.pop_back();
        }
    }
}
vector<string> Solution::letterCombinations(string A) {
    test = A;
    // cout<<test<<endl;
    phone = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    // cout<<phone[(test[0]-'0')];
    vector<string> v;
    form(v,0,"");
    phone.clear();
    test="";
    return v;
}
