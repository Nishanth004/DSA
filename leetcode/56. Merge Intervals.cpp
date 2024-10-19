class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(), intervals.end());
        int maxi=intervals[0][1];
        for(int i=0;i<intervals.size();i++)
        {
            int start=i;
            while(i+1<n && maxi>=intervals[i+1][0] )
            {
                maxi=max(maxi,intervals[i+1][1]);
                i++;
            }
            ans.push_back({min(intervals[start][0], intervals[i][0]),max(intervals[start][1], maxi)});
            if(i+1<n)
                maxi=max(maxi,intervals[i+1][1]);
            
        }
        return ans;
    }
};
