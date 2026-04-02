class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i = 0; i< arr.size();i++){
            mp[arr[i]]++;
        }
        int ans = 0;
        for(auto &pair:mp){
            if(mp.find(pair.first+1)!=mp.end()){
                ans+=pair.second;
            }
        }
        return ans;
    }
};
