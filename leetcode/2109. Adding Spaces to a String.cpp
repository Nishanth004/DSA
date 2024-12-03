class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int i = 0, j = 0;
        while (j < s.size()) {
            if (i < spaces.size() && j == spaces[i]) {
                result += " "; 
                i++; 
            } else {
                result += s[j++];  
            }
        }
        
        return result;
    }
};
