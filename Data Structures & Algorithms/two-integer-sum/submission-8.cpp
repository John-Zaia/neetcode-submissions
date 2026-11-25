class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {
            int exists = target - nums[i];

            auto it = std::find(std::begin(nums) + i + 1, std::end(nums), exists);

            if (it != std::end(nums)) {
                int index = it - std::begin(nums);
                answer.push_back(i);
                answer.push_back(index);
                return answer;
            }
        }
    }
};
