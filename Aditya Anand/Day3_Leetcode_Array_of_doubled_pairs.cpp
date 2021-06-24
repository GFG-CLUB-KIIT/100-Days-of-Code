// * Question Link -> https://leetcode.com/problems/array-of-doubled-pairs/


bool compare(const int &a, const int &b){
    if(a < 0 && b < 0)
        return a > b ? true : false;
    return a < b ? true : false;
}

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        unordered_map<int, int> my_map;
        for(int i = 0; i < (int) arr.size(); i++)
            my_map[arr[i]] += 1;
        bool reorder_possible = true;
        for(int i = 0; i < (int) arr.size(); i++){
            if(my_map[arr[i]] > 0){
                if(my_map[2 * arr[i]] == 0){
                    reorder_possible = false;
                    break;
                }
                else
                    my_map[arr[i]]--, my_map[2 * arr[i]]--;
            }
        }
        return reorder_possible ? true : false;
    }
};