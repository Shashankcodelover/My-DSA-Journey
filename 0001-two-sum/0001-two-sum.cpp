class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> pointer;
        unordered_map<int,int> sum;
        for(int i=0;i<n;i++)
        {
            if(sum.find(target-nums[i])!=sum.end()){
                pointer.push_back(i);
                pointer.push_back(sum[target-nums[i]]);
            }
            sum[nums[i]]=i;
        }   
        return pointer;
    }
};