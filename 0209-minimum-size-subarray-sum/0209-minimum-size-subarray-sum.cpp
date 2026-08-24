class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),lf=0,rt=0,sum=0,mlen=INT_MAX;
        for(rt=0;rt<n;rt++){
            sum+=nums[rt];
            while(sum>=target){
                mlen=min(mlen,rt-lf+1);
                sum-=nums[lf++];
            }
        }
        return mlen == INT_MAX? 0:mlen;
    }
};