class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {

        int i = 0;
        int j = 0;
        while(i < word.size() && j < abbr.size()){
            if(abbr[j]<='z' && abbr[j]>='a'){
                if(abbr[j]!=word[i]) return false;
                else{
                    j++;
                    i++;
                }
            }else{
                string s;
                if(abbr[j]=='0') return false;
                s.push_back(abbr[j++]);
                while(abbr[j]>='0' && abbr[j]<='9'){
                    s.push_back(abbr[j]);
                    j++;
                }
                int a= stoi(s);
                i+=a;
            }
        }

        if(i == word.size() && j==abbr.size()) return true;
        return false;
        
    }
};