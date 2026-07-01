class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums,goal)-atMost(nums,goal-1);
    }
    int atMost(vector<int>& nums, int goal) {
        if(goal<0) return 0;
        int n=nums.size(),left=0,count=0,sum=0;
        for(int right=0;right<n;right++)
        {
            sum+=nums[right];
            while(sum>goal)
            {
                sum-=nums[left++];
            }
            
                count+=(right-left+1);
            
        }
        return count;
    }
};