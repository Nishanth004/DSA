class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>> pq;

        int i=0;
        for(auto & arr:points)
        {
            double dist=sqrt(pow(arr[0], 2)+pow(arr[1], 2));
            pq.push({dist, i++});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>>ans;
        while(pq.size())
        {
            int idx=pq.top().second;
            ans.push_back(points[idx]);
            pq.pop();
        }
        return ans;
    }
};
