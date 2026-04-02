class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = s.size()-1;

        while(index >= 0 && s[index] == ' '){
            index--;
        }

        int end = index;

        while(index >= 0 && s[index] != ' '){
            index--;
        }

        return end - index;
    }
};