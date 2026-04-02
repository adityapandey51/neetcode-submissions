class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      long long result = 0;
      for( auto &num:nums) result ^= num;

      long long fdb = result & (-result);
      int groupA = 0;
      int groupB = 0;
      for(auto &num:nums){
        if(num & fdb) groupA ^= num;
        else groupB ^= num;
      }  
      return {groupA,groupB};
    }
};