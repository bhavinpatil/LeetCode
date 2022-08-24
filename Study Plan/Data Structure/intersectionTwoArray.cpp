/*

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.

*/


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m ;
        vector<int> ans;
        for(int i = 0; i<nums1.size(); i++)
            m[nums1[i]]++;
        
        for(int i = 0 ; i < nums2.size(); i++)
        {
            auto it = m.find(nums2[i]);
            if(it!=m.end() && it->second > 0)
            {
                ans.push_back(nums2[i]);
                    it->second--;
            }
        }
        return ans;
    }
};
