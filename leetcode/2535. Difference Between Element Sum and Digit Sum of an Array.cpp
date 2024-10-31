class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es=0,sum=0;
        for(int n:nums)
        {
            es+=n;
            while(n/10)
            {
                int rem=n%10;
                sum+=rem;
                n/=10;
            }
            sum+=n;
        }
        return es-sum;
    }
};
