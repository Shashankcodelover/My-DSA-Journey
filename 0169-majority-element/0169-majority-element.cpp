class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),freq=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(freq==0){
                ans=nums[i];freq=1;
            }
            else if(ans==nums[i])   freq++;
            else freq--;
        }
        return ans;

        
    }
};