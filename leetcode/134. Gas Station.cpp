class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int costn=0, gasn=0, tank=0, start=0;
        for(int i=0;i<cost.size();i++)
        {
            costn+=cost[i];
            gasn+=gas[i];
            tank+=gas[i]-cost[i];
            if(tank<0)
            {
                tank=0;
                start=i+1;
            }
        }
        return costn>gasn ? -1 : start;
    }
};
