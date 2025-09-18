class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex;  
        int left = 0, maxLen = 0;
        for (int right = 0; right < s.size(); right++) {
            if (lastIndex.find(s[right]) != lastIndex.end() && lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }
            lastIndex[s[right]] = right;  
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};