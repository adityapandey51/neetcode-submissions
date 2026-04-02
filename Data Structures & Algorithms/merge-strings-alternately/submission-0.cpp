class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 1;
        int j = 0;
        while(i < word1.length() && j<word2.length()){
            word1.insert(i,1, word2[j]);
            j++;
            i+=2;
        }

        while(j<word2.length()){
            word1.push_back(word2[j++]);
        }

        return word1;
    }
};