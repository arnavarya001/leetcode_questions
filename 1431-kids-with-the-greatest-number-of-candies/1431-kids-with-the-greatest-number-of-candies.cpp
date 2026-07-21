#include <algorithm>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& ca, int extra) {
        int maxx= 0;
        for (int c : ca) {
            maxx = max(maxx, c);
        }
        vector<bool> result(ca.size());
        for (int i = 0; i < ca.size(); i++) {
            result[i] = (ca[i] + extra >= maxx);
        }    
        return result;
    }
};