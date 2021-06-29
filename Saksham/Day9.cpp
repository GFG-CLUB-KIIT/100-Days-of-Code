Problem Link : https://leetcode.com/problems/self-dividing-numbers/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int n, d;
        vector<int>v;
        for(int i = left; i <= right; i++){
            int k=0, cnt=0;
            n=i;
            while(n>0){
                d=n%10;
                k++;
                if(d!=0 && i%d==0)
                    cnt++;
                n=n/10;
            }
            if(cnt==k){
                v.push_back(i);
            }
        }
        return v;        
    }
};