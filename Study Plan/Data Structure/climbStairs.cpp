class Solution {
public:
    // int fib(int n)
    // {
    //     if(n<=2) return n;
    //     return fib(n-2)+fib(n-1);
    // }
    
    int climbStairs(int n) {
        
        // return fib(n);
        if(n<=2) return n;
        int x = 1, y = 2;
        for(int i = 3; i<n; ++i)
        {
            int temp = y;
            y += x;
            x = temp;
        }
        return (x+y);
    }
};
