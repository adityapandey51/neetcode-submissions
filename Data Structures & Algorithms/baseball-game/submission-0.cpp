class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(auto operation:operations){
            if(operation == "+" && !s.empty()){
                int top = s.top();
                s.pop();
                int top2= s.top();
                s.push(top);
                s.push(top+top2);
            }else if(operation == "D" && !s.empty()){
                int top =s.top();
                s.push(top*2);
            }else if(operation=="C" && !s.empty()){
                s.pop();
            }else{
                s.push(stoi(operation));
            }
        }

        int ans = 0;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};