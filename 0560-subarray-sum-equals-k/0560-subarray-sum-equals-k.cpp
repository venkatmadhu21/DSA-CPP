class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;  // equivalent to map.put(0, 1)

        int total_count = 0;
        int current_sum = 0;

        for (int num : nums) {
            current_sum += num;

            int prefix_sum = current_sum - k;

            if (mp.find(prefix_sum) != mp.end()) {
                total_count += mp[prefix_sum];
            }

            mp[current_sum]++;  // same as getOrDefault + 1
        }

        return total_count;
    }
};