class Solution {
public:
    bool isAnagram(string s, string t) {
        int n;
        if((n=s.size())!=t.size()) return false;
        unordered_map<char,int> freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for(int i=0;i<n;i++)
            if(freq[s[i]]!=0)
                return false;
        return true;   
    }
};