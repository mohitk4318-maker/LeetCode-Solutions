class Solution {
public:
int n;
int dp[100001][2];
int solve(string &s,int curr_idx,int prev_val){
    if(curr_idx >= n){
        return 0;
    }
    if(dp[curr_idx][prev_val] != -1 ){
        return dp[curr_idx][prev_val];
    }
    int flip=INT_MAX;
    int notflip=INT_MAX;

    if(s[curr_idx]=='0'){
        if(prev_val == 1){
            flip=1+solve(s,curr_idx+1,1);
        }
        else{
             flip=1+solve(s,curr_idx+1,1);
            notflip=solve(s,curr_idx+1,0);
        }
    }

    else if(s[curr_idx] == '1'){
        if(prev_val == 1){
            notflip=solve(s,curr_idx+1,1);
        }
        else {
            flip=1+solve(s,curr_idx+1,0);
            notflip=solve(s,curr_idx+1,1);
        }
    }
    return  dp[curr_idx][prev_val]=min(flip,notflip);
}
    int minFlipsMonoIncr(string s) {
        memset(dp,-1,sizeof(dp));
        n= s.length();
        return solve(s,0,0);
    }
};