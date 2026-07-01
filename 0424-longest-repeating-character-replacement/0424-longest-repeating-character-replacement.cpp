class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,maxfreq=0,len=0,maxlen=0;
        vector<int>freq(26,0);
        for(int right=0;right<s.size();right++)
        {
            freq[s[right]-'A']++;
            maxfreq=max(maxfreq,freq[s[right]-'A']);
            while((right-left+1)-maxfreq>k)
            {
                
                freq[s[left++]-'A']--;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};