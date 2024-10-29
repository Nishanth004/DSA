class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        stack<int>st;
        vector<int>arr(n,0);
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                st.push(i);
                arr[i]=0;
            }
                
            else if(t[i]<t[st.top()])
            {
                arr[i]=st.top()-i;
                st.push(i);
                
            }

            else
            {
                while(!st.empty() && t[i]>=t[st.top()])
                    st.pop();
                if(st.empty())
                    arr[i]=0;
                else
                    arr[i]=st.top()-i;
                st.push(i);
            }
        }
        return arr;
    }
};
