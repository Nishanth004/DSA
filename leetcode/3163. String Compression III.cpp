class Solution {
public:
    string compressedString(string word) {
        int left=0, right=0;
        string ans;
        while(right<word.size())
        {
            int count=0;
            while(right<word.size() && word[right]==word[left])
            {
                count++;
                right++;
            }
            while(count/10)
            {
                ans.push_back('9');
                ans.push_back(word[right-1]);
                count-=9;
            }
            char c='0'+count;
            ans.push_back(c);
            ans.push_back(word[right-1]);
            left=right;

        }
        return ans;
    }
};
