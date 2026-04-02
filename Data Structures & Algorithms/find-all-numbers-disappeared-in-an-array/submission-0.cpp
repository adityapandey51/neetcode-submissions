class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> count(nums.size(),0);

        for(int i:nums){
            count[i-1]++;
        }
        vector<int> ans;
        for(int i = 0; i< nums.size();i++){
            if(!count[i])
                ans.push_back(i+1);
        }
        return ans;
    }
};