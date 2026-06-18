class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>ans1(n,n);
        vector<int>ans2(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>heights[i])
            {
                ans1[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>heights[i])
            {
                ans2[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        int maxi=heights[0]*(ans1[0]-ans2[0]-1);
        for(int i=1;i<n;i++)
        {
            maxi=max(maxi,heights[i]*(ans1[i]-ans2[i]-1));
        }
        return maxi;
        
    }
};
