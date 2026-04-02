class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,int> mp;

        for(char ch:s){
            mp[ch]++;
        }
        for(char ch:t){
            if(mp[ch]==0) return false;
            mp[ch]--;
        }
        for(auto [key,value]:mp){
            if(value!=0) return false;
        }
        return true;
    }
};
