#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// this solution will vary significantly from the last anagram related problem,
// as it no longer makes sense to compare anagrams one at a time. instead for
// this problem, we want to get all of the matching anagrams into the same
// vectors. the easiest way to determine what these vectors will be is to store
// copies of the strings and sort the copies to determine if the original string
// is to be grouped as an anagram of another. we can use the sorted string as a
// look-up to a map containing all of the strings in sorted form, as well as the
// values being the original strings stored in a vector. we will then iterate
// over the map, creating a new vector based on each key, and iterate over the
// values to move them into the corresponding vector. all of these subvectors
// (holding the original strings in a vector) will be stored in a larger vector,
// that is then returned at the end of the function.

class Solution {
public:
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {
    std::vector<std::vector<std::string>> container{};
    // create the map to be used for larger vector creation
    std::unordered_map<std::string, std::vector<std::string>> count{};
    for (std::string s : strs) {
      std::string tmp =
          s; // note this is done to avoid directly modifying for-each variable.
      std::sort(tmp.begin(), tmp.end());
      // use the sorted string as look-up
      count[tmp].push_back(s);
    }
    // larger vector initialized based on map
    for (auto &x : count) {
      container.push_back(x.second);
    }
    return container;
  }
};

int main() {
  Solution sol;
  // sol.groupAnagrams(int &strs);
}
