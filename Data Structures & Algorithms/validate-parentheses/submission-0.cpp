class Solution {
public:
    bool isValid(string s) {
     if(s.length()%2!=0)return false;

     stack<char> st;

     for(char &ch:s){
        if(ch==')'){
            if(st.empty() || st.top()!='(') return false;
            st.pop();
        }else if(ch=='}'){
            if(st.empty() || st.top()!='{') return false;
            st.pop();
        }else if(ch==']'){
            if(st.empty() || st.top()!='[') return false;
            st.pop();
        }else{
            st.push(ch);
        }
     }
     return st.empty();   
    }
};
