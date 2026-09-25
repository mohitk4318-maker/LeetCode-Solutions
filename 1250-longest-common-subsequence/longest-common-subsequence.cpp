class Solution {
public:
int dp[1001][1001];
int m,n;
int solve(string &s1,string &s2,int i,int j){
    if(i>=m || j>=n){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(s1[i] == s2[j]){
        return  1 + solve(s1,s2,i+1,j+1);
    }
    
    return dp[i][j] = max(solve(s1,s2,i,j+1),solve(s1,s2,i+1,j));
}
    int longestCommonSubsequence(string s1, string s2) {
        memset(dp,-1,sizeof(dp));
         m =s1.length();
         n=s2.length();

         return solve(s1,s2,0,0);
    }
};