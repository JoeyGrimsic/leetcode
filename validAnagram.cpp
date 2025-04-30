#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
  bool validAnagram (std::string s, std::string t) {
    std::unordered_map<char, int> map = {};

    if (s.size() != t.size())
      return false;

    for (char c : s) {
      map[c]++;
    }

    for (char c : t) {
      map[c]--;
      if (map[c] < 0)
        return false;
    }
    return true;
  }
};

int main() {
  Solution solution;
  std::string s = "racecar";
  std::string t = "carrace";
  std::cout << std::boolalpha << solution.validAnagram (s, t) << '\n';
  return 0;
}

