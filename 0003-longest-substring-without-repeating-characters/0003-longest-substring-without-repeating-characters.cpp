class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int seen[128]={0},longest=0,i=0;
        for(int j=0;j<n;j++){
            char cur=s[j];
            i=max(i,seen[cur]);
            seen[cur]=j+1;
            longest=max(longest,j-i+1);
        }
        return longest;

    }
};