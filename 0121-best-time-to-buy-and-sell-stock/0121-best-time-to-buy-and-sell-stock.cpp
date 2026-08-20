class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),minv=INT_MAX,i=0,maxP=INT_MIN;
        for(i=0;i<n;i++){
            minv=min(minv,prices[i]);
            maxP=max(maxP,prices[i]-minv);
        } return maxP;
    }
};