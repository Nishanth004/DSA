class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());
        vector<int>ans;
        int maxp=0;
        for(int i=0;i<items.size();i++)
        {
            (maxp>items[i][1])?items[i][1]=maxp:maxp=items[i][1];
        }
        for(int query:queries)
        {
            int low=0, high=items.size()-1, maxp=0;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(items[mid][0]<=query)
                {
                    maxp=max(maxp, items[mid][1]);
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            ans.push_back(maxp);
        }
        return ans;
    }
};
