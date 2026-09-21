class Solution {
public:
int n;
int dp[1001][1001];
int solve(vector<vector<int>>& pairs,int i,int p){
    if(i>=n){
        return 0;
    }
    if(dp[i][p+1] != -1){
        return dp[i][p+1];
    }
    
    int take=0;
    if(p == -1 ||  pairs[i][0]>pairs[p][1]){
        take=1+solve(pairs,i+1,i);
    }
    int skip=solve(pairs,i+1,p);
    
    if(p != -1){
        dp[i][p+1] =max(take,skip);
    }
    return max(take,skip);
}
    int findLongestChain(vector<vector<int>>& pairs) {
        n=pairs.size();
        sort(begin(pairs),end(pairs));
        memset(dp,-1,sizeof(dp));
        return solve(pairs,0,-1);
    }
};