class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
        stack<int> numStack;
        string curr = "";
        int num = 0;
        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');   
            }
            else if (ch == '[') {
                numStack.push(num);        
                strStack.push(curr);         
                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                string prev = strStack.top(); strStack.pop();
                int times = numStack.top(); numStack.pop();
                string temp = "";
                for (int i = 0; i < times; i++) temp += curr;
                curr = prev + temp;
            }
            else {
                curr += ch;   
            }
        }
        return curr;
    }
};
