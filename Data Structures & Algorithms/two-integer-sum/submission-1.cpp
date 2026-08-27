class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	std::vector<int> indexes;
	int exists;

	for (int i = 0; i < nums.size() - 1; i++)
	{
		exists = target - nums[i];

        auto it = std::find(nums.begin() + i + 1, nums.end(), exists);
		if (it != nums.end()) {
			int index = std::distance(nums.begin(), it);
			indexes.emplace_back(i);
			indexes.emplace_back(index);
			break;
		}
	}

        return indexes;
    }
};
