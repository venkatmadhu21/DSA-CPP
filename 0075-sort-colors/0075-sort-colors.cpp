class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> zero, one, two;
        for (int n : nums) {
            if (n == 0) {
                zero.push_back(n);
            } else if (n == 1) {
                one.push_back(n);
            } else {
                two.push_back(n);
            }
        }
        int idx = 0;
        for (int i : zero) nums[idx++] = i;
        for (int i : one) nums[idx++] = i;
        for (int i : two) nums[idx++] = i;
    }
};
