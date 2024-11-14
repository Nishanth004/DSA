class Solution {
public:
    bool holds(vector<int> &nums, int mid, int n)
    {
        int count=0;
        for(int &num:nums)
        {
            count+=(num+mid-1)/mid;
        }
        cout<<"mid="<<mid<<"\tdays="<<count<<endl;
        if(count<=n)
            return true;
        return false;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        if(quantities.size()==1)
            return quantities[0];
        long long sum=0;
        int ans=quantities[0];
        for(int num:quantities)
            sum+=num;
        int low=sum/n, high=*max_element(quantities.begin(), quantities.end());
        cout<<"low="<<low<<"\thigh="<<high<<endl;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid && holds(quantities, mid, n))
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};
