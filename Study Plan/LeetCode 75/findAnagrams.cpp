class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, hash(26,0), phash(26,0);
        int window = p.size(), len = s.size();
        
        if(len<window) return ans;
        
        int left = 0, right = 0;
        while(right<window)
        {
            phash[p[right]-'a'] += 1;
            hash[s[right++]-'a'] += 1;
        }
        right-=1;
        while(right<len)
        {
            if(phash == hash)
                ans.push_back(left);
            right+=1;
            if(right!=len)
                hash[s[right]-'a']+=1;
            hash[s[left]-'a']-=1;
            left+=1;
        }
        return ans;
    }
};
