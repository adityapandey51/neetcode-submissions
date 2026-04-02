class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> maxi(n, -1);

        for(int i = n-2; i>=0; i--){
            maxi[i] = max(arr[i+1],maxi[i+1]);
        }

        return maxi;
    }
};