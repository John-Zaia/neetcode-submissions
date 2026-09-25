class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int biggestContainer = 0;

        while (left != right) {
            int containerWidth = right - left;
            int containerHeight = std::min(heights[right], heights[left]);
            int currentContainer = containerHeight * containerWidth;

            if (biggestContainer < currentContainer) {
                biggestContainer = currentContainer;
            }

            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return biggestContainer;
    }
};
