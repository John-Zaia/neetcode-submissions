class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> lastSeen;
        int left = 0;
        int longest = 0;

        for (int right = 0; right < s.size(); right++) {
            auto it = lastSeen.find(s[right]);
            if (it != lastSeen.end() && it->second >= left) {
                left = it->second + 1;
            }

            lastSeen[s[right]] = right;
            longest = std::max(longest, right - left + 1);
        }
        return longest;
    }
};
