class Solution {
public:
    bool static compare(pair<int,string>p1, pair<int,string>p2)
    {
        if(p1.first==p2.first) return p1.second<p2.second;
        return p1.first>p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto it:words)
            mp[it]++;
        vector<pair<int,string>>pr; vector<string>ans;
        for(auto it:mp)
            pr.push_back({it.second, it.first});
        sort(pr.begin(),pr.end(),compare);
        for(int i=0; i<k; i++)
        {
            ans.push_back(pr[i].second);
        }
        return ans;
    }
};
