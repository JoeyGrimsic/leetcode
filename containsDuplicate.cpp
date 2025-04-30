#include <iostream>
#include <unordered_set>
#include <vector>

// this will be my naive solution
class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    bool containsDup = false;
    std::unordered_set<int> set = {};
    for (int x : nums) {
      if (set.find(x) == set.end()) {
        set.insert(x);
      } else {
        containsDup = true;
      };
    }
    return containsDup;
  }
};

int main() {
  Solution sol;
  std::vector<int> nums = {1, 2, 3, 4, 4};
  std::cout << std::boolalpha << sol.containsDuplicate(nums) << std::endl;
  return 0;
}
