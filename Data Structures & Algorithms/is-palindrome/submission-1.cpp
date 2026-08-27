class Solution {
public:
    bool isPalindrome(string s) {
	std::erase_if(s, [](unsigned char c)
	{
		return !std::isalnum(c);
	});

	for (char& c : s) {
		c = std::tolower(static_cast<unsigned char>(c));
	}

	int left = 0;
	int right = s.size() - 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[left] != s[right])
		{
			return false;
		}

		left++;
		right--;
	}

	return true;
    }
};
