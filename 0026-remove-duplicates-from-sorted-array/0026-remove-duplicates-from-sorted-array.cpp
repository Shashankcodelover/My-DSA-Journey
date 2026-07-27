class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),re=1,wr=0;
        while(re<n)
        {
            if(nums[re]!=nums[wr])   nums[++wr]=nums[re];
            re++;
        }
        return wr+1;
    }
};