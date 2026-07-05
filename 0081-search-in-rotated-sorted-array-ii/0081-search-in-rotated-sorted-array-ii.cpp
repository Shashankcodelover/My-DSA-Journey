class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size(),beg=0,end=n-1;
        while(beg<=end)
        {
            int mid=beg+(end-beg)/2;
            if(target==nums[mid])   return true;
            if (nums[mid] == nums[end]) {
                end--; // Safely step inward to break the duplicate deadlock
            }
            else if(nums[mid]>nums[end])
            {
                if(target<nums[mid] && target>=nums[beg])
                    end=mid-1;     
                else    beg=mid+1;           
            }
            else{
                if(target>nums[mid] && target<=nums[end])
                    beg=mid+1;     
                else    end=mid-1;           
            }
        
            
        }
        return false;
    }
};