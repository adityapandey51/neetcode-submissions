class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> temp(26,0);
        for(char &ch:magazine){
            temp[ch-'a']++;
        }

        for(char &ch:ransomNote){
            if(temp[ch-'a'] > 0) temp[ch-'a']--;
            else return false;
        }
        return true;
    }
};