class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> groupedAnagrams;
        std::vector<std::vector<std::string>> output;

        for (int i = 0; i < strs.size(); i++) {
            std::string sortedWord = strs[i];
            std::sort(sortedWord.begin(), sortedWord.end());

            auto it = groupedAnagrams.find(sortedWord);

            if (it == groupedAnagrams.end()) {
                groupedAnagrams.insert({sortedWord, {strs[i]}});
            } else {
                groupedAnagrams[sortedWord].push_back(strs[i]);
            }
        }

        for (const auto& pair : groupedAnagrams) {
            output.push_back(pair.second);
        }

        return output;
    }
};
