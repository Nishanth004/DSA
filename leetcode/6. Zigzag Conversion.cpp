//https://leetcode.com/problems/zigzag-conversion/description/
class Solution {
public:
    string convert(string s, int num) {
        int n=s.size();
        if(num==1 || num>n)
            return s;
        vector<vector<char>> mat(num);
        int row=0, d=1;
        for(char c:s)
        {
            mat[row].push_back(c);
            if(row==0)
                d=1;
            else if(row==num-1)
                d=-1;
            row=row+d;
        }
        string result;
        for(auto & row:mat)
        {
            for(char c:row){
                result+=c;
            }
        }
        return result;

    }
};
