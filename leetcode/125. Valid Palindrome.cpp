class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        for(char c : s)
            if(isalnum(c))
                clean += tolower(c);

        int left = 0 , right = clean.size()-1;
        while(left<right)
            if(clean[left++] != clean[right--])
                return false;
        
        return true;
    }
};
