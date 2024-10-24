class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int>map;
        for(int num:arr)
        {
            int rem=num%k;
            if(rem<0)
                map[rem+k]++;
            else
                map[rem]++;
        }
        for (int i = 0; i <= k / 2; ++i) {
            if (i == 0) {  
                if (map[i] % 2 != 0) return false;
            } 
            else if (i == k - i) {
                if (map[i] % 2 != 0) return false;
            } 
            else {
                if (map[i] != map[k - i]) return false;
            }
        }

        return true;
    }
};
