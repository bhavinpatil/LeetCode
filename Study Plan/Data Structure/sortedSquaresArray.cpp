class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        int l = 0, r = nums.size() - 1;
        for (int k = nums.size() - 1; k >= 0; k--) {
            if (abs(nums[r]) > abs(nums[l])) ans[k] = nums[r] * nums[r--];
            else ans[k] = nums[l] * nums[l++];
        }
        return ans;
    }
};
