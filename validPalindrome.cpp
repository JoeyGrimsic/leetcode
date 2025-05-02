#include <cctype>
#include <string>

// problems i ran into intially:
// off by one- not iterating backwards correctly
class Solution {
public:
  bool isPalindrome(std::string s) {
    std::string frwd = "";
    std::string bkwrd = "";
    for (int i = 0; i < s.size(); i++) {
      if (std::isalnum(s[i])) {
        frwd += std::tolower(s[i]);
      }
    }
    for (int i = s.size() - 1; i > -1; i--) {
      if (std::isalnum(s[i])) {
        bkwrd += std::tolower(s[i]);
      }
    }
    return frwd == bkwrd;
  }
};
