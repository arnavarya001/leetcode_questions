class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        //UNOPTIMIZED
        // for(int j = 0 ; j<k ;j++){
        //     int temp = nums[n-1];
        //     for(int i = n-1 ; i>0 ; i--){
        //         nums[i] = nums[i-1];
        //     }
        //     nums[0] =  temp; 
        // } 

        //OPTIMIZED
        while(k>n){
            k = k - n;
        }
        int i = 0;
        int j = n-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }

        i = 0;
        j = k-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }

        i = k;
        j = n-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};