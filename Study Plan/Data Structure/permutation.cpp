class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()<=1) return {nums};
        
        vector<vector<int>> result;
        for(int i = 0; i<nums.size(); i++)
        {
            vector<int> v(nums.begin(), nums.end());
            v.erase(v.begin() + i);
            auto res = permute(v);
            
            for(int j = 0 ; j<res.size(); j++)
            {
                vector<int> v2 = res[j];
                v2.insert(v2.begin(), nums[i]);
                result.push_back(v2);
            }
        }
        return result;
    }
};
