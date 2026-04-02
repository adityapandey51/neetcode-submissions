class Solution {
    bool find(string &word1, string &word2, vector<vector<string>> &similarPairs){
        for(vector<string> &pair:similarPairs){
            if(pair[0]==word1 && pair[1]==word2) return true;
            if(pair[0]==word2 && pair[1]==word1) return true;
        }
        return false;
    }
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        if(sentence1.size() != sentence2.size()) return false;

        int i = 0;
        while(i < sentence1.size()){
            if(sentence1[i] != sentence2[i] && !find(sentence1[i],sentence2[i], similarPairs)){
                return false;
            }
            i++;
        }

        return true;
    }
};
