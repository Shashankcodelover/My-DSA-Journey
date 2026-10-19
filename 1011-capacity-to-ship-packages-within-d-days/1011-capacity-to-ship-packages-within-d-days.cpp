class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size(),mx=INT_MIN,sum=0;
        for(int x: weights){
            mx = max(mx,x);
            sum+=x;
        }
        int st = mx;
        int end = sum;

        int rd = 0;
        int curLoad;

        while(st<end){
            int mid = st + (end - st)/2;
            rd=0;
            curLoad =0;
            for(int x: weights){
                curLoad += x;
                
                if(curLoad > mid){   rd++;curLoad = x;}
            }

            if(rd < days)   end = mid;
            else st = mid+1;
        }

        return st;
    }
};