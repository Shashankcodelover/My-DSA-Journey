class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>dq;
        vector<int> res;
        for(int rt=0;rt<n;rt++){
            while(!dq.empty() && nums[dq.back()] <= nums[rt])
                dq.pop_back();
            if(!dq.empty() && dq.front() == rt - k) {
                dq.pop_front();
            }
            dq.push_back(rt);
            if(rt >= k - 1) {
                res.push_back(nums[dq.front()]);
            }
        }
        
        return res;
    }
};