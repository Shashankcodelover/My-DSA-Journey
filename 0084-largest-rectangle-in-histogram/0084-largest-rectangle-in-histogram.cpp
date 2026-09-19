class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(),maxs=0;
        if(n==1)    return heights[0];
        stack<int> st;
        for (int i = 0; i <= n; i++) {
            int currentHeight = (i == n) ? 0 : heights[i];
            
            while (!st.empty() && currentHeight < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                
                // If stack is empty, width is i. Otherwise, width is between current i and the new st.top()
                int width = st.empty() ? i : (i - st.top() - 1);
                
                maxs = max(maxs, h * width);
            }
            st.push(i);
        }
        return maxs;
    }
};