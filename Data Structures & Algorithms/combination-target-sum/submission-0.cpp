class Solution {

    void sum(vector<int> &nums, int target, vector<vector<int>> &ans, vector<int> &result, int index){
        if(target == 0){
            ans.push_back(result);
            return;
        }

        if(index == nums.size() || target < 0) return;

        sum(nums, target, ans, result,index+1);
        result.push_back(nums[index]);
        sum(nums,target-nums[index],ans,result, index);
        result.pop_back();
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> result;
        int index = 0;

        sum(nums,target,ans,result,index);

        return ans;
    }
};
