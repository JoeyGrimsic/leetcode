#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++){
      int complement = target - nums[i];
      if (map.find(complement) != map.end()){
        return {i, map[complement]};
      }
      map[nums[i]] = i;
    }
    return {};
  }
};

int main() {
  Solution sol;
  std::vector<int> nums {0,1,2,3,4,5,6,7,8,9};
  int target = 7;
  std::cout << "if the array was: {";
  for (int i = 0; i < nums.size() - 1; i ++){
    std::cout << nums[i] << ", ";
  }
  std::cout << nums[nums.size()-1];
  std::cout << "} \n";
  std::cout << "then the indices of the values that sum to target are: ";
  std::vector<int> indices = sol.twoSum(nums, target);
  std::cout << "{" << indices[0] << ", " << indices[1] << "}";
}
