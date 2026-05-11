class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        stack<int> st;
        int size=heights.size();
        int i=0;
        while(i<size){
            if(st.empty() || heights[st.top()]<=heights[i]){
                st.push(i++);
            }
            else{
                int y=heights[st.top()];
                st.pop();
                int x=i;
                if(!st.empty()) x=i-1-st.top();
                int area=y*x;
                ans=max(ans,area);

            }
        }
        while(!st.empty()){
            int y=heights[st.top()];
                st.pop();
                int x=i;
                if(!st.empty()) x=i-1-st.top();
                int area=y*x;
                ans=max(ans,area);


        }
        return ans;


        
    }
};