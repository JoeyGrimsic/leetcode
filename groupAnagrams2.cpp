#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string >> groupAnagrams(std::vector<std::string >& strs) {
    std::vector<std::vector<std::string>> results;
    // this approach will involve storing sorted strings in a map as the key value
    //  and the value will be the original string

    std::unordered_map<std::string, std::vector<std::string>> map;

    // add all of the elements to the map
    for (std::string s : strs){
      std::string tmp = s;
      std::sort(tmp.begin(), tmp.end());
      map[tmp].push_back(s);
    }

    // organize vectors into results
    for (std::pair<std::string, std::vector<std::string>> pair : map){
      results.push_back(pair.second);
    }

    return results;
    }
};
