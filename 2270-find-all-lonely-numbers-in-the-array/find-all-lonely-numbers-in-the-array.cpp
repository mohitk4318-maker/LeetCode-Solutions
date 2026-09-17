class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<int> result;

        for(int &num : nums){
            mp[num]++;
        }
        for(auto &it : mp){
            int x=it.first;

            if(it.second == 1 && 
            mp.find(x-1) == mp.end() &&
            mp.find(x+1) == mp.end()){
                result.push_back(x);
            }
        }
        return result;
    }
};