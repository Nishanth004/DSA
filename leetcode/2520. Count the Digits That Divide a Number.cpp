class Solution {
public:
    int countDigits(int num) {
        int count=0, temp=num;
        while(num/10)
        {
            int n=num%10;
            if(temp%n==0)
                count++;
            num/=10;
        }
        if(temp%(num%10)==0)
                count++;
        return count;
    }
};
