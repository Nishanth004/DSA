class Solution {
public:
    bool parseBoolExpr(string exp) {
        int n=exp.size(), pos;
        bool hast=false,hasf=false;
        for(int i=n-1;i>=0;i--)
        {
            if(exp[i]==')')
            {
                pos=i;
                hast=false;
                hasf=false;
            }
                
            else if(exp[i]=='f')
                hasf=true;
            else if(exp[i]=='t')
                hast=true;
            else if(exp[i]=='!')
            {
                if(hast)
                {
                    exp.replace(i,pos-i+1,"f");
                    hast=false;
                    hasf=true;
                }
                else
                {
                    exp.replace(i,pos-i+1,"t");
                    hast=true;
                    hasf=false;
                }
                i=exp.size();
            }
            else if(exp[i]=='|')
            {
                if(hast)
                {
                    exp.replace(i,pos-i+1,"t");
                    hast=true;
                    hasf=false;
                }
                else
                {
                    exp.replace(i,pos-i+1,"f");
                    hast=false;
                    hasf=true;
                }
                i=exp.size();
            }
            else if(exp[i]== '&')
            {
                if(hasf)
                {
                    exp.replace(i,pos-i+1,"f");
                    hast=false;
                    hasf=true;
                }
                else
                {
                    exp.replace(i,pos-i+1,"t");
                    hast=true;
                    hasf=false;
                }
                i=exp.size();
            }
        }
        
        return exp[0] == 't';
    }
};
