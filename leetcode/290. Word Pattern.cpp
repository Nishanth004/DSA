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

//OR
class Solution {
    public:
        bool wordPattern(string pattern, string s) {
            unordered_map<char, string> m1;
            unordered_map<string, char> m2;
            int n=pattern.size();
            vector<string>words;
            int j=0;
            s=s+' ';
            string word="";
            while(j<s.size())
            {
                if(s[j]==' ')
                {
                    words.push_back(word);
                    word="";
                }
                else
                    word=word+s[j];
                j++;
            }
            if(n!=words.size())
                return false;
            for(int i=0;i<n;i++)
            {
                char c=pattern[i];
                string st=words[i];
                if(m1.count(c)==0&&m2.count(st)==0)
                {
                    m1[c]=st;
                    m2[st]=c;
                }
                else
                {
                    if(m1[c]!=st||m2[st]!=c)
                        return false;
                }

            }
            return true;
        }
    };
