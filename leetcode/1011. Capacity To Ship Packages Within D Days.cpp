class Solution {
public:
    int canship(vector<int> & weights, int days)
    {
        int sum=0;
        int count=1;
        for (int i = 0; i < weights.size(); i++) 
        {
            if (sum + weights[i] > days) 
            {
                count++;
                sum = 0; 
            }
            sum += weights[i]; 
        }
        return count;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int num:weights)
            sum+=num;
        int low=*max_element(weights.begin(), weights.end());
        int high=sum;
        while(low<high)
        {
            cout<<"low="<<low<<"\thigh="<<high<<endl;
            int mid=low+(high-low)/2;
            cout<<"mid="<<mid<<endl;
            
            if (canship(weights, mid) > days) {
                low = mid + 1; 
            } else {
                high = mid; 
            }      
        }
        return low;

    }
};
