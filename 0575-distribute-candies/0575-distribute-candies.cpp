class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        map<int,int> mp;

        for(int i = 0;i<n;i++){
            mp[candyType[i]]++;
        }
 
        int unique = mp.size();
        return min(unique,n/2);
    }
};