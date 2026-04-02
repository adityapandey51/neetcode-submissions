class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {

        vector<string> ans;

        for(auto word1:words){
            for(auto word2:words){
                if(word1.size() < word2.size() && word2.find(word1) != std::string::npos){
                    ans.push_back(word1);
                    break;
                }
            }
        }
        return ans;
        
    }
};