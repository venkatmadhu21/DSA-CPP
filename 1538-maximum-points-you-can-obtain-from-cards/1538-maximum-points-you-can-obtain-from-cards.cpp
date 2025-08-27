class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        if (k == n) return total;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int maxi = sum;
        for (int takeRight = 1; takeRight <= k; takeRight++) {
            sum -= cardPoints[k - takeRight];                 
            sum += cardPoints[n - takeRight];              
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};