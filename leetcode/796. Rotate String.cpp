class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        int count=0;
        while(count<s.size())
        {
            if(s==goal)
                return true;
            s.push_back(s[0]);
            s.erase(s.begin());
            count++;
        }
        return false;
    }
};
