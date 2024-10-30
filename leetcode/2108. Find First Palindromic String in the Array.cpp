class Solution {
public:
    bool pal(string s)
    {
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-1-i])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s:words)
        {
            if(pal(s))
                return s;
        }
        return "";
    }
};
