class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, char> r, c, b;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char value = board[i][j];

                if (value == '.')
                    continue;

                int bi = (i / 3) * 3 + (j / 3);

                int rk = i * 10 + value;
                int ck = j * 10 + value;
                int bk = bi * 10 + value;

                if (r.count(rk) || c.count(ck) || b.count(bk)) {
                    return false;
                }
                r[rk] = value;
                c[ck] = value;
                b[bk] = value;
            }
        }
        return true;
    }
};
