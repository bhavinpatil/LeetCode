class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, maxx=0;
        for(auto it:nums)
        {
            if(it==1) maxx = max(++count, maxx);
            else count=0;
        }
        return maxx;
    }
};
