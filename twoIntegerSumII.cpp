#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &numbers, int target) {
    // constraint: don't use datastructure
    int l = 0;
    int r = numbers.size() - 1;
    // the idea is to not let the indices pass each other..
    while (l < r) {
      int sum = numbers[l] + numbers[r];
      if (sum == target){
    return {++l, ++r}; // 1-indexed, also notice the ++ comes first, this is because you want the value to be increased during the line, not after.
      }
      else if (sum < target){
        l++;
      }
      else{
        r--;
      }
    }
    return {}; // done to compile- will never reach due to always being a solution
  }
};
