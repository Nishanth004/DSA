class Solution {
public:
    string reverseVowels(string s) {
        int first=0, last=s.size()-1;
        while(first<last)
        {
            while(first<last && s[first]!='a'&& s[first]!='e'&&s[first]!='i'&&s[first]!='o'&&s[first]!='u'&& s[first]!='A'&& s[first]!='E'&&s[first]!='I'&&s[first]!='O'&&s[first]!='U')
                first++;
            cout<<s[first]<<endl;
            while(first<last && s[last]!='a'&&s[last]!='e'&&s[last]!='i'&&s[last]!='o'&&s[last]!='u'&& s[last]!='A'&&s[last]!='E'&&s[last]!='I'&&s[last]!='O'&&s[last]!='U')
                last--;
            cout<<s[last]<<endl;
            swap(s[first], s[last]);
            first++;
            last--;
        }
        return s;
    }
};
