class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();

        int sum=0;
        for(int &x : nums){
            sum+=x;
        }
        
        int left=0,right=0;

        for(int i=0;i<n;i++)
        {
            right=sum - nums[i] - left;

            if(left == right)
            return i;

            left+=nums[i];
        }

        return -1;
    }
};