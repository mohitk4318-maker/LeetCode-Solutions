class Solution {
public:int dp[101][101];
int n;
int solve(vector<vector<int>>& matrix,int row,int col){
    if(row == n-1){
        return matrix[row][col];
    }
    if(dp[row][col] != INT_MAX){
        return dp[row][col];
    }

    int sum=matrix[row][col];
    int minSum=INT_MAX;

    if(row+1<n && col-1>=0)
   minSum=min(minSum,sum+solve(matrix,row+1,col-1));

   if(row+1<n )
    minSum=min(minSum,sum+solve(matrix,row+1,col));

    if(row+1<n && col+1<n)
    minSum=min(minSum,sum+solve(matrix,row+1,col+1));

    return dp[row][col]= minSum;
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
         n=matrix.size();
        int result=INT_MAX;

        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                dp[row][col]=INT_MAX;
            }
        }

        int row=0;
        for(int col=0;col<n;col++){
            result=min(result,solve(matrix,row,col));
        }
        return result;

    }
};