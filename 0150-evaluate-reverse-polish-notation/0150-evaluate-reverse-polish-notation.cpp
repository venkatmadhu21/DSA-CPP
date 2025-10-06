class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int a = 0, b = 0;

        for (auto token : tokens) {
            if (token == "+") {
                a = stk.top(); stk.pop();
                b = stk.top(); stk.pop();
                stk.push(b + a);
            } 
            else if (token == "-") {
                a = stk.top(); stk.pop();
                b = stk.top(); stk.pop();
                stk.push(b - a);
            } 
            else if (token == "*") {
                a = stk.top(); stk.pop();
                b = stk.top(); stk.pop();
                stk.push(b * a);
            } 
            else if (token == "/") {
                a = stk.top(); stk.pop();
                b = stk.top(); stk.pop();
                stk.push(b / a);
            } 
            else {
                stk.push(stoi(token));
            }
        }

        return stk.top();
    }
};
