class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int zero_front = 0;
        int zeros = count(nums.begin(),nums.end(),0);

        for(int i = 0;i<n-zeros;i++){
            if(nums[i]==0){
               zero_front++; 
            }
        }
        return zero_front;
    }
};