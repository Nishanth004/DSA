class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int num:stones)
            pq.push(num);
        while(true)
        {
            int top=pq.top();
            pq.pop();
            int sec=0;
            if(pq.size())
            {
                sec=pq.top();
                pq.pop();
            }
            pq.push(top-sec);
            if(pq.size()==1)
                return pq.top();
        }
    }
};
