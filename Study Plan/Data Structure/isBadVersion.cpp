// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0, h = n, result;
        while(h>=l)
        {
            int mid = l+(h-l)/2;
            if(isBadVersion(mid))
            {
                result = mid;
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return result;
    }
};
