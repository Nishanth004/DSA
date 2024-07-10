class Solution {
public:
    int minOperations(vector<string>& logs) {
        int steps=0;
        for(auto command:logs)
        {
            if(steps<0)
                steps=0;
            if(command=="./")
                continue;
            else if(command=="../")
            {
                steps--;
                continue;
            } 
            else steps++;   
        }
        if(steps<0)
            return 0;
        return steps;
    }
};
