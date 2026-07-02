class Solution {
public:
    int numberOfSubstrings(string s) {
        return atMost(s);
    }
    int atMost(string s){
        int n=s.size(),left=0,count=0;
        vector <int> freq(3,0);
        for(int right=0;right<n;right++){
            freq[s[right]-'a']++;
           
            while(freq[0]>0 && freq[1]>0 && freq[2]>0 )
            {
                count+=(n-right);
                freq[s[left++]-'a']--;
            }
        }
        return count;
    }
};