class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),lf=0,rt=n-1,mid=0;
        while(mid<=rt){
            if(nums[mid]==0){
                    swap(nums[mid++],nums[lf++]);
            }
            else if(nums[mid]==2) swap(nums[mid],nums[rt--]);
            else mid++;
        }
    }
};