#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        vector<array<int, 3>> arr; // {enqueueTime, processingTime, index}

        for (int i = 0; i < n; i++) {
            arr.push_back({tasks[i][0], tasks[i][1], i});
        }

        // Sort by enqueueTime
        sort(arr.begin(), arr.end());

        // Min-heap: {processingTime, index}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        long long time = 0;
        int i = 0; // pointer for sorted tasks
        vector<int> order;

        while (i < n || !pq.empty()) {
            // Push all tasks that are available by current time
            while (i < n && arr[i][0] <= time) {
                pq.push({arr[i][1], arr[i][2]});
                i++;
            }

            if (pq.empty()) {
                // No tasks available, jump to next enqueue time
                time = arr[i][0];
            } else {
                // Pick the task with smallest processing time (and index if tie)
                auto [procTime, idx] = pq.top();
                pq.pop();
                time += procTime;
                order.push_back(idx);
            }
        }

        return order;
    }
};
