class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),beg=0,end=n-1;
        while(beg<end)
        {
            int mid=beg+(end-beg)/2;
            
            if(nums[mid]>nums[end])
            {
                beg=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        return nums[beg];
    }
};