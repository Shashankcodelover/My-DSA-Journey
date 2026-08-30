class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),sum=0,maxs=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxs=max(maxs,sum);
            if(sum<0)   sum=0;
        }
        return maxs;
    }
};