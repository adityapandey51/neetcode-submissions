class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()==0) return "";

        string res="";
        for(auto str:strs){
            res+=to_string(str.size())+',';
        }
        res+='#';

        for(auto str:strs){
            res+=str;
        }
        cout<<res<<endl;
        return res;

    }

    vector<string> decode(string s) {
        if(s.size()==0) return {};

        int index = 0;
        while(s[index]!='#'){
            index++;
        }
        index++;
        cout<<"index == "<<index<<endl;
        vector<string> ans;
        int i =0;
        while(s[i]!='#'){
            cout<<s[i]<<endl;
            string string_of_size = "";
            while(s[i]!=','){
                string_of_size+=s[i];
                cout<<"ttttt"<<string_of_size<<endl;
                i++;
            }
            int size_of_string = stoi(string_of_size);
            cout<<"size: "<<size_of_string<<endl;
            i++;
            if(size_of_string==0) {ans.push_back("");
                cout<<"size of string is 0"<<endl;
            }
            else{
                ans.push_back(s.substr(index,size_of_string));
                index+=size_of_string;
            }
        }
        return ans;
    }
};
