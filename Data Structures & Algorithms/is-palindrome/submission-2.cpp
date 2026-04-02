class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        while(i < s.size()){
            if((s[i] < 'A' && s[i]>'9') || s[i]<'0' || (s[i] > 'Z' && s[i] <'a') || s[i]>'z') s.erase(i, 1);
            else 
                i++;
        }

        cout<< s<<endl;
        
        int start = 0;
        int end = s.size()-1;

        while(start < end){
            char a = s[start++];
            char b = s[end--];
            if(a>='A' && a<='Z') a=a-'A'+'a';
            if(b>='A' && b<='Z') b=b-'A'+'a';
            if(a!=b) return false;
            
        }
        return true;
    }
};
