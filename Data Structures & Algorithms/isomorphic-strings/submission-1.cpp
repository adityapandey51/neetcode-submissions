class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size()) return false; 

        vector<char> mapping(256, ' ');
        vector<char> mapping2(256,' ');

        for(int i=0; i< s.size(); i++){
            if(mapping[s[i]] == ' ' && mapping2[t[i]] == ' '){
                mapping[s[i]] = t[i];
                mapping2[t[i]] = s[i];
            }else{
                if(mapping[s[i]] != t[i] || mapping2[t[i]] != s[i]) return false;
            }
        }
        return true;
        
    }
};