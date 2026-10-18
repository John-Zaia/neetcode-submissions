class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }

        int n1 = s1.length();
        int n2 = s2.length();

        std::vector<int> s1Counts(26, 0);
        std::vector<int> s2Counts(26, 0);

        for (int i = 0; i < n1; i++) {
            s1Counts[s1[i] - 'a']++;
            s2Counts[s2[i] - 'a']++;
        }

        if (s1Counts == s2Counts) {
            return true;
        }

        for (int i = n1; i < n2; i++) {
            s2Counts[s2[i] - 'a']++;
            s2Counts[s2[i - n1] - 'a']--;
            if (s1Counts == s2Counts) return true;
        }

        return false;
    }
};
