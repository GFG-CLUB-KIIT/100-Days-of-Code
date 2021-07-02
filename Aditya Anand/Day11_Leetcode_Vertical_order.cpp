// * Question Link -> https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class triplet{
public:
    int level, col;
    TreeNode *node;

    triplet(TreeNode *trip_node, int level, int col){
        this-> level = level;
        this-> col = col;
        this-> node = new TreeNode(trip_node-> val, trip_node-> left, trip_node-> right);
    }
};

 bool compare(const triplet &a, const triplet &b){
            if(a.level == b.level)
                 return a.node-> val < b.node-> val ? true : false;
            return a.level < b.level ? true : false;
        }
    

class Solution {
public:
        void get_vertical_order_helper(TreeNode *root, int &_min, int &_max, unordered_map<int, vector<triplet> > &vertical_order){
            queue<triplet> q;
            triplet root_triplet(root, 0, 0);
            q.push(root_triplet);
            while(!q.empty()){
                triplet front = q.front();
                q.pop();
                _min = min(_min, front.col);
                _max = max(_max, front.col);
                vertical_order[front.col].emplace_back(front);
                if(front.node-> left != NULL){
                    triplet left_triplet(front.node-> left, front.level + 1, front.col - 1);
                    q.push(left_triplet);
                }
                if(front.node-> right != NULL){
                    triplet right_triplet(front.node-> right, front.level + 1, front.col + 1);
                    q.push(right_triplet);
                }
            }
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root == NULL)
            return {};
        int _min = INT_MAX, _max = INT_MIN;
        unordered_map<int, vector<triplet> > vertical_order;
        get_vertical_order_helper(root, _min, _max, vertical_order);  
        vector<vector<triplet> > trip_arr(1 + abs(_min) + _max);
        for(int i = _min; i <= _max; i++){
            for(int j = 0; j < (int) vertical_order[i].size(); j++)
                trip_arr[i + abs(_min)].emplace_back(vertical_order[i][j]);
        }

        for(int i = 0; i < (int) trip_arr.size(); i++)
            sort(trip_arr[i].begin(), trip_arr[i].end(), compare);
        
        vector<vector<int> > result(1 + abs(_min) + _max);
        for(int i = 0; i < (int) trip_arr.size(); i++)
            for(int j = 0; j < (int) trip_arr[i].size(); j++)
                result[i].emplace_back(trip_arr[i][j].node-> val);
        return result;
    }
};