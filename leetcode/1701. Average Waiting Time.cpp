class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long  totaltime=0, waittime=0, completetime=customers[0][0], n=customers.size(),i=1;
        double avgtime;
        for(auto cust:customers)
        {
            if(cust[0]>=completetime)
                completetime=cust[0];
            completetime+=cust[1];
            waittime=completetime-cust[0];
            totaltime+=waittime;
            
            cout<<"\ncustomer "<<i++<<"\n waittime="<<waittime<<"\ttotaltime="<<totaltime<<"\tcompletetime="<<completetime<<endl;
        }
        cout<<n;
        avgtime=(double)totaltime/n;
        return avgtime;
    }
};
