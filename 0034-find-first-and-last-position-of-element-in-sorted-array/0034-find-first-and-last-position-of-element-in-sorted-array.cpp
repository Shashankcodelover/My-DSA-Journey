class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int init=findBound(nums,target,true);
        int end=findBound(nums,target,false);
        return {init,end};
    }
int findBound(vector<int>& nums,int target,bool isFirst)
    {
        int n=nums.size(),beg=0,end=n-1;
        int bound=-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]==target){
                bound=mid;
                if(isFirst) end=mid-1;
                else    beg=mid+1;
            }
            else if(target>nums[mid])   beg=mid+1;
            else    end=mid-1;
        }
        return bound;
    }

    
};