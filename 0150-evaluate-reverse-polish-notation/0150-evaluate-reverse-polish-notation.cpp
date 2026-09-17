class Solution {
public:
    stack <int> stk;
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        for(string val : tokens){
            if(val=="+"){
                int b=stk.top();stk.pop();
                int a=stk.top();stk.pop();
                int res=a+b;
                stk.push(res);
            }
            else if(val=="-"){
                int b=stk.top();stk.pop();
                int a=stk.top();stk.pop();
                int res=a-b;
                stk.push(res);
            }
            else if(val=="*"){
                int b=stk.top();stk.pop();
                int a=stk.top();stk.pop();
                int res=a*b;
                stk.push(res);
            }
            else if(val=="/"){
                int b=stk.top();stk.pop();
                int a=stk.top();stk.pop();
                int res=a/b;
                stk.push(res);
            }
            else{
                stk.push(stoi(val));
            }
            
        }
        return stk.top();
    }
};