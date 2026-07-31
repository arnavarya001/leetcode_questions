// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {
        
//         while(stones.size()>1){
//             sort(stones.begin(),stones.end());
//             stones[stones.size()-2] = abs(stones[stones.size()-2]-stones[stones.size()-1]);
//             stones.pop_back();
//             if(stones[stones.size()-1] == 0) stones.pop_back();
//         }
//         if(stones.size() == 1)return stones[0];
//         return 0;
//     }
// };


//priority queue
class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        priority_queue<int>pq(a.begin(),a.end());

        while(pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            if(a != b)
                pq.push(abs(a-b));
        }
        return pq.empty() ? 0 : pq.top();
    }
};