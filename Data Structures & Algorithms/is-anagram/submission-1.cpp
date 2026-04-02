class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> count(26,0);

        for(auto a:s){
            count[a-'a']++;
        }
        for(auto a:t){
            if(count[a-'a']==0) return false;
            count[a-'a']--;
        }
 
        return true;
        
    }
};
