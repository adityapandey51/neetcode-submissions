class Solution {
public:
    int maxDifference(string s) {

        vector<int> count(26,0);

        for(int i =0; i< s.size(); i++){
            count[s[i]-'a']++;
        }
        
        int maxodd = 0;
        int mineven = INT_MAX;
        for(int i =0; i< 26; i++){
            if(count[i] == 0) continue;
            if(count[i]&1) maxodd = max(maxodd, count[i]);
            else mineven= min(mineven, count[i]);
        }
        return maxodd - mineven;
    }
};