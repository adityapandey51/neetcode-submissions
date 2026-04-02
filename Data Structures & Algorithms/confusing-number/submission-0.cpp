class Solution {
public:
    bool confusingNumber(int n) {
        map<int, int> invertMap = {{0, 0}, {1, 1}, {6, 9}, {8, 8}, {9, 6}};
        int rotatedNumber = 0, nCopy = n;

        while (nCopy > 0) {
            int res = nCopy % 10;
            if (invertMap.find(res) == invertMap.end()) {
                return false;
            }

            rotatedNumber = rotatedNumber * 10 + invertMap[res];
            nCopy /= 10;
        }
        
        return rotatedNumber != n; 
    }
};