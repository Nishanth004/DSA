class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maxp=0, minprice=p[0];
        for(int i=1;i<p.size();i++)
        {
            int curr=p[i]-minprice;
            if(curr>0)
                maxp+=curr;
            minprice=p[i];
        }
        return maxp;
    }
};
