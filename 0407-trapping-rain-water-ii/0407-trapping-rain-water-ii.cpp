class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m = heightMap.size();
        if (m == 0) return 0;
        int n = heightMap[0].size();
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j : {0, n-1}) {
                minHeap.push({heightMap[i][j], i, j});
                visited[i][j] = true;
            }
        }
        for (int j = 0; j < n; j++) {
            for (int i : {0, m-1}) {
                if (!visited[i][j]) {
                    minHeap.push({heightMap[i][j], i, j});
                    visited[i][j] = true;
                }
            }
        }
        vector<int> dirs = {1,0,-1,0,1};
        int water = 0;
        while (!minHeap.empty()) {
            auto cur = minHeap.top(); minHeap.pop();
            int h = cur[0], x = cur[1], y = cur[2];

            for (int d = 0; d < 4; d++) {
                int nx = x + dirs[d], ny = y + dirs[d+1];
                if (nx < 0 || ny < 0 || nx >= m || ny >= n || visited[nx][ny]) continue;

                visited[nx][ny] = true;
                water += max(0, h - heightMap[nx][ny]);
                minHeap.push({max(heightMap[nx][ny], h), nx, ny});
            }
        }
        return water;
    }
};
