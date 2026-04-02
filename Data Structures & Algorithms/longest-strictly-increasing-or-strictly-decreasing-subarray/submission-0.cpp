class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1;
        int maxi = 1;
        for(int i = 1; i< nums.size();i++){
            if(nums[i]>nums[i-1]){
                inc++;
                maxi=max(maxi,inc);
            }
            else{
                inc=1;
            }
        }

        int dec = 1;
        int mini = 1;
        for(int i = 1; i< nums.size();i++){
            if(nums[i]<nums[i-1]){
                dec++;
                mini=max(mini,dec);
            }
            else{
                dec=1;
            }
        }

        return maxi>=mini?maxi:mini;
    }
};