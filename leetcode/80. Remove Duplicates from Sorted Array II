class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0, j=1,count;
      while(j<nums.size())
      {
        if(nums[i]==nums[j])
        {
            if(count==nums[j])
                j++;
            else
            {
                count=nums[j];
                nums[++i]=nums[j++];
            }
        }
        else
        {
            nums[++i]=nums[j++];
        }
      }
      return i+1;
    }
};
