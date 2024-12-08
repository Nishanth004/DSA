//https://leetcode.com/problems/group-anagrams/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>map;
        
        for(auto str:strs)
        {
            string s=str;
            sort(str.begin(), str.end());
            map[str].push_back(s);
        }

        for( auto group:map)
        ans.push_back(group.second);
            return ans;
        
    }
};
