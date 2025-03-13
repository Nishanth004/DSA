class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maxp = 0,mini=p[0];
        for(int i=1;i<p.size();i++)
        {   
            if(p[i]>=p[i-1])
                maxp+=p[i]-p[i-1];
        }
        return maxp;
    }
};
