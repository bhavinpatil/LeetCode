class Solution {
public:
    // int minCostClimbingStairs(vector<int>& cost, int i, vector<int>&memo){
    //     if(i==cost.size()-1 || i==cost.size()-2)
    //         return cost[i];
    //     if(memo[i]!=0)
    //         return memo[i];
    //     int x = minCostClimbingStairs(cost, i+1, memo);
    //     int y = minCostClimbingStairs(cost, i+2, memo);
    //     memo[i] = min(x,y) + cost[i];
    //     return memo[i];
    // }
        
    int minCostClimbingStairs(vector<int>& cost) {
//         if(cost.size()==2)
//             return min(cost[0],cost[1]);
        
//         vector<int>memo(1001);
//         int x=minCostClimbingStairs(cost,0,memo);
//         int y=minCostClimbingStairs(cost,1,memo);
//         return min(x,y);
        for(int i=2; i<cost.size();i++)
        {
            cost[i] += min(cost[i-1],cost[i-2]);
        }
        return min(cost[cost.size()-1], cost[cost.size()-2]);
    }
};
