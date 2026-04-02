class Solution {
public:
    string getHash(string &s) {
        string hashKey;
        for (int i = 1; i < s.length(); i++) {
            hashKey += (s[i] - s[i - 1] + 26) % 26 + 'a';
        }
        
        return hashKey;
    }
    
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string>> mapHashToList;
    
        for (string str : strings) {
            string hashKey = getHash(str);
            mapHashToList[hashKey].push_back(str);
        }
        
        vector<vector<string>> groups;
        for (auto it : mapHashToList) {
            groups.push_back(it.second);
        }
        return groups;
    }
};