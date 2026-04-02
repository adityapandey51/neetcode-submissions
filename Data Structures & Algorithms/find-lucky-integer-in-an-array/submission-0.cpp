class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> temp(501,0);

        for(int num:arr){
            temp[num]++;
        }

        int ans = 0;
        for(int num:arr){
            if(temp[num]==num) ans = max(ans, num);
        }
        return ans==0?-1:ans;
    }
};