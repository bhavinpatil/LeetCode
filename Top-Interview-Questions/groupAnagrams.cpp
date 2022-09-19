class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mp;
        vector<vector<string>>ans;
        for(string t:strs)
        {
            string s = t;
            sort(s.begin(),s.end());
            mp[s].push_back(t);
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
