class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char map_s[128] = {0};
        char map_t[128] = {0};
        int n = s.size();
        for(int i = 0; i<n; i++)
        {
            if(map_s[s[i]]!=map_t[t[i]]) return false;
            map_t[t[i]] = i+1;
            map_s[s[i]] = i+1;
        }
        return true;
    }
};
