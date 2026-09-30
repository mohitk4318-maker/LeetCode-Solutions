class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);

        int p=0;
        int q=n-1;

        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0){
               result[p]=nums[i];
                p++;
            }
            else{
                result[q]=nums[i];
                q--;
            }
        }
        return result;
    }
};