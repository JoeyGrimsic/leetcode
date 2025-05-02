#include <array>
#include <vector>

class Solution {
public:
  bool isValidSudoku(std::vector<std::vector<char>> &board) {
    std::array<std::array<bool, 9>, 9> rows = {{}};
    std::array<std::array<bool, 9>, 9> cols = {{}};
    std::array<std::array<bool, 9>, 9> boxes = {{}};
    for (int r = 0; r < 9; r++) {
      for (int c = 0; c < 9; c++) {
        char cell = board[r][c];
        if (cell == '.')
          continue;
        int k = cell - '1'; // mapping to array bitmask
        int b = r / 3 * 3 + c / 3;
        if (rows[r][k] || cols[c][k] || boxes[b][k])
          return false;
        rows[r][k] = true;
        cols[c][k] = true;
        boxes[b][k] = true;
      }
    }
    return true;
  }
};
