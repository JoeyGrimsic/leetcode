#include <unordered_set>
#include <vector>

//didnt compile on neetcode.. maybe neetcode doesn't compile c++20?
class Solution {
public:
  int longestConsecutive(std::vector<int> &nums) {
    if (nums.empty())
      return 0;
    std::unordered_set<int> s(nums.begin(), nums.end());
    int max = 1;
    for (int x : s) {
      int count = 1;
      if (!s.contains(x - 1)) {
        while (s.contains(x + 1)) {
          x++;
          count++;
          if (count > max)
            max = count;
        }
      }
    }
    return max;
  }
};
