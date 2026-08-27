class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> duplicates;

        for (int i = 0; i < nums.size(); i++)
        {
            if (duplicates.contains(nums[i]))
            {
                duplicates[nums[i]]++;
            }
            else
            {
                duplicates.emplace(nums[i], 1);
            }
        }

        for (const auto& [key, value] : duplicates) {
            if (value > 1)
            {
                return true;
            }
        }

        return false;
    }
};