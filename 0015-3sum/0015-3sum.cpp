class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>> s;
        // vector<vector<int>> res;
        // int n = nums.size();

        // for(int i = 0;i<n;i++){
        //     for(int j = i+1;j<n;j++){
        //         for(int k = j+1;k<n;k++){
        //             if(nums[i] + nums[j] + nums[k] == 0){
        //                  vector<int> ans = {nums[i],nums[j],nums[k]};
        //                  sort(ans.begin(),ans.end());

        //                  if(s.find(ans) == s.end()){
        //                     s.insert(ans);
        //                     res.push_back(ans);
        //                  }
        //             }
                     
        //         }
        //     }
        // }
        // return res;

        // int n = nums.size();
        // set<vector<int>> unique;

        // for(int i = 0;i<n;i++){
        //     int target = -nums[i];
        //     set<int> s;
        //     for(int j = i+1;j<n;j++){
        //         int toFind = target - nums[j];
     
        //         if(s.find(toFind) != s.end()){
        //             vector<int> ans{nums[i],nums[j],toFind};
        //             sort(ans.begin(),ans.end());
        //             unique.insert(ans);
        //         }
        //         s.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> res(unique.begin(),unique.end());
        // return res;
         
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0;i<n;i++){
            int j = i+1;
            int k = n-1;
            if(i>0 && nums[i] == nums[i-1]) continue;

            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                }
            }
        }
    return ans;
    }
};