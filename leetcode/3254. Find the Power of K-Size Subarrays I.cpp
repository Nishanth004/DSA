class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(nums.size()==1)
            return nums;
        vector<int>ans(nums.size()-k+1, -1);
        int right=1, len=1;
        for(right=1;right<k;right++)
        {
            if(nums[right-1]+1==nums[right])
                len++;
            else
                len=1;
        }
        if(len==k)
            ans[0]=nums[right-1];
        for(int left=1, right=k;right<nums.size();right++, left++)
        {
            if(nums[right-1]+1==nums[right])
                len++;
            else
                len=1;
            if(len>=k)
                ans[left]=nums[right];
        }
        return ans;
        
    }
};
