class Solution {
public:
    vector<int>mem;
    Solution() :mem(46,-1){}
    int climbStairs(int n) {
        if(n==0 || n==1)
            return 1;
        if(mem[n]!=-1)
            return mem[n];
        else
            return mem[n]=climbStairs(n-1) + climbStairs(n-2);


    }
};
