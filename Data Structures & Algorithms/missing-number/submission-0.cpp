class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        return ((s*(s+1))/2)-sum;
        
    }
};
