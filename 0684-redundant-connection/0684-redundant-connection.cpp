class Solution {
public:
vector<int>ranks,parent;
void makeset(int n){
    ranks.resize(n+1,0);
    parent.resize(n+1);
    for(int i =0;i<n;i++){
        parent[i] = i;
    }
}
int finds(int x){
    if(parent[x] == x )return x;
    return parent[x] = finds(parent[x]);
}
bool unions(int a,int b){
    int pa = finds(a);
    int pb = finds(b);
    if(pa == pb ) return true;
    if(ranks[pa] < ranks[pb]) parent[pa] = pb;
    else if(ranks[pb] < pa ) parent[pb] = pa;
    else{
        parent[pb] = pa;
        ranks[pa]++; 
    }
    return false;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
            int n = edges.size();
            vector<int>ans;
            makeset(n);
            for(auto &e : edges){
                if(unions(e[0],e[1])){
                 ans.push_back(e[0]); 
                 ans.push_back(e[1]);
                }
            }        
            return ans;
    }

};