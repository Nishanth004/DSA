class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand, count=0;
        for(int num:nums)
        {
            if(num==cand)
                count++;
            else
            {
                if(--count<=0)
                {
                    cand=num;
                    count=1;
                }
            }
        }
        return cand;
    }
};
