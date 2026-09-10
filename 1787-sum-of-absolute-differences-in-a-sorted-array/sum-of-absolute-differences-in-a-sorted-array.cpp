class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        vector<int> prefixsum(n);

        prefixsum[0]= nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i]= prefixsum[i-1] + nums[i];
            
        }

        for(int i=0;i<n;i++){
            
        int leftsum=prefixsum[i]- nums[i];
        int rightsum=prefixsum[n-1] - prefixsum[i];

        result[i]=(nums[i]*i) - leftsum + rightsum -(nums[i] * (n-i-1));

        }
        return result;

    }
};