class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a={};
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string fir=strs[0],lst=strs[n-1];
            n=min(fir.size(),lst.size());
            for(int i=0;i<n;i++)
            {
                if(fir[i]!=lst[i])    
                    return a;

                a+=fir[i];
            }

             return a;
        
    }
};