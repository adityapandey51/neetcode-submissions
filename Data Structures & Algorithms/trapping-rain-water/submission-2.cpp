class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixMax(height.size(),0);
        vector<int> suffixMax(height.size(),0);
        prefixMax[0]=height[0];
        suffixMax[height.size()-1]=height[height.size()-1];
        for(int i = 1; i<height.size();i++){
            prefixMax[i]= max(prefixMax[i-1],height[i]);
        }
        for(int i = height.size()-2; i>=0;i--){
            suffixMax[i]= max(suffixMax[i+1],height[i]);
        }

        int ans = 0;
        for(int i = 1; i<height.size()-1;i++){
            ans+=min(prefixMax[i],suffixMax[i])-height[i];
        }
        return ans;
    }
};
