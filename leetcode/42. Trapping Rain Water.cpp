//https://leetcode.com/problems/trapping-rain-water/description/
class Solution {
public:
    int trap(vector<int>& height) {
        int vol=0, left=0, right=height.size()-1, leftmax=0, rightmax=0;
        while(left<right)
        {
            if(height[left]<height[right])
            {
                if(height[left]>=leftmax)
                    leftmax=height[left];
                else
                    vol+=leftmax-height[left];
                left++;
            }
            else
            {
                if(height[right]>=rightmax)
                    rightmax=height[right];
                else
                    vol+=rightmax-height[right];
                right--;
            }         

        }
        return vol;
    }
};
