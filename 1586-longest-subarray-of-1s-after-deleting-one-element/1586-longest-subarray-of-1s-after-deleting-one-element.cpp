class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;   // stores the maximum length found
        int curr = 0;  // current streak of 1's
        int prev = 0;  // previous streak of 1's before a 0
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                curr++;  // extend current streak of 1’s
            } else {
                ans = max(ans, prev + curr);  // "delete" this 0 and join prev+curr
                prev = curr;                  // move curr to prev (since 0 breaks the chain)
                curr = 0;                     // reset current streak
            }
        }
        
        // Special case: if the entire array is all 1's
        if (curr == nums.size()) {
            return curr - 1;  // we must delete 1 element
        }
        
        return max(ans, prev + curr); // final merge in case array ends with 1’s
    }
};
