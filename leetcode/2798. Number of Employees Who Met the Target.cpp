class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(int n:hours)
        {
            if(n>=target)
                count++;
        }
        return count;
    }
};
