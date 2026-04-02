class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> count(26,0);

        for(char c:s){
            count[c-'a']++;
        }
        string ans="";
        for(char c:order){
            if(count[c-'a']){
                while(count[c-'a']){
                    ans.push_back(c);
                    count[c-'a']--;
                }
            }
        }
        for(int i =0; i< 26;i++){
            if(count[i]!=0){
                char ch = 'a'+i;
                while(count[i]--){
                    ans.push_back(ch);
                }
            }
        }
        return ans;
    }
};