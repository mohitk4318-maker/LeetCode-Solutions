class Solution {
public:
int solve(int n,vector<int> &dp){
    if(n<0){
        return 0;
    }

    if(n == 0){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int left_step=solve(n-1,dp);
    int right_step=solve(n-2,dp);

    return dp[n]=left_step + right_step;
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};