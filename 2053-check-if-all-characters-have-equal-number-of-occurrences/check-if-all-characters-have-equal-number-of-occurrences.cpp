class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<int,int> mp;

        for(char x : s){
            mp[x]++;
        }

        int freq=mp.begin()->second;

        for(auto p : mp){
            if(p.second != freq){
                return false;
            }
        }
        return true;
    }
};