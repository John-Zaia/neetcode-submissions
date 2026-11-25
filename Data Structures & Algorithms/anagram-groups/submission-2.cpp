class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::string, std::vector<std::string>> answer;
        std::vector<std::vector<std::string>> groupedAnagrams;

        for (int i = 0; i < strs.size(); i++) {
            std::string key = strs[i];
            std::sort(key.begin(), key.end());
            answer[key].push_back(strs[i]);
        }

        for (auto& [key, group] : answer) {
            groupedAnagrams.push_back(std::move(group));
        }

        return groupedAnagrams;
    }
};
