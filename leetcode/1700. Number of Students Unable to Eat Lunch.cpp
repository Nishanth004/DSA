class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sd) {
        int i=0;
        bool took=true,requirements=false;
        while(took && st.size())
        {
            if(sd[0]==st[i])
            {
                sd.erase(sd.begin());
                st.erase(st.begin()+i);
                requirements=false;
            }
            else
            {
                i++;
            }
            if(i==sd.size())
            {

                i=0;
                if(requirements)
                    took=false;
                requirements=true;
            }
                
        }
        return st.size();
        
    }
};
