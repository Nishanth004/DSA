class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string strng="";
        while(i<strs[0].size())
        {
            char c=strs[0][i];
            for(auto word:strs)
                if(word[i]!=c)
                    return strng;
            i++;
            strng+=c;
        }
        return strng;
    }
};
