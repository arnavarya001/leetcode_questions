class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            stones[stones.size()-2] = abs(stones[stones.size()-2]-stones[stones.size()-1]);
            stones.pop_back();
            if(stones[stones.size()-1] == 0) stones.pop_back();
        }
        if(stones.size() == 1)return stones[0];
        return 0;
    }
};