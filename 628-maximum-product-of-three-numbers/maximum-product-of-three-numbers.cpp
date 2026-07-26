class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int n=nums.size();

        sort(begin(nums),end(nums));

        int max1= nums[n-1] *nums[n-2] *nums[n-3];
          int max2= nums[0] *nums[1] *nums[n-1];

          int jada= max(max1,max2);

          return jada;
        

        
    }
};