class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> freq;
        int lf=0,rt=0,len=0,Mlen=0;
        for(rt=0;rt<n;rt++){
            freq[s[rt]]++;
            
                while(freq[s[rt]]>1){
                    freq[s[lf++]]--;
                }
            
            
            len=rt-lf+1;
            Mlen=max(Mlen,len);

        }
        return Mlen;

    }
};