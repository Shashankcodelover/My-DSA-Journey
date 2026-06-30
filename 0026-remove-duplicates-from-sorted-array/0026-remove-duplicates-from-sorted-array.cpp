class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1,j=1;
        while(i<n)
        {
            if(nums[i-1] != nums[i])    nums[j++]=nums[i++];
            else 
                i++;
        }
        return j;
    }
};