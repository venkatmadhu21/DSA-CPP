class Solution {
public:
    int start = 0, maxLen = 1;
    string s;
    void expand(int left, int right) {
        int n = s.size();
        while (left >= 0 && right < n && s[left] == s[right]) {
            int len = right - left + 1;
            if (len > maxLen) {
                start = left;
                maxLen = len;
            }
            left--;
            right++;
        }
    }
    string longestPalindrome(string str) {
        s = str;
        int n = s.size();
        if (n == 0) return "";
        for (int i = 0; i < n; i++) {
            expand(i, i);
            expand(i, i + 1);
        }
        return s.substr(start, maxLen);
    }
};
