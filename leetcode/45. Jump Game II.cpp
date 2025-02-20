class Solution {
public:
    int jump(vector<int>& nums) {
        int i=0, count=0, endofwindow=0;
        for(int reach=0;i<=reach && i<nums.size()-1;i++)
        {
            reach=max(nums[i]+i, reach);
            if(i==endofwindow)
            {
                count++;
                endofwindow=reach;

            }
        }
        return count;

    }
};
