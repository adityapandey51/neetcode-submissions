class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> count;
        vector<vector<int>> temp(nums.size()+1);

        for(auto &num:nums){
            count[num]++;
        }

        for(auto [num,freq]:count){
            temp[freq].push_back(num);
        }

        vector<int> ans;

        for(int i = nums.size(); i>=0; i--){
            for(auto num:temp[i]){
                ans.push_back(num);
                if(ans.size()==k) return ans;
            }
        }
        return {};
        
    }
};