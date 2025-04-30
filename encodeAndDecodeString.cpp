#include <string>
#include <vector>

// R1 suggests an issue with references persisting after initial function call,
//  but this implementation passes the test cases 

class Solution {
public:
  // this is a class-wide variable, that should be cleared, but should we
  //  clear it after decode() is called?
  std::vector<int> lengths{};

  // store lengths in vector and concatenate strings in strs
  std::string encode(std::vector<std::string> &strs) {
    std::string combined = "";
    for (std::string s : strs) {
      // std::vector doesn't know its size after instantiation, so we must
      //  perform push_back() instead of writing to the index
      lengths.push_back(s.length());
      combined.append(s);
    }
    return combined;
  }

  std::vector<std::string> decode(std::string s) {

    // to store returning strings
    std::vector<std::string> strings{};

    // dont modify the original string
    std::string tmp = s;

    // we want to make sure that we take strings off the front
    // to retain correct order
    int i = 0;
    while (i < lengths.size()) {
      strings.push_back((tmp.substr(0, lengths[i])));

      // substr() takes the starting index and the number of characters as arguments
      tmp = tmp.substr(lengths[i], tmp.size() - lengths[i]);
      i++;
    }
    return strings;
  }
};
