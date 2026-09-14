class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size(),isG=0;
        vector<int> res;
        unordered_map<int,int> w;
        stack<int> g;
        g.push(nums2[0]);
        for(int i=1;i<n;i++){
            if(nums2[i]<g.top()){
                g.push(nums2[i]);
            }
            else{
                while(!g.empty() && nums2[i] > g.top()){
                    int x=g.top();
                    w[x]=nums2[i];
                    g.pop();
                }
                g.push(nums2[i]);
            }

        }
        for(int i=0;i<m;i++){
            res.push_back(  (  w.find(nums1[i]) != w.end()  ) ? w[nums1[i]] : -1 );
        }

        return res;

    }
};