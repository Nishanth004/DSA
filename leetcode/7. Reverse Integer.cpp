//https://leetcode.com/problems/reverse-integer/description/
class Solution {
public:
    int reverse(int n) {
        int r;
        long sum=0;
        while(n!=0)
        {
            int r=n%10;
            sum=sum*10+r;
            n/=10;
        }
        if(sum>INT_MAX||sum<INT_MIN)
            return 0;
        return sum;
    }
};
