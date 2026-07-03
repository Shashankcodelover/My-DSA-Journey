class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(),beg=0,end=n-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]==target)   return mid;
            if(nums[mid]<target)    beg=mid+1;
            else    end=mid-1;
        }
        return -1;
    }
};