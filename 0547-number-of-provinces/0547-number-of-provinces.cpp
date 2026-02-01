class Solution {
public:
vector<int>ranks,parent;
void makeSet(int n){
    ranks.resize(n+1,0);
    parent.resize(n+1);
    for(int i =0;i<n;i++){
        parent[i]=i;
    }
}
int finds(int x){
    if(parent[x]==x) return x;
    return parent[x]=finds(parent[x]);
}
void unions(int a,int b){
    int pa = finds(a);
    int pb=finds(b);
    if(pa == pb) return ;
    if(ranks[pa] < ranks[pb]) parent[pa]=pb;
    else if (ranks[pb] < ranks[pa]) parent[pb] =pa;
    else{
        parent[pb]=pa;
        ranks[pa]++;

    }
}
int connect(){
    int cnt=0;
    for(int i=0;i<parent.size();i++){
        
        if(parent[i]==i) cnt++;
    }
    return cnt;
}
    int findCircleNum(vector<vector<int>>& isConnected) {   
             int n =isConnected.size();
             makeSet(n);
            for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    unions(i, j);
                }
            }
        }
        return connect();
    }
};