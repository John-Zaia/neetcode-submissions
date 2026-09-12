class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::vector<int> output;
        int left = 0;
        int right = numbers.size()-1;

        while (left < right)
        {
            if (numbers[left] + numbers[right] < target)
            {
                left++;
            }
            else if (numbers[left] + numbers[right] > target)
            {
                right--;
            }
            else
            {
                output.emplace_back(left + 1);
                output.emplace_back(right + 1);
                break;
            }
        }

        return output;
    }
};
