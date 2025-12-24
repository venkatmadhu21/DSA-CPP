class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        long long total = 0;
        for (int x : apple) total += x;

        sort(capacity.begin(), capacity.end(), greater<int>());

        long long sumCap = 0;
        int boxes = 0;

        for (int c : capacity) {
            sumCap += c;
            boxes++;
            if (sumCap >= total) return boxes;
        }
        return boxes;
    }
};
