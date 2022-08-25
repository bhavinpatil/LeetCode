class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        // code here
        vector<int>arr1;
        vector<int>arr2;
        for(int i = 0; i<n; i=i+k)
        {
            if(n-i<k)
            reverse(arr.begin()+i, arr.begin()+n);
            else
            reverse(arr.begin()+i,arr.begin()+i+k);
        }
    }
};
