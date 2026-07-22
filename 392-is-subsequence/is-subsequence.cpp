class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();

        map<char,vector<int>>mp;

        int previous =-1;

        for(int i=0;i<n;i++){
            mp[t[i]].push_back(i);    
        }

        for(int i=0;i<m;i++){
            char ch=s[i];

            if(mp.find(ch) == mp.end())
            return false;
        

        vector<int> indices = mp[ch];

        auto it=upper_bound(begin(indices),end(indices), previous);

        if(it == indices.end())
        return false;

        previous=*it;
        }
        return true;       
    }
};