class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> answer;
        for(int i = 1 ; i <= n ; ++i){
            answer.push_back(i);
        }
        int i = 0;
        k--;
        int size = answer.size();
        while(answer.size()!=1){
            i= (i+k)%size;
            size--;
            answer.erase(answer.begin()+i);
        }
        return answer[0];
        
    }
};
