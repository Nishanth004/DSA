class Solution {
public:
    int firstUniqChar(string s) {
        int i,j;
        for( i=0;i<s.size();i++)
        {
            for( j=0;j<s.size();j++)
            {
                if(i==j)
                    continue;
                if(s[i]==s[j])
                    break;
                
            }
            if(s[i]!=s[j])
            return i;
        }
        return -1;
    }
};
