class Solution {
public:
bool isvowel(char &ch){
    if(ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' ){
        return true;
    }
    return false;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int Q=queries.size();
        int N=words.size();

        vector<int> result(Q);
        vector<int> cummsum(N);

        int sum=0;

        for(int i=0;i<N;i++){
            if(isvowel(words[i][0]) && isvowel(words[i].back())){
                sum++;
            }

             cummsum[i]=sum;
            }
            for(int i=0;i<Q;i++){
                int l=queries[i][0];
                int r=queries[i][1];

                result[i] = cummsum[r] - ((l>0) ? cummsum[l-1] : 0);
            }
        
        return result;
    }
};