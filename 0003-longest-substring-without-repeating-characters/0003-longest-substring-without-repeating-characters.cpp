class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        size_t maxlen=0,left=0;
        bitset <256> seen{};
        for(int right=0;right<n;right++)
        {
            if(not seen[s[right]])
            {
                seen[s[right]]=1;
                maxlen=max(maxlen,right-left+1);
            }
            else
            {
                while(seen[s[right]])
                {
                    seen[s[left++]]=0;
                }
                seen[s[right]]=1;
            }
        }
        return maxlen;
    }
};