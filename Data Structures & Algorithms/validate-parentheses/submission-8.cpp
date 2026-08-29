class Solution {
public:
    bool isValid(string s) {
	char topValue;
	std::stack<char> myStack;
	std::map<char, char> myMap = {
		{'(', ')'},
		{'[', ']'},
		{'{', '}'}
	};

	for (int i = 0; i < s.size(); i++)
	{
		if (myMap.contains(s[i]))
		{
			myStack.push(s[i]);
		}
		else
		{
			if (myStack.empty()) return false;

			topValue = myStack.top();

			if (myMap[topValue] == s[i])
			{
				myStack.pop();
			}
			else
			{
				return false;
			}
		}
	}

	if(myStack.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
	}
};
