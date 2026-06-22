class Solution {
public:
    int findNumbers(vector<int>& arr) {
      int ans =0 ;

      for(int i=0;i<arr.size();i++){
        int count = 0;
        int nums = arr[i] ;

        while(nums>0){
            count++ ;
            nums = nums/10 ; 
        }

        if(count%2==0){
            ans++ ;
        }
      }
      return ans ;
    }
};