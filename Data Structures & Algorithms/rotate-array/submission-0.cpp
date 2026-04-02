class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i = 0; i < k; i++){
            int curr = nums[0];
            int next = nums[0];
            for(int i = 0; i < nums.size(); i++){
               curr = next;
               next = nums[(i+1)%nums.size()];
               nums[(i+1)%nums.size()] = curr;

            }
        }
    }
};