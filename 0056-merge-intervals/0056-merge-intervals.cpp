class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;

        for(auto & x : a){
            if(ans.empty() || x[0] > ans.back()[1])
            ans.push_back(x);
            else{
            ans.back()[1] = max(ans.back()[1],x[1]);
        }

        }
        return ans;
    }
    
};