class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last = nums.size()-1;
        int first = 0;

        while(first <= last ){
            if(nums[last] == val && nums[first] != val){
                last--;
                first++;
            }else if(nums[first] == val && nums[last] != val){
                swap(nums[first], nums[last]);
                first++;
                last--;
            }else if(nums[first] != val && nums[last] != val){
                first++;
            }else{
                last--;
            }
        }
        int k = -1;
        for(int i = 0; i< nums.size(); i++){
            if (nums[i] == val){
                k = i;
                break;
            }
        }

        if(nums.size()==0) return 0;

        if(k!=-1)nums.erase(nums.begin()+k,nums.end());

        return nums.size();

    }
};