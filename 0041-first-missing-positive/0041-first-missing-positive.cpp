class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(),val=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=0)
                nums[i]=n+1;
        }

        for(int i=0;i<n;i++){
            val=abs(nums[i]);
            if(val>0 && val<=n)
                nums[val-1]=-abs(nums[val-1]);
        }

        for(int i=0;i<n;i++){
            if(nums[i]>0)
                return i+1;
        }

        return n+1;
    }
};