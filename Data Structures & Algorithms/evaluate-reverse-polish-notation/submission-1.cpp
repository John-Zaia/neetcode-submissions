class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;

        for (auto i : tokens) {
            if (i != "+" && i != "*" && i != "-" && i != "/") {
                stack.push(std::stoi(i));
            } else {
                int right = stack.top();
                stack.pop();
                int left = stack.top();
                stack.pop();

                if (i == "+")
                    stack.push(left + right);
                else if (i == "-")
                    stack.push(left - right);
                else if (i == "*")
                    stack.push(left * right);
                else
                    stack.push(left / right);
            }
        }

        return stack.top();
    }
};
