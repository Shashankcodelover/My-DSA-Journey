class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),reader=0,writer=0;
        if(n==0)    return;
        for(reader=0;reader<n;reader++)
        {
            if(nums[reader]!=0)
                nums[writer++]=nums[reader];
        }
        while(writer<n) nums[writer++]=0;
    }
};