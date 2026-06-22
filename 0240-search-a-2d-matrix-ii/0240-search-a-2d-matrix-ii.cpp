class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
    //creates pointers for staircase method
    int i = n-1,j=0;
    while(i >= 0 && j < m){
        //check if equal
        if(matrix[i][j] == target)return true;
        //check if greater or smaller
        else if (matrix[i][j] > target)i--;
        else j++;
    }
    return false;   //not found
    }
};
 
