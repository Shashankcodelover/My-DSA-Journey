class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size(),curP=0;
        
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
            > minheap;

        sort(trips.begin(),trips.end(),
            [](vector<int>&a, vector<int>&b){
                return a[1]<b[1];
            });

        for(int i=0;i<n;i++){
            while(!minheap.empty() && minheap.top().first <= trips[i][1]){
                curP-=minheap.top().second;
                minheap.pop();
            }
            curP+=trips[i][0];
            if(curP > capacity)   return false;
            minheap.push({trips[i][2],trips[i][0]});
        }
        return true;
    }
};