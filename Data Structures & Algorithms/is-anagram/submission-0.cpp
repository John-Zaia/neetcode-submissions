#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::unordered_map<std::string, int> inventory;
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if (s == t)
        {
            return true;
        }

        return false;
    }
};

