//https://leetcode.com/problems/3sum/
class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        if(n<3)
            return ans;
        sort(nums.begin(), nums.end());
        int i=0;
        while(i<n-2)
        {
            if(i>0 && nums[i] == nums[i-1]) 
            { 
                i++; 
                continue;
            }
            //skipping duplicaets
            int low=i+1, high=n-1, sum=-nums[i];
            while(low<high)
            {
                if(sum==nums[low]+nums[high])
                {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    while(low<high && nums[low]==nums[low+1])   //skipping duplicaets after insertion {important that not before done, but after }
                        low++;
                    while(low<high && nums[high]==nums[high-1]) //skipping duplicaets
                        high--;
                    low++;
                    high--;
                }
                else if(sum<nums[low]+nums[high])
                    high--;
                else
                    low++;
            }
            i++;
        }
        
        return ans;
    }
};
