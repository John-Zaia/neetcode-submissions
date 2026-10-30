class Solution {
   public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int longest = 0;
        int counts[26] = {};
        int counter = 0;

        for (int r = 0; r < s.size(); r++) {
            counts[s[r] - 'A']++;
            counter = std::max(counter, counts[s[r] - 'A']);

            if ((r - l + 1) - counter > k) {
                counts[s[l] - 'A']--;
                l++;
            }

            longest = std::max(longest, r - l + 1);
        }

        return longest;
    }
};
