class Solution {
    int findPivot(vector<int> &nums, int start, int end){
        int index = start;
        int pivot = nums[end];
        for(int i = start; i <= end; i++){
            if(nums[i] <= pivot){
                swap(nums[index],nums[i]);
                index++;
            }
        }
        return index-1;
    }

    void quickSort(vector<int> &nums, int start, int end){
        if(start >= end ) return;

        int pivot = findPivot(nums, start, end);
        quickSort(nums, start, pivot-1);
        quickSort(nums, pivot+1, end);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        
        quickSort(nums, start, end);
        return nums;
    }
};