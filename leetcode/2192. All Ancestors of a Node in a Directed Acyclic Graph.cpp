class Solution {
public:
    vector<vector<int>>parents;
    vector<int>visited;

    void addparent(const vector<int>& edge)
    {
        parents[edge[1]].push_back(edge[0]);
    }

    void getparent(int num, vector<int>& paren)
    {
        //checking if a ndoe has a parent or not
        if(parents[num].size()!=0)
        {
            for(int node:parents[num])
            {
                if(!visited[node])
                {
                    visited[node]=1;
                    paren.push_back(node);
                    getparent(node,paren);
                }
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        parents=vector<vector<int>>(n);

        //add the ancestors of a ndoe to a list
        for(const auto& edge:edges)
        {
            addparent(edge);
        }

        vector<vector<int>>ans(n);
        for(int i=0;i<n;i++)
        {
            //resetting parent vector for each node
            vector<int>paren;
            //resetting visited parent vector for each node
            visited = vector<int>(n, 0);
            getparent(i,paren);
            sort(paren.begin(), paren.end());
            ans[i]=paren;
            
        }
        return ans;
    }
};
