class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),r=0,w=0;
        while(r<n)
        {
            if(nums[r]!=val)
                nums[w++]=nums[r];
            r++;
        }
        return w;
    }
};