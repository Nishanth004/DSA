class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int row = 9, col = 9;
        unordered_map<char, vector<pair<int, int>>> map;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                char ele = b[i][j];

                // Skip empty cells
                if (ele == '.') {
                    continue;
                }

                // element exists, check for duplicates
                if (map.count(ele)) {
                    auto& vec = map[ele];

                    // Check for duplicates in the same row or column
                    for (const auto& pair : vec) {
                        if ((pair.first == i && pair.second != j) ||
                            (pair.first != i && pair.second == j)) {
                            return false; // Duplicate found in the same row or
                                          // column
                        }
                    }

                    // Check for duplicates in the same 3x3 sub-grid
                    // this gives starting index of the sub-matirx
                    int startRow = (i / 3) * 3;
                    int startCol = (j / 3) * 3;
                    for (const auto& pair : vec) {
                        if (pair.first != i && pair.second != j &&
                            pair.first >= startRow &&  pair.first < startRow + 3 &&
                            pair.second >= startCol &&  pair.second < startCol + 3) {
                            return false; // Duplicate found in the same 3x3
                                          // sub-grid
                        }
                    }
                }

                // Store the position (i, j) of the digit ele
                map[ele].push_back({i, j});
            }
        }

        return true; // Sudoku board is valid
    }
};
