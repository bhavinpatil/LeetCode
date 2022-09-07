class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int first_sum = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            first_sum += nums[i];
        }
        
        int second_sum = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            first_sum = first_sum - nums[i];
            if(second_sum == first_sum) return i;
            second_sum += nums[i];
        }
        return -1;
    }
};
