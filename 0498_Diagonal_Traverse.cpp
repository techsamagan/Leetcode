class Solution {
public:
    std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        std::vector<int> result;

        int total = m * n;
        int row = 0, col = 0;
        int dir = 1; 

        for (int i = 0; i < total; ++i) {
            result.push_back(mat[row][col]);
            row -= dir;
            col += dir;

            
            if (row >= m) {
                row = m - 1;
                col += 2;
                dir = -dir;
            }
            if (col >= n) {
                col = n - 1;
                row += 2;
                dir = -dir;
            }
            if (row < 0) {
                row = 0;
                dir = -dir;
            }
            if (col < 0) {
                col = 0;
                dir = -dir;
            }
        }

        return result;
    }
};
