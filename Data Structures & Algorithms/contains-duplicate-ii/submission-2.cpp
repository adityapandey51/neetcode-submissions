class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        for(int i = 0; i < nums.size()-1; i++){
            int j = i+1;
            while(abs(i-j) <= k && j< nums.size()){
                if(nums[i] == nums[j])return true;
                j++;
            }
        }
        return false;
        
    }
};