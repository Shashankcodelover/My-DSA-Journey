class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n==1)    return false;
        stack <char> stk;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){ stk.push(s[i]);}

            else{
                
                if(stk.empty())    return false;
                
                if(s[i]==')' && stk.top()!='(')    return false;
                if(s[i]=='}' && stk.top()!='{')    return false;
                if(s[i]==']' && stk.top()!='[')    return false;
                    
                stk.pop();
                
            }

        }
        return (stk.empty())? true: false;
    }
};