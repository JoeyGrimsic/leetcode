#include <algorithm>
#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
    std::vector<std::vector<int>> triplets = {};
    std::vector<int> tmp = nums;
    int l = 0;
    int r = nums.size() - 1;
    int m = 1;
    // note when you call sort you do not need to pass the reference as an
    // argument, just iterators to the begin() and end()
    std::sort(tmp.begin(), tmp.end());
    while (l < r && m < r) {
      int sum = tmp[l] + tmp[m] + tmp[r];
      int mstart = m;
      while (m < r) {
        sum = tmp[l] + tmp[m] + tmp[r];
        if (sum == 0)
          triplets.push_back({l, m, r});
        m++;
      }
    }
  }
};
