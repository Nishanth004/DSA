class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, right=0, zcount=0, maxi=0;
        while(right<nums.size())
        {
            if(nums[right]==0)
                zcount++;
            while(zcount>k)
            {  
                if(left<nums.size() && nums[left]==0)
                    zcount--;
                left++;
            }
            maxi=max(maxi,right-left+1);
            right++;
        }
        return maxi;
    }
};
