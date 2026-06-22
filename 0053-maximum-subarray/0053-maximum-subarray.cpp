class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long ans = INT_MIN;
           bool flag=false;
        for(int i=0;i<n;i++)
        {
              if(nums[i]>0)
              {
                flag=true;
              }
        }
        if(flag){
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum<0)
            {
                sum=0;
            }
            ans=max(ans,sum);
        }
        }
        else
        {
            return *max_element(nums.begin(),nums.end());
        }
        return ans;
    } 
};