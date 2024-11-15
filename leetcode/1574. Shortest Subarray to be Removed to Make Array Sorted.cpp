class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int low=0, high=arr.size()-1;
        while(high>0 && arr[high]>=arr[high-1])
            high--;
        int count=high;
        while(low<high)
        {
            while(high<arr.size() && arr[low]>arr[high])
                high++;
            count=min(count, high-low-1);
            if(arr[low]>arr[low+1])
                break;
            low++;
        }
        return count;
    }
};
