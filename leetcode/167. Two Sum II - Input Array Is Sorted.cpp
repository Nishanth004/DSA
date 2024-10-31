class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        unordered_map<int, int>map;
        for(int i=0;i<n;i++)
        {
            int rem=target-numbers[i];
            if(map.find(rem)!=map.end())
                return {map[rem]+1, i+1};
            map[numbers[i]]=i;
        }
        return {0, 0};
    }
};
