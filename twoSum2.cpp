#include <vector>
#include <unordered_map>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
    // where value is the key and index is the value
    std::unordered_map<int, int> map;
    int i = 0;
    for (int x : nums){
      int complement = target - x;
      if (map.find(complement) != map.end()){
        // return flipped to return lowest index first
        return {map[complement], i };
      }
      else{
        map[nums[i]] = i;
      }
      i++;
    }
    return {};
    }
};
