// * Question Link -> https://leetcode.com/problems/custom-sort-string/


class randalpha{
public:
    char data;
    int priority;
    
    randalpha(char data, int priority){
        this-> data = data;
        this-> priority = priority;
    }
};

bool compare(const randalpha &a, const randalpha &b){
    if(a.priority == b.priority)
        return a.data < b.data ? true : false;
    return a.priority < b.priority ? true : false;
}

class Solution {
public:
    string customSortString(string order, string str) {
        vector<char> lexi_order(26, INT_MAX);
        for(int i = 0; i < (int) order.size(); i++)
            lexi_order[order[i] - 'a'] = i;
        vector<randalpha> result;
        for(int i = 0; i < (int) str.size(); i++){
            randalpha character (str[i], lexi_order[str[i] - 'a']);
            result.emplace_back(character);
        }
        sort(result.begin(), result.end(), compare);
        string answer = "";
        for(randalpha r : result)
            answer += r.data;
        return answer;
    }
};