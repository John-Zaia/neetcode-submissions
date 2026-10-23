class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {

	int max = std::ranges::max(piles);
	int minSpeed = max;

	int l = 1;
	int r = max;

	while (l <= r)
	{
		int m = l + (r - l) / 2;
		int hours = 0;

		for (int i = 0; i < piles.size(); i++)
		{
			hours += (piles[i] + m - 1) / m;
		}

		if (hours <= h)
		{
			minSpeed = m;
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}

	return minSpeed;
    }
};
