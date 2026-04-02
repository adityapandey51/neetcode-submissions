class Solution {
public:
    int minOperations(vector<string>& logs) {

        stack<string> s;
        for(string &log:logs){
            if(log=="../"){
                if(s.empty()) continue;
                else{
                    s.pop();
                }
            }
            else if(log=="./")continue;
            else s.push(log);
        }
        return s.size();
        
    }
};