class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());

        priority_queue<
            int,
            vector<int>,
            greater<int> > available;
        priority_queue<
            pair<long long, int>,
            vector<pair<long long, int>>,
            greater<pair<long long, int>>> busy;

        vector<int> c(n,0);

        for(int i=0;i<n;i++){
            available.push(i);
        }

        for(auto &meet: meetings){
            long long st = meet[0];
            long long end = meet[1];
            long long duration = end - st;

            while(!busy.empty() && busy.top().first <= st){
                available.push(busy.top().second);
                busy.pop();
            }
            int room;
            if(!available.empty()){
                room = available.top();
                available.pop();
                busy.push({end,room});
            }else{

                auto earliest = busy.top();
                busy.pop();

                long long newst = earliest.first;
                end = newst + duration;

                room = earliest.second;
                busy.push({end,room});

            }
            c[room]++;


        }

        int ans = 0;
        for(int i=1;i<n;i++){
            if(c[i] > c[ans]){
                ans = i;
            }
        }
        return ans;


    }
};