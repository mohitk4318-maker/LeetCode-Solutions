class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();

        sort(begin(nums),end(nums));

        int i=0;
        int j=n-1;
        int count=0;

        while(i<j){
            if(nums[i]+nums[j] == k){
                count += 1;
                i++;
                j--;
            }

            if(nums[i]+nums[j] > k){
                j--;
            }

            if(nums[i]+nums[j] <k){
                i++;
            }
        }
        return count;
    }
};