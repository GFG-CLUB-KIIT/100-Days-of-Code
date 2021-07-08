class Solution {
    public String countAndSay(int n) {
        String ans="";
        ans+="1";
        if(n==1){
            return ans;
        }
        int j=1;
        while(j<n){
            int i=1;
        String temp="";
        int count=1;
        char a=ans.charAt(0);
        while(i<ans.length()){
            char c=ans.charAt(i);
            if(c!=a){
                temp=temp+String.valueOf(count)+a;
                a=c;
                count=1;
            }
            else{
                count++;
            }
            i++;
        }
        temp=temp+String.valueOf(count)+a;
            ans=temp;
        j++;
        }
        return ans;
    }
}