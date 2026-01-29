class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
 vector<int> diff;
    int total = 0;
    int n = costs.size();
    for (int i = 0; i < n; i++) {
        total += costs[i][0];
        diff.push_back(costs[i][1] - costs[i][0]);
    }
    sort(diff.begin(), diff.end());
    for (int i = 0; i < n / 2; i++) {
        total += diff[i];
    }
    return total;
}
    
};