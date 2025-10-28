class Solution {
public:
    int countValidSelections(vector<int>& nums) {
         int n = nums.size();
        int s = 0;
        for (int x : nums) s += x;
        int ans = 0;
        int l = 0;
        for (int x : nums) {
            if (x != 0) {
                l += x;
            } else {
                if (l * 2 == s) {
                    ans += 2;
                } else if (abs(l * 2 - s) == 1) {
                    ++ans;
                }
            }
        }
        if (s == 0) {
            return n * 2;  // All zeros: every position and direction works
        }
        return ans;
    }
};