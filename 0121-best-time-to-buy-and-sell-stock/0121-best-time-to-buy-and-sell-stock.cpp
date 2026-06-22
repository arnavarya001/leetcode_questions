class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        // int n = prices.size();
        int  mini=prices[0];
        for(int i = 1;i < prices.size() ;i++){
            if(ans < prices[i]- mini){
                ans = prices[i] - mini;
            }
            if(mini>prices[i]){
                mini = prices[i];
            }
        }
        return ans;
    }
};