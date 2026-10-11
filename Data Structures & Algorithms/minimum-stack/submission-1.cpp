class MinStack {
	std::vector<int> stack;
	std::vector<int> minStack;
	int min = 0;
public:
	MinStack() {
	}

	void push(int val) {
		stack.push_back(val);
		if (minStack.empty() || val <= minStack.back())
			minStack.push_back(val);
		else
			minStack.push_back(minStack.back());
	}

	void pop() {
		stack.pop_back();
		minStack.pop_back();
	}

	int top() {
		int top = stack.back();
		return top;
	}

	int getMin() {
		int min = minStack.back();
		return min;
	}
};
