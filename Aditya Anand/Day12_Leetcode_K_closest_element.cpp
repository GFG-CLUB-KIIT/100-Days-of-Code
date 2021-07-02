// * Question Link -> https://leetcode.com/problems/find-k-closest-elements/


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
        for(int i = 0; i < (int) arr.size(); i++)
            pq.push(make_pair(abs(arr[i] - x), arr[i]));
        vector<int> result;
        while(k--){
            pair<int, int> top = pq.top();
            result.emplace_back(top.second);
            pq.pop();
        }
        sort(result.begin(), result.end());
        return result;
    }
};