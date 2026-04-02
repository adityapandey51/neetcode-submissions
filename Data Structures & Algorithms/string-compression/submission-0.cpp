class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int read = 0;
        int write = 0;

        while(read < n){
            chars[write++] = chars[read];

            int j = read+1;

            while(j < n && chars[j]==chars[read]){
                j++;
            }

            if(j - read > 1){
                string s = to_string(j-read);
                for(char &ch:s){
                    chars[write++]=ch;
                }
            }
            read = j;
        }

        return write;
        
    }
};