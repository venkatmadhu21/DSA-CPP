class Solution {
public:

    int fdp(int n , vector<int>&dp){
        if(n==0) return 0;
        if(n<=2) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = fdp(n-1,dp) + fdp(n-2,dp);
    }

    int fib(int n) {
    vector<int>dp(n+1,-1);
       return fdp(n,dp);
    }
};
