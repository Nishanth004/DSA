class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> map;
        for(auto edge:edges)
        {
            map[edge[0]]++;
            map[edge[1]]++;
        }
        priority_queue<pair<int, int> >pq;
        for(auto i:map)
        {
            pq.push({i.second, i.first});
        }
        auto ans=pq.top();
        return ans.second;
    }
};
