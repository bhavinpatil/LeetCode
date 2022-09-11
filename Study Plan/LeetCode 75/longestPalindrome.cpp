class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>count;
        
        for(char c:s) count[c]++;
        
        int len=0;
        bool odd_found = false;
        for(auto& c: count)
        {
            if(c.second % 2 == 0) len += c.second;
            else{
                odd_found = true;
                len += c.second-1;
            }
        }
        if(odd_found) len++;
        return len;
    }
};
