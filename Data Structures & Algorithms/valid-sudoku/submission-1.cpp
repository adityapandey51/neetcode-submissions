class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> r(9);
        vector<unordered_set<int>> c(9);
        vector<unordered_set<int>> m(9);

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j]=='.') continue;
                int num = board[i][j]-'0';

                if(r[i].find(num)!=r[i].end()) return false;

                r[i].insert(num);

                if(c[j].find(num)!=c[j].end()) return false;

                c[j].insert(num);

                if(m[(i/3)*3+(j/3)].find(num)!=m[(i/3)*3+(j/3)].end()) return false;

                m[(i/3)*3+(j/3)].insert(num);
            }
        }
        return true;
    }
};
