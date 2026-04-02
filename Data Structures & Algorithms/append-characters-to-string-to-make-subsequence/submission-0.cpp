class Solution {
public:
    int appendCharacters(string s, string t) {
        int first = 0, second = 0;
        int ans = t.size();

        while(first < s.size() && second < t.size()){
            if(s[first] == t[second]){
                ans--;
                first++;
                second++;
            }else{
                first++;
            }
        }
        return ans;
    }
};