class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxArea = 0;

        while (left <= right) {
            int containerWidth = right - left;
            int containerHeight = std::min(heights[left], heights[right]);
            int area = containerWidth * containerHeight;

            maxArea = std::max(area, maxArea);

            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};
