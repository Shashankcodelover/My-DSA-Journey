class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size(),passenger=0;
        vector<int> diff(1001,0);
        for(int i=0;i<n;i++){

            int from = trips[i][1];
            int to = trips[i][2];
            int pass = trips[i][0];

            diff[from] += pass;
            diff[to] -= pass;

        }

        for(auto change: diff){
            passenger += change;
            if(passenger > capacity)    return false;
        }
        return true;
    }
};