//https://leetcode.com/problems/longest-palindromic-substring/description/
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxlength = 1, start = 0;
        vector<vector<bool>> k(n, vector<bool>(n, false));

        
        for (int i = 0; i < n; i++)         //substring with length 1
            k[i][i] = true;


        for (int i = 0; i < n - 1; i++) {   //substring with length 2
            if (s[i] == s[i + 1]) {
                k[i][i + 1] = true;
                start = i;
                maxlength = 2;
            }
        }

        for (int len = 3; len <= n; len++) {        //substring wiht length > 2
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if (s[i] == s[j] && k[i + 1][j - 1]) {
                    k[i][j] = true;
                    start = i;
                    maxlength = len;
                }
            }
        }
        return s.substr(start, maxlength);
    }
};
