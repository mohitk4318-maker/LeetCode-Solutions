class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp(n);
        vector<int> result;

        for(int &num : nums){
            mp[num]++;
        }

        for(auto &num : mp){
            if(num.second == 2){
                result.push_back(num.first);
            }
        }
        for(int i=1;i<=n;i++){
            if(mp.find(i) == mp.end())
            result.push_back(i);
        }
        return result;
    }
};