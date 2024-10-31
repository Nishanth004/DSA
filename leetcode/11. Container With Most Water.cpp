class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1, vol=0;
        while(left<right)
        {
            vol=max(min(height[left], height[right])*(right-left), vol);
            (height[left]<height[right])? left++ : right--;
        }
        return vol;
    }
};
