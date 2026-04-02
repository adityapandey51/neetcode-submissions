class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;


        for(auto token:tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                int ans;
                if(token=="+") ans = second+first;
                if(token=="-") ans = second-first;
                if(token=="*") ans = second*first;
                if(token=="/") ans = second/first;
                st.push(ans);
            }
            else{
                st.push(stoi(token));
            }
        } 
        return st.top();
    }
};
