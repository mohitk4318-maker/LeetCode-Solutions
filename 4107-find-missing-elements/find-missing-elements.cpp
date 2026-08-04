class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<bool> present(101,false);

        int maxEL=nums[0];
        int minEL=nums[0];

        for(int i=0;i<nums.size();i++){
            maxEL=max(nums[i],maxEL);
            minEL=min(nums[i],minEL);
            present[nums[i]]=true;
        }

        vector<int>result;
        for(int curr=minEL;curr<=maxEL;curr++){
            if(!present[curr]){
                result.push_back(curr);
            }
        }
        return result;
    }
};