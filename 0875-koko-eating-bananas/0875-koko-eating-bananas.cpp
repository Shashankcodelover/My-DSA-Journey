class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int st = 1, end = 0;
        int mx = INT_MIN;
        for(int x: piles){
            mx = max(mx,x);
        }
        end = mx;
        while(st < end){
            int mid = st + (end - st) / 2;
            int is = 0;
            long long c =0;
            for(int x: piles){
                c += (x+mid-1)/mid;
                if(c>h) break;
            }
            if(c<=h)    is =1;
            if(is)  end = mid;
            else st = mid+1;
        }
        return st;
    }
};