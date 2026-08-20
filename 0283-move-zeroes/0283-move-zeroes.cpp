class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),lf=0,rt=0;
        for(lf=0;lf<n;lf++){
            if(nums[lf]!=0) swap(nums[lf],nums[rt++]);
        }
    }
};