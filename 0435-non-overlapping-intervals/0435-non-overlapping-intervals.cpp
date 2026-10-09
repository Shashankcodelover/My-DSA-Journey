class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int c=0;
        int curS=INT_MAX,prevE=INT_MAX;
        sort(intervals.begin(),intervals.end(),
        [](vector<int>&a,vector<int>&b){
            return a[1]< b[1];
        });

        for(int i=0;i<n;i++){
            curS = intervals[i][0];
            if(prevE!=INT_MAX && prevE > curS){
                c++;
            }
            else prevE = intervals[i][1];

        }
        return c;
    }
};