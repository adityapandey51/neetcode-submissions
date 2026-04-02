class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int count =0;

        for(int num:nums){
            if(count == 0){
                ans= num;
                count++;
            }
            else{
                if(num==ans) count++;
                else
                    count--;
            }
        }
        return ans;
    }
};