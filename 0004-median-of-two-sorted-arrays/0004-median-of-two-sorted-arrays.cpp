class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>num;
        for(int x: nums1)num.push_back(x);
        for(int x: nums2)num.push_back(x);
        sort(num.begin(),num.end());
        int n=num.size();
        if(n%2==1)
            return num[n/2];
        
        return (num[n/2-1]+num[n/2])/2.0;
    }
};