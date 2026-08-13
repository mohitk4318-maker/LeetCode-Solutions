class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pre;
       
        for(int i=0;i<rowIndex+1;i++){
             vector<int> curr(i+1,1);

            for(int j=1;j<i;j++){
                curr[j] = pre[j] + pre[j-1];

            }
            pre = curr;
        }
        return pre;
    }
};