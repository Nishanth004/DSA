class Solution {
public:
    void reverseS(string &s, int left, int right)
    {
        while(left<right)
            swap(s[left++], s[right--]);
    }
    string reverseWords(string s) {
        reverseS(s, 0, s.size()-1);
        cout<<s;
        int n = s.size() , start = 0 , end = 0 , wordStart = 0;
        while(end<n)
        {
            while(end<n && s[end] != ' ') end++;
            reverseS(s, start, end-1);
            start = ++end;
        }


        int i = 0 ;
        for(char c: s)
            if(c != ' ' or (i>0 and s[i-1] != ' '))
                s[i++] = c;

        if(i>0 and s[i-1] == ' ')
            i--;
        
        return s.substr(0,i);
    }
};
