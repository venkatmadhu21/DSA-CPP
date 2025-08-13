class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int fresh=0;
        int mini=-1;
        queue<pair<int,int>> pq;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (grid[i][j]==2) pq.push({i,j});
                if(grid[i][j]==1) fresh++;
            }
        }
        if(fresh==0) return 0;
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        while(!pq.empty()){
            int s=pq.size();
            mini++;
            while(s--){
                auto [r,c]=pq.front(); pq.pop();
                for(auto& d : dir){
                    int nr=r + d[0];
                    int nc = c + d[1];
                        if(nr<0 || nc < 0 || nr >=m || nc >=n) continue;
                        if(grid[nr][nc]!=1)continue;
                        grid[nr][nc]=2;
                        --fresh;
                        pq.push({nr,nc});
                }
            }
        }
        return (fresh==0) ? mini : -1;
    }
};