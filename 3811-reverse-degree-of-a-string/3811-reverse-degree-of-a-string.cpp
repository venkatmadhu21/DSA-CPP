class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int reverseIndex = 'z' - s[i] + 1;   // 'a' -> 26, 'b' -> 25, ..., 'z' -> 1
            int position = i + 1;                // 1-indexed position
            sum += reverseIndex * position;
        }
        return sum;
    }
};
