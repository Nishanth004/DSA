class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        int j=0, i;
        string word="";
        for( i=0;i<pattern.size();i++)
        {
            while(j<s.size() && s[j]!=' ')
            {
                word+=s[j];
                j++;
            }
            if(map1.count(pattern[i]) && map1[pattern[i]]!=word || map2.count(word) && map2[word]!=pattern[i])
                return false;
            map1[pattern[i]]=word;
            map2[word]=pattern[i];
            word="";
            j++;
        }
        cout<<i<<endl<<j<<endl;
        return (i==pattern.size() && j-1==s.size())? true: false;
    }
};
