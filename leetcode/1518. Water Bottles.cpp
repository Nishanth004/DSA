class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles, sum=total;
        while(total/numExchange){
            sum+=total/numExchange;
            total=total/numExchange+total%numExchange;
        }
        return sum;
        
    }
};
