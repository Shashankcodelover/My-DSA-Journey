class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),lf=0,rt=n-1;
        int Mlf=0,Mrt=0,unit=0;
        while(lf<rt){
            if(height[lf]<height[rt]){
                if(height[lf]>=Mlf) Mlf=height[lf];
                else    unit+=Mlf-height[lf];
                lf++;
            }
            else {
                if(height[rt]>=Mrt) Mrt=height[rt];
                else    unit+=Mrt-height[rt];
                rt--;
            }
        }
        return unit;
    }

};