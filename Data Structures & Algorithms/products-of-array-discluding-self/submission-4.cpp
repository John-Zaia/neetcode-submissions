class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> prefix;
        std::vector<int> postfix;
        std::vector<int> output;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                prefix.emplace_back(nums[i]);
            } else {
                prefix.emplace_back(nums[i] * prefix[i - 1]);
            }
        }

        int counter = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i == nums.size() - 1) {
                postfix.emplace_back(nums[i]);
            } else {
                postfix.emplace_back(nums[i] * postfix[counter - 1]);
            }
            counter++;
        }

        std::reverse(postfix.begin(), postfix.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                output.emplace_back(postfix[1]);
            } else if (i == nums.size() - 1) {
                output.emplace_back(prefix[i - 1]);
            } else {
                output.emplace_back(postfix[i + 1] * prefix[i - 1]);
            }
        }

        return output;
    }
};
