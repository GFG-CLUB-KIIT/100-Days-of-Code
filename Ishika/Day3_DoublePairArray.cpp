// Problem Link: https://leetcode.com/problems/array-of-doubled-pairs/

bool compare(const int &a, const int &b){
        if(a < 0 && b < 0){
            return a > b;
        }
        else{
            return a < b;
        }
    }

class Solution {
public:
    
    bool canReorderDoubled(vector<int>& arr) {
        if(arr.size()%2 !=0) return false;
        
        sort(arr.begin(), arr.end(), compare);
        unordered_map<int, int>freq;
        for(int i = 0; i< arr.size(); i++){
           freq[arr[i]]+=1;
        }
        for(int i = 0; i<arr.size(); i++){
            if(freq.count(arr[i])>0){
                if(freq.count(2 * arr[i])>0){
                    freq[arr[i]]--;
                    freq[2 * arr[i]]--;
                    if(freq[arr[i]] == 0){
                        freq.erase(arr[i]);
                    }
                    if(freq[2 * arr[i]] == 0){
                        freq.erase(2 * arr[i]);
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(freq.size() == 0) return true;
        return false;
    }
};