class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //int arr[2*nums.size()];
        int n=nums.size();
        vector<int> arr(2*n);
        for(int i=0;i<nums.size();i++)
        {
            arr[i]=nums[i];
            arr[n+i]=nums[i];
        }
        return arr;
    }
};
