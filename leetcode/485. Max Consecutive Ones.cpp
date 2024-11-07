class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, maxc=0;
        for(int num:nums)
        {
            if(num==0)
                count=0;
            else count++;
            maxc=max(maxc, count);
        }
        return maxc;
    }
};
