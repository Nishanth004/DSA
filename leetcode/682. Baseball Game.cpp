class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string ball:operations)
        {
            if(ball=="C")
            {
                st.pop();
            }
            else if(ball=="D")
            {
                st.push(st.top()*2);
            }
            else if(ball=="+")
            {
                int second=st.top();
                st.pop();
                int first=st.top();
                st.push(second);
                st.push(first+second);
            }
            else
            {
                st.push(stoi(ball));
            }
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
