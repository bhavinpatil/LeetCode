class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0, maxf=0;
        unordered_map<int, int>count;
        for(int i=0; i<s.size(); i++)
        {
            maxf = max(maxf, ++count[s[i]]);
            if(ans-maxf<k)
                ans++;
            else
                count[s[i-ans]]--;
        }
        return ans;
    }
};
