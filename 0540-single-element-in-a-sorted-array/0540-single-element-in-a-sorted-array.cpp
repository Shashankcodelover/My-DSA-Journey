class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size(),beg=0,end=n-1,mid;
        while(beg<end){
            mid=beg+(end-beg)/2;
            if(mid%2)   mid--;
            if(nums[mid]==nums[mid+1])
                    beg=mid+2; 
            else
                    end=mid;
            }
            return nums[beg];
         
    }
};