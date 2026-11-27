class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int, int> frequency;

        for (int i = 0; i < nums.size(); i++) {
            frequency[nums[i]]++;
        }
        int n = static_cast<int>(nums.size());

        std::vector<std::vector<int>> buckets(n + 1);

        for (const auto& [number, count] : frequency) {
            buckets[count].push_back(number);
        }

        std::vector<int> result;

        for (int count = n; count > 0; --count) {
            for (int number : buckets[count]) {
                result.push_back(number);

                if (result.size() == static_cast<std::size_t>(k)) {
                    return result;
                }
            }
        }

        return result;
    }
};
