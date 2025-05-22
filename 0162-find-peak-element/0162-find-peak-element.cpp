class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (nums[mid] > nums[mid + 1]) {
            // Peak is in the left half (including mid)
            high = mid;
        } else {
            // Peak is in the right half
            low = mid + 1;
        }
    }
    return low;  // or high, since low == high
}

};