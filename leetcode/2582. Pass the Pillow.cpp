class Solution {
public:
    int passThePillow(int n, int time) {
        //time for one cycle=n*2-2
        int time_for_one_cycle=n*2-2;
        int one_step=time % time_for_one_cycle;
        if(one_step<n-1)  //check direction of pillow
            return one_step+1; //forward direcction
        return n-(one_step-(n-1));  //backward direction

    }
};
