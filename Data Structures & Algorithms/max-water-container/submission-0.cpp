class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;

        int leftMax = 0, rightMax = height.size()-1;

        while (leftMax < rightMax){
            if (height[leftMax] < height[rightMax]){
                ans = max((rightMax - leftMax)*height[leftMax], ans);
                leftMax++;
            }else{
                ans = max((rightMax - leftMax)*height[rightMax], ans);
                rightMax--;
            }
        }
        return ans;
    }
};