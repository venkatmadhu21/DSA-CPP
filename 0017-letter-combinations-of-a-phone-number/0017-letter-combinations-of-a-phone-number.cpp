class Solution {
public:
    vector<string> result;
    vector<string> mapping = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(string digits, int index, string current) {
        // Base case: if we've processed all digits
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        // Get letters mapped to the current digit
        string letters = mapping[digits[index] - '0'];

        // Try each letter
        for (char ch : letters) {
            backtrack(digits, index + 1, current + ch);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        backtrack(digits, 0, "");
        return result;
    }
};
