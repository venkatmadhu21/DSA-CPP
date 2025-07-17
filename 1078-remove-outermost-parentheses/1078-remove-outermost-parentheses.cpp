class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int counter = 0;
        int len = s.length(); // Use string's length() instead of strlen
        for (int i = 0; i < len; i++) {
            if (s[i] == '(' && counter > 0) {
                ans += s[i]; // Use += for string concatenation
                counter++;
            } else if (s[i] == ')') {
                counter--;
                if (counter > 0) {
                    ans += s[i];
                }
            } else {
                counter++;
            }
        }
        return ans; // Return the result
    }
};
