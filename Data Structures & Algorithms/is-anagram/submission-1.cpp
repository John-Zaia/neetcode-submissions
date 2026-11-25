class Solution {
   public:
    bool isAnagram(string s, string t) {
        std::map<char, int> sMap;
        std::map<char, int> tMap;

        for (int i = 0; i < s.size(); i++) {
            sMap[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            tMap[t[i]]++;
        }

        for (const auto& [key, val] : sMap) {
            std::cout << key << ": " << val << "\n";
        }

        if (sMap == tMap) {
            return true;
        } else {
            return false;
        }
    }
};
