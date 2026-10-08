class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<int, std::vector<int>> rows;
        std::unordered_map<int, std::vector<int>> cols;
        std::unordered_map<int, std::vector<int>> boxes;

        for (int r = 0; r < board.size(); r++) {
            std::cout << "\n";
            for (int c = 0; c < board.size(); c++) {
                if (board[r][c] == '.') continue;

                int val = board[r][c] - '0';
                int boxidx = (r / 3) * 3 + (c / 3);
                auto& row = rows[r];
                auto& col = cols[c];
                auto& box = boxes[boxidx];
                if (std::find(row.begin(), row.end(), val) != row.end()) {
                    return false;
                } else {
                    rows[r].emplace_back(val);
                }

                if (std::find(col.begin(), col.end(), val) != col.end()) {
                    return false;
                } else {
                    cols[c].emplace_back(val);
                }

                if (std::find(box.begin(), box.end(), val) != box.end()) {
                    return false;
                } else {
                    box.emplace_back(val);
                }
            }
        }

        return true;
    }
};
