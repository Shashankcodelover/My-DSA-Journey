class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       vector<int> res;
       unordered_map<int,int> arr;
       for(int i=0;i<n;i++)
        {
            if(arr.find(target-nums[i])!= arr.end())
            {
                res.push_back(i);
                res.push_back(arr[target-nums[i]]);
            }
            else
                arr[nums[i]]=i;
        }
        return res;
    }
};