class Solution {
public:
    int minChanges(string s) {
        int count=0, right=1;
        while(right<s.size())
        {
            if(s[right-1]!=s[right])   
                count++;
            right+=2;
        }
        return count;
    }
};
