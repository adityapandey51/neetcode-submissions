class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int ans =0;
        for(int i = 0; i< heights.size();i++){
            while(!s.empty() && heights[i] < heights[s.top()]){
                int index = s.top();
                s.pop();
                if(!s.empty())
                    ans = max(ans, heights[index]*(i-s.top()-1));
                else
                    ans = max(ans, heights[index]*(i));
            }
            s.push(i);
        }

        int n = heights.size();
        while(!s.empty()){
            int index = s.top();
            s.pop();
            if(!s.empty())
            ans = max(ans, heights[index]*(n-s.top()-1));
            else
            ans = max(ans, heights[index]*n);

        }
        return ans;
    }
};