// * Question Link -> https://leetcode.com/problems/car-pooling/


class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> distance(1001, 0);
        for(int i = 0; i < (int) trips.size(); i++)
            distance[trips[i][1]] += trips[i][0], distance[trips[i][2]] -= trips[i][0];
        for(int i = 1; i < (int) distance.size(); i++){
            distance[i] += distance[i - 1];
            if(distance[i] > capacity)
                return false;
        }
        return true;
    }
};