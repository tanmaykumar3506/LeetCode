class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();          // number of rows
        int n = mat[0].size();       // number of columns

        vector<int> result;
        result.reserve(m * n);       // reserve space for all elements

        int row = 0, col = 0;        // start from top-left cell
        bool up = true;              // true → move up-right, false → move down-left

        // traverse exactly m * n elements
        for (int i = 0; i < m * n; i++) {

            result.push_back(mat[row][col]);   // store current element

            if (up) {   // moving up-right
                if (col == n - 1) {             // hit right boundary
                    row++;                      // move down
                    up = false;                 // change direction
                }
                else if (row == 0) {            // hit top boundary
                    col++;                      // move right
                    up = false;                 // change direction
                }
                else {                          // normal up-right move
                    row--;
                    col++;
                }
            }
            else {   // moving down-left
                if (row == m - 1) {             // hit bottom boundary
                    col++;                      // move right
                    up = true;                  // change direction
                }
                else if (col == 0) {            // hit left boundary
                    row++;                      // move down
                    up = true;                  // change direction
                }
                else {                          // normal down-left move
                    row++;
                    col--;
                }
            }
        }

        return result;   // final diagonal order
    }
};
