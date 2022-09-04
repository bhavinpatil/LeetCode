class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n == 0) return false;
        
        return (n==1 || (n%2==0 && isPowerOfTwo(n/2))) ;
        
        // OR
        
        return floor(log2(n))==ceil(log2(n))?true:false;
    }
};
