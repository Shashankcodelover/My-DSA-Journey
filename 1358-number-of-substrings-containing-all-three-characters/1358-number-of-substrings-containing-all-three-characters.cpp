class Solution {
public:
    int numberOfSubstrings(string s) {
        return atMost(s);
    }
    int atMost(string s){
        int n=s.size(),left=0,count=0;
        unordered_map <char,int> freq;
        for(int right=0;right<n;right++){
            freq[s[right]]++;
           
            while(freq['a']>0 && freq['b']>0 && freq['c']>0 )
            {
                count+=(n-right);
                freq[s[left++]]--;
            }
        }
        return count;
    }
};