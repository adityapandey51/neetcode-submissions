class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++){
            int j = 0;
            while(nums1[i] != nums2[j]) j++;
            int k = j+1;
            while(nums2[k] <= nums2[j] && k < nums2.size()) k++;

            if (k == nums2.size()) ans.push_back(-1);
            else
                ans.push_back(nums2[k]);
        }
        return ans;
    }
};