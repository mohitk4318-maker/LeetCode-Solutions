class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==1)
        return {{1}};

        int m=n;
        vector<vector<int>> matrix(m,vector<int>(n));

        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;

        int count=1;
        int dir=0;

        while(left<=right && top<=bottom){
            if(dir == 0){
                for(int i=left;i<=right;i++){
                    matrix[top][i]=count++;
                }
                top++;
            }
            if(dir == 1){
                for(int i=top;i<=bottom;i++){
                    matrix[i][right]=count++;
                }
                right--;
            }
            if(dir == 2){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=count++;
                }
                bottom--;
            }
            if(dir ==3){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=count++;
                }
                left++;
            }
           dir=(dir+1)%4;
        }
        return matrix;
    }
};