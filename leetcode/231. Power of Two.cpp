class Solution {
public:
    bool isPowerOfTwo(int n) {
        int low=0, high=30, mid;
        while(low<=high)
        {
            mid=(high+low)/2;
            int x=pow(2,mid);
            if(x==n)
                return true;
            else if(x<n)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};
