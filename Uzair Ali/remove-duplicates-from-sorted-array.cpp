class Solution {
public:
    int removeDuplicates(vector<int>& vec) {
    unordered_map<int, bool> ma;
    vector <int> ans;
    for(int i=0;i<vec.size();i++) 
    {
    if(ma.count(vec[i])==0)
    {
        ma[vec[i]] = true;
        ans.push_back(vec[i]);
    }
    }
        
        for(int i=0;i<ans.size();i++)
        {
            vec[i]=ans[i];
        }
        return ans.size();
    }
};
