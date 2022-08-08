class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>>st;
        int res=0;
        for(int i=0;i<heights.size();i++){
            int start=i;
            while(!st.empty()&&st.top().second>heights[i]){
                int h=st.top().second;
                int w=i-st.top().first;
                int k=st.top().first;
                st.pop();
                res=max(res,h*w);
                start=k;//for extending while smaller value will come after that element
            }
            st.push({start,heights[i]});
        }
        while(!st.empty()){
            int w=heights.size()-st.top().first;
            int h=st.top().second;
            st.pop();
            res=max(res,h*w);
        }
        return res;
    }
};