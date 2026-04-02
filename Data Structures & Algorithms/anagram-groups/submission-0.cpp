class Solution {
    bool isAnagram(string &str1, string &str2){
        if(str1.length() != str2.length()){
            return false;
        }

        vector<int> temp(26,0);
        for(char ch:str1){
            temp[ch-'a']++;
        }
        for(char ch:str2){
            temp[ch-'a']--;
        }

        for(int i = 0; i< 26;i++){
            if(temp[i]!=0) return false;
        }
        return true;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<bool> temp(strs.size(), false);
        for(int i = 0; i< strs.size();i++){
            if(temp[i]) continue;
            vector<string> str;
            str.push_back(strs[i]);
            for(int j = i+1;j<strs.size();j++){
                if(!temp[j] && isAnagram(strs[i],strs[j])){
                    cout<<strs[i]<<" "<<strs[j];
                    str.push_back(strs[j]);
                    temp[j] = true;
                }
            }
            ans.push_back(str);
        }
        return ans;
    }
};
