class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int maxscore=0;
        
        sort(begin(tokens),end(tokens));
        int score=0;
        int i=0,j=n-1;

        while(i<=j){
            if(power>=tokens[i]){
                power =power -tokens[i];
                score++;
                i++;

                maxscore=max(maxscore,score); 
            }
            else if(score>=1){
                power=power + tokens[j];
                score--;
                j--;
            }
            else 
            return maxscore;
        }
        return maxscore;


    }
};