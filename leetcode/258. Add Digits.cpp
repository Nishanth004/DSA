class Solution {
public:
    int addDigits(int num) {
        int sum;
        while(num/10!=0){
            sum=0;
           while(num){
               sum+=num%10;
               num=num/10;
           }
           num=sum;
        }
        return num;
    }
};
