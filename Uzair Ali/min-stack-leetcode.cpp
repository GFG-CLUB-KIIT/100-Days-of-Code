// Question Link: https://leetcode.com/problems/min-stack/
class MinStack {
    vector <int> sta;
    vector <int> min_sta;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int val) {
        sta.push_back(val);
        if(min_sta.empty()){min_sta.push_back(val);}
        else
        {
            int minimum = min(val, min_sta.back());
            min_sta.push_back(minimum);
        }
    }
    
    void pop() {
        sta.pop_back();
        min_sta.pop_back();
    }
    
    int top() {
        int ans = sta.back();
        return ans;
    }
    
    int getMin() {
        int ans = min_sta.back();
        return ans;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
