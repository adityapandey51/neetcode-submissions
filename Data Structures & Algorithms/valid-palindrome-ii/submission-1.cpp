class Solution {
public:
    bool validPalindrome(string s) {

        int start = 0;
        int end = s.size()-1;
        int count = 0;

        while(start < end){
            char a = s[start];
            char b = s[end];
            if(a>='A' && a<='Z') a= a-'A'+'a';
            if(b>='A' && b<='Z')b = b-'A'+'a';

            if(a!=b){
                count++;
                end--;
            }else{
                start++;
                end--;
            }
        }
        start = 0;
        end = s.size()-1;
        int count2 = 0;
        while(start < end){
            char a = s[start];
            char b = s[end];
            if(a>='A' && a<='Z') a= a-'A'+'a';
            if(b>='A' && b<='Z')b = b-'A'+'a';

            if(a!=b){
                count2++;
                start++;
            }else{
                start++;
                end--;
            }
        }
        if(count <2 || count2<2) return true;
        return false;
        
    }
};