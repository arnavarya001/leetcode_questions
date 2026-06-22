class Solution {
public:
    int xorOperation(int n, int start) {
        int nums =start;
        for(int i=1;i<n;i++){
            nums ^= start+2*i;
            
        }
        return nums;
    }
};