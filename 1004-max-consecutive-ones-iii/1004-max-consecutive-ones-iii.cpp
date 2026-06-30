class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {


           int n=nums.size(),zeroC=0,left=0,maxlen=0;
           for(int right=0;right<n;right++)
           {
            if(nums[right]==0)  zeroC++;
            while(zeroC>k)
                if(nums[left++]==0)   zeroC--;
            maxlen=max(maxlen,right-left+1);
           }
           return maxlen;

    }
};