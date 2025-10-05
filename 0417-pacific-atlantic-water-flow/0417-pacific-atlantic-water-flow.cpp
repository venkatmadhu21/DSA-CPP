class Solution {
public:
    int m, n;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));
        for(int i=0;i<m;i++) dfs(heights, pacific, i, 0);
        for(int j=0;j<n;j++) dfs(heights, pacific, 0, j);
        for(int i=0;i<m;i++) dfs(heights, atlantic, i, n-1);
        for(int j=0;j<n;j++) dfs(heights, atlantic, m-1, j);
        vector<vector<int>> res;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pacific[i][j] && atlantic[i][j]){
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }   
    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& visited, int r, int c){
        visited[r][c] = true;
        int dirs[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        for(auto &d:dirs){
            int nr=r+d[0], nc=c+d[1];
            if(nr>=0 && nr<m && nc>=0 && nc<n && !visited[nr][nc] 
               && heights[nr][nc] >= heights[r][c]){
                dfs(heights, visited, nr, nc);
            }
        }
    }
};
