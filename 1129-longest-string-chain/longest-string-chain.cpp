class Solution {
public:
int n;
int dp[1001][1001];

bool ispred(string &p ,string &i){
    int M=p.length();
    int N=i.length();
    if(M>=N || N-M != 1){
        return false;
    }

    int x =0;
    int y=0;
    while(x <M && y<N){
        if(p[x] == i[y]){
            x++;
        }
        y++;
    }
    return x == M;
}
static bool myfunction(string &word1,string &word2){
    return word1.length()<word2.length();
}
    int solve(vector<string>& words,int p,int i){
        if(i>=n){
            return 0;
        }
        if(p != -1 && dp[p][i] != -1){
            return dp[p][i];
        }
        int take=0,skip=0;
        if(p == -1 || ispred(words[p],words[i])){
            take=1+ solve(words,i,i+1);
        }
         skip=solve(words,p,i+1);

        if(p != -1){
            dp[p][i] =max(take,skip);
        }
        return  max(take,skip);
    }

    int longestStrChain(vector<string>& words) {
        memset(dp,-1,sizeof(dp));
        n=words.size();
        sort(begin(words),end(words),myfunction);
        return solve(words,-1,0);

    }
};