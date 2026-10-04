class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),maxL=0;
        unordered_set<int> mp(nums.begin(),nums.end());
        for(int x:mp){
                if(!mp.count(x-1)){
                    int nu=1,cur=x;
                    while(mp.count(cur+1)){
                        nu++;
                        cur++;
                    }
                    maxL=max(maxL,nu);
                }
        }
        return maxL;
    }
};