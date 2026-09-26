class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        std::map<int, int> myMap;
        std::vector<int> keys;
        int longestSequence = 1;
        int currentSequence = 1;

        if(nums.size() == 0)
        {
            return 0;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!myMap.contains(nums[i])) {
                myMap.emplace(nums[i], nums[i]);
            }
        }

        for (auto i : myMap) {
            keys.emplace_back(i.first);
        }

        for (int i = 0; i < keys.size() - 1; i++) {
            if (keys[i] + 1 == keys[i + 1]) {
                currentSequence++;
            } else {
                longestSequence = std::max(longestSequence, currentSequence);
                currentSequence = 1;
            }
        }

        longestSequence = std::max(longestSequence, currentSequence);

        return longestSequence;
    }
};
