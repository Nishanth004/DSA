class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if(text.size()<6)   return false;
        unordered_map<char, int>map;
        for(char c: text)
            map[c]++;
        int mini=INT_MAX;
        mini=min(mini, map['b']);
        mini=min(mini, map['a']);
        mini=min(mini, map['l']/2);
        mini=min(mini, map['o']/2);
        mini=min(mini, map['n']);
        return mini;
    }   
};
