class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        int maxFreq = 0;
        for (auto &p : freq) {
            maxFreq = max(maxFreq, p.second);
        }
        int ans = 0;
        for (auto &p : freq) {
            if (p.second == maxFreq) {
                ans += p.second;
            }
        }
        return ans;
    }
};
