class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int minPrice = prices[0];
        int maxProfit = 0;

        for (std::size_t i = 1; i < prices.size(); ++i) {
            int profit = prices[i] - minPrice;
            maxProfit = std::max(maxProfit, profit);

            minPrice = std::min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};
