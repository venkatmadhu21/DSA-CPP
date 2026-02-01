class Solution {
public:
vector<int>ranks,parent;
void makeset(int n ){
    ranks.resize(n+1,0);
    parent.resize(n+1);
    for(int i=0;i<n;i++){
        parent[i] = i;
    }
}
int finds(int x){
    if(parent[x] == x )return x;
    return parent[x] = finds(parent[x]);
}
void unions(int a,int b){
    int pa = finds(a);
    int pb = finds(b);
    if(pa == pb) return;
    if(ranks[pa] < ranks[pb]) parent[pa] = pb ;
    else if (ranks[pb] < ranks[pa]) parent[pb]  =pa ;
    else {
         parent[pb] = pa;
         ranks[pa]++;
    }
}
int connect(int n){
    int cnt=-1;
    for(int i =0;i<n;i++){
        if(parent[i]==i) cnt++;
    }
    return cnt;
}
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n-1 > connections.size()) return -1;
        int ans =0;
        bool res=false;
        makeset(n);
        for(auto &it : connections){
            unions(it[0],it[1]);
        }
        return connect(n);
    }
};