class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1]) return nums.size();
        if(target <nums[0]) return 0;

        int start = 0;
        int end = nums.size()-1;
        int mid = start +((end-start)/2);

        while(start <= end){
            if(nums[mid] == target) return mid;
            else if(nums[mid]>target) end = mid-1;
            else start= mid+1;
            mid = start +((end-start)/2);

        }
        return mid;

    }
};