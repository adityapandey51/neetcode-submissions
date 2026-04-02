class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = -1;
        for(auto &num:nums){
           mp[num]++;
        }

        for(auto &pair:mp){
           if(pair.second==1) ans = max(ans, pair.first);
        }

        return ans;
    }
};
