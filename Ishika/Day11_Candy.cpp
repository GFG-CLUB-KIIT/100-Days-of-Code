// Problem Link: https://leetcode.com/problems/candy/

class Solution {
public:
    int candy(vector<int>& arr) {
        vector<int>result(arr.size(), 0);
        vector<int>result2(arr.size(), 0);
        result[0] = 1; 
        result2[arr.size()-1] = 1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i-1]<arr[i]){
                result[i] = result[i-1]+1;
            }
            else{
                result[i] = 1;
            }
        }
        for(int i=arr.size()-2; i>=0; i--){
            if(arr[i+1] >= arr[i]){
                result2[i] = 1;
            }
            else{
                result2[i] = result2[i+1]+1;
            }
        }
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
        cout << result[i] <<"   "<<result2[i]<<endl;
            sum += max(result[i], result2[i]);
        }
        return sum;
    }
};