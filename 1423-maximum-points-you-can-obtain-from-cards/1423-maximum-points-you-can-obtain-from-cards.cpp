class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size(),l=0,sum=0,maxS=0,r=n-1;
        for(l=0;l<k;l++)
            sum+=cardPoints[l];
        maxS=max(maxS,sum);
        l--;
        while(l!=-1){
            sum-=cardPoints[l];
            sum+=cardPoints[r];
            maxS=max(maxS,sum);
            r--;l--;
        }
        return maxS;
    }
};