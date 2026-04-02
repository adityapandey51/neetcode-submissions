class Solution {
public:
    string addBinary(string a, string b) {

        int carry = 0;
        string ans = "";

        int i = a.size()-1;
        int j = b.size()-1;
        while(i >= 0 && j >= 0){
            int x = a[i--]-'0';
            int y = b[j--]-'0';

            int res = x+y+carry;
            carry = res/2;
            ans += '0'+(res%2);
        }

        while(i >= 0){
            int x = a[i--]-'0';
            int res = x+carry;
            carry = res/2;
            ans += '0'+(res%2);
        }

        while(j >= 0){
            int x = b[j--]-'0';
            int res = x+carry;
            carry = res/2;
            ans += '0'+(res%2);
        }

        if(carry) ans +='0'+carry;
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};