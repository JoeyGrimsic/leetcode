#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    std::unordered_map<int, int> map;
    // map that stores integer frequencies
    for (int x : nums) {
      map[x]++;
    }

    std::vector<int> result;
    // search for most frequent element k times
    while (k > 0) {
      k--;
      int max = 0;
      int maxKey = 0;
      // find max 
      for (std::pair<int, int> p : map) {
        if (p.second > max) {
          max = p.second;
          maxKey = p.first;
        }
      }
      // remove max for next iteration
      result.push_back(maxKey);
      map.erase(maxKey);
    }
    return result;
  }
};
