class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, k=0;
        while(i<nums.size())
        {
            if(nums[i]!=val)
            {
                nums[k++]=nums[i];
            }
            i++;
        }
        return k;
    }
};
