class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maxp=0, minprice=p[0];
        for(int i=1;i<p.size();i++)
        {
            minprice=min(minprice, p[i]);
            int curr=p[i]-minprice;
            maxp=max(maxp, curr);
        }
        return maxp;
    }
};
