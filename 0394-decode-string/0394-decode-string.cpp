class Solution {
public:
    string decodeString(string s) {
        stack<char> st; // Make stack local to avoid cross-contamination
        
        for (char ch : s) {
            if (ch == ']') {
                string val = "";
                while (!st.empty() && st.top() != '[') {
                    val += st.top();
                    st.pop();
                }
                reverse(val.begin(), val.end());
                st.pop(); // Pop the '['
                
                string strnum = "";
                while (!st.empty() && isdigit(st.top())) {
                    strnum = st.top() + strnum;
                    st.pop();
                }
                
                if (!strnum.empty()) {
                    int k = stoi(strnum);
                    string repeated = "";
                    for (int i = 0; i < k; i++) {
                        repeated += val;
                    }
                    // CRITICAL FIX: Push the decoded characters back onto the stack 
                    // so nested outer loops can use them!
                    for (char c : repeated) {
                        st.push(c);
                    }
                }
            } else {
                st.push(ch);
            }
        }
        
        // Assemble final string from the stack
        string res = "";
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end()); // Reverse since it came out of stack backwards
        return res;
    }
};