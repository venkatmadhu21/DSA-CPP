class Solution {
public:
int solve(int i){
    int ans = __builtin_popcount(i);
    return ans;
}
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            res.push_back(solve(i));
        }
        return res;
    }
};