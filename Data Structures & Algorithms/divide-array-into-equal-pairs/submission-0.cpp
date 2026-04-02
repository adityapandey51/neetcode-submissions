class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if(nums.size()%2!=0) return false;

        unordered_map<int,int> mp;
        for(auto num:nums){
            mp[num]++;
        }

        for(auto m:mp){
            if(m.second%2!=0) return false;
        }
        return true;

    }
};