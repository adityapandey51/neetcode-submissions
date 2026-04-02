class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> s;
        for(auto num:nums){
            s.insert(num);
        }
        int ans = 1;
        int cnt = 0;
        for(int st:s){
            if(s.find(st-1)!=s.end()) continue;
            else{
                cnt = 1;
                int x=st;
                while(s.find(x+1)!=s.end()){
                    cnt++;
                    x++;
                }
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};
