class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> kFrequent;
        std::vector<int> topFrequent;

        for (int i = 0; i < nums.size(); i++)
        {
            if (!kFrequent.contains(nums[i]))
            {
                kFrequent.insert({ nums[i], 1 });
            }
            else
            {
                kFrequent[nums[i]] += 1;
            }
        }

        for (int i = 0; i < k; i++)
        {
            auto maxIt = std::max_element(
                kFrequent.begin(),
                kFrequent.end(),
                [](const auto& p1, const auto& p2) {
                    return p1.second < p2.second;
                });

            topFrequent.emplace_back(maxIt->first);
            auto node = kFrequent.extract(maxIt->first);
        }

        return topFrequent;
    }
};
