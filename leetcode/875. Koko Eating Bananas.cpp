class Solution {
public:
    int hours(vector<int> piles, int mid)
    {
        int count=0;
        for(int num:piles)
        {
            count+=(num+mid-1)/mid;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=*max_element(piles.begin(), piles.end());
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(hours(piles, mid)<=h)
            {
                high=mid;
            }
            else
                low=mid+1;
        }
        return low;
    }
};
