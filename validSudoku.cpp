#include <vector>
#include <unordered_map>

class Solution {
public:
  bool isValidSudoku(std::vector<std::vector<char>> &board) {
    for (int i = 0; i < 9; i ++) {
      for (int j = 0; j < 9; j++){
        // i am used to writing constructors for heap allocation in java but it may be unecessary to do so unless the data structure will be used at mass, in which case you would use a constructor, preceded by a unique pointer as per cpp standard practice.
        std::unordered_map<char, int> frequency;
        frequency[board[i][j]]++;
      }
    }
  }
};
