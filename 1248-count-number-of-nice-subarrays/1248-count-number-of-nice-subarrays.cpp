class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return (atMost(nums,k)-atMost(nums,k-1));
    }
    int atMost(vector<int>& nums, int k) {
        if(k<0) return 0;
        int n=nums.size(),oc=0,sc=0,left=0;
        for(int right=0;right<n;right++)
        {
            if(nums[right]%2!=0)    oc++;
            while(oc>k)
            {
                if(nums[left++]%2!=0)   oc--;
            }
            sc+=(right-left+1);
        }
        return sc;
    }
};