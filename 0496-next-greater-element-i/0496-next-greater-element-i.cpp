class Solution {
public:
    void nextGstack(vector<int>& nums , unordered_map<int , int>& mp){
        stack<int> s;
        for(int i=nums.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums[i]){
                s.pop();
            }
            if(!s.empty()){
                mp[nums[i]]=s.top();
            }
            s.push(nums[i]);
        }
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        nextGstack(nums2,mp);
        vector<int> res(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end())  res[i]=mp[nums1[i]];
        }
        return res;
    }
};