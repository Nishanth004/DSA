class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>visited;
        int n=s.size();
        int right=0, left=0, length=0;
        while(right<n)
        {
            while(right<n && visited.find(s[right])==visited.end())
            {
                visited.insert(s[right]);
                right++;
                length=max(length,right-left);
            }
            visited.erase(s[left]);
            left++;
        }
        return length;
    }
};
