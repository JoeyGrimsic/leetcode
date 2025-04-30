#include <vector>

// this algorithm works, but it is O(n^2), which is above the LeetCode problem
// constraint

class Solution {
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums) {
    std::vector<int> result{};

    // we want to find the product for each x in nums, but we dont want to
    // multiply if x is the i-th element in nums
    for (int i = 0; i < nums.size(); i++) {
      int product = 1;
      for (int j = 0; j < nums.size(); j++) {
        if (j != i) {
          product *= nums[j];
        }
      }
      result.push_back(product);
    }
    return result;
  }
};
