class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        vector<vector<bool>> t(n,vector<bool>(n,false));
        int count =0;

        for(int L=1;L<=n;L++){
            for(int i=0;i+L-1<n;i++){
                int j=i+L-1;

                if(i == j)
                 t[i][j]=true;

                else if(i+1 == j){
                    if(s[i] == s[j])
                    t[i][j] =true;
                }

                else{
                    if(s[i] == s[j] && t[i+1][j-1])
                    t[i][j]= true;
                }
                if(t[i][j] == true)
                count++;
            }
        }
        return count;
    }
};