class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()==0) return "";

        string res="";
        char seperator= (char)257;
        for(string &str:strs){
            res.append(str);
            res.push_back(seperator);
        }
        return res;

    }

    vector<string> decode(string s) {
        if(s.size()==0) return {};

        int index = 0;
        vector<string> ans;
        int count =0;
        while(index < s.size()){
            while(index+count< s.size() && s[index+count]!=(char)257){
                count++;
            }

            ans.push_back(s.substr(index, count));
            index+=count;
            index++;
            count=0;

        }
        return ans;
    }
};
